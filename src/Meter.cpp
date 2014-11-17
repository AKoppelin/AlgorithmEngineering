#include <iostream>
#include <iomanip>
#include <cstdint>
#include <fstream>
#include <vector>
#include "Stopwatch.cpp"

using namespace std;

class Meter{
/* TODO:
/	Change code in a way that any class can be used, not only the Stopwatch class
*/
public:
	Stopwatch watch;
	int repetitions = 6;
	int argument;
	vector<uint64_t> data;
	uint64_t min, max, mean, sum = 0;
	double sd;  /// standard deviation

	Meter() {

	}

	/// This function calls the pointed function (pFunc).
	void measure(int(*pFunc)(int), int arg) {
		argument = arg;
		/// run the tests using the committed function
		for (int i = 0; i < repetitions; i++) {
			watch.start();
			pFunc(arg); /// call the committed function with the committed argument
			watch.stop();
			data.push_back(watch.getValue());
			watch.reset();
		}

		/// statistics
		min = max = data[0];

		for (int i = 1; i < repetitions; i++) {
			if (data[i] < min) min = data[i];
			if (data[i] > max) max = data[i];
			sum += data[i];
		}
		mean = sum / repetitions;

/* TODO:
/ compute standard deviation
*/
		saveDataToFile();
	}

	/// This function writes the measured data to an output file
	/* TODO:
	/	Check, if file already exists and is not empty. If so, skip the headline and append the data.
	*/
	void saveDataToFile() {
		fstream fs;
		fs.open("Measurements", ios::app);
		if (fs) {
			fs << "n" << setw(20) << "min [us]" << setw(20) << "max [us]" << setw(20) << "mean [us]" << setw(20) << "sd [us]" << setw(20) << "measurements [us]" << endl;;
			fs << argument << setw(18) << min << setw(20) << max << setw(20) << mean << setw(20) << "N/A" << setw(11);
			for (int i = 0; i < repetitions; i++) {
				fs << data[i] << "\t";
			}
			fs << endl;
		}
		fs.close();
	}
};
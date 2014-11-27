#include "Meter.h"

Meter::Meter() {}

Meter::~Meter() {}

/// This function calls the pointed function (pFunc).
void Meter::measureTime(uint64_t(*pFunc)(unsigned int), unsigned int arg, int repetitions, string label) {
	argument = arg;
	this->repetitions = repetitions;
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

	for (int i = 0; i < repetitions; i++){
		dev = mean - (double) data[i];
		dsum += (dev * dev);
	}
	sd = sqrt((double)dsum / (repetitions - 1));

	string filename = "TimeMeasurements_" + label + ".dat";
	saveDataToFile(filename, "us");
}

/// This function writes the measured data to an output file
void Meter::saveDataToFile(string filename, string unit) {
	fstream fs;
	if (!fileExists(filename)) {
		writeHeadlineToFile(filename, unit);
	}
	fs.open(filename, ios::app);
	if (fs) {
		if (argument < 10) fs << " ";
		fs << argument << setw(22) << min << setw(23) << max << setw(23) << mean << setw(23) << sd << setw(15);
		for (int i = 0; i < repetitions; i++) {
			fs << data[i] << "\t";
		}
		fs << endl;
	}
	fs.close();
	data.clear();
}

// This function checks if a file with the given name exists by trying to open it
bool Meter::fileExists(string filename) {
	fstream fs;
	fs.open(filename, ios::in);
	if (fs) {
		fs.close();
		return true;
	}
	fs.close();
	return false;
}

void Meter::writeHeadlineToFile(string filename, string unit) {
	fstream fs;
	fs.open(filename, ios::app);
	if (fs) {
		fs << "n" << setw(20) << "min [" << unit.c_str() << "]"
			<< setw(20) << "max [" << unit.c_str() << "]"
			<< setw(20) << "mean [" << unit.c_str() << "]"
			<< setw(20) << "sd [" << unit.c_str() << "]"
			<< setw(20) << "measurements [" << unit.c_str() << "]" << endl;
	}
}
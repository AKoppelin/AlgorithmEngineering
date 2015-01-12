#ifndef _METER_H
#define _METER_H

#include <iostream>
#include <iomanip>
#include <cstdint>
#include <fstream>
#include <vector>
#include <math.h>
#include "Cycles.h"
#include "Stopwatch.h"

using namespace std;

class Meter{

private:
	Stopwatch watch;
	Cycles cycle;
	int argument, repetitions;
	vector<uint64_t> data;
	uint64_t min, max, mean, sum;
	double dev, sd, dsum;  /// deviation, standard deviation, sum of deviations
	bool fileExists(string filename);
	void writeHeadlineToFile(string filename, string unit);

public:
	/// Constructor
	Meter();

	/// Destructor
	~Meter();

	/// Methods
//	void measureTime(uint64_t(*pFunc)(unsigned int), unsigned int arg, int repetitions, string label);
//	void measureTime(void (*pFunc)(std::vector<size_t> arg), std::vector<size_t> arg, int repetitions, string label);
	void measureCycles(uint64_t(*pFunc)(unsigned int), unsigned int arg, int repetitions, string label);
	void saveDataToFile(string filename, string unit);

	template<typename T, typename PAR>
	void measureTime(T (*pfunc)(PAR), PAR arg, int repetitions, string label) {
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
};

#endif

#ifndef _METER_H
#define _METER_H

#include <iostream>
#include <iomanip>
#include <cstdint>
#include <fstream>
#include <vector>
#include "Stopwatch.h"
#include "Cycles.h"

using namespace std;

class Meter{

private:
	Stopwatch watch;
	//Cycles cycle;
	int argument, repetitions;
	vector<uint64_t> data;
	uint64_t min, max, mean, sum = 0;
	double dev, sd, dsum;  /// deviation, standard deviation, sum of deviations
	bool fileExists(string filename);
	void writeHeadlineToFile(string filename, string unit);

public:
	/// Constructor
	Meter();

	/// Destructor
	~Meter();

	/// Methods
	void measureTime(uint64_t(*pFunc)(unsigned int), unsigned int arg, int repetitions, string label);
	void saveDataToFile(string filename, string unit);
};

#endif
#include <iostream>
#include <iomanip>
//#include <cstdint>
#include <fstream>
#include <vector>
#include "Stopwatch.h"

using namespace std;

class Meter{

private:
	Stopwatch watch;
	int repetitions = 6;
	int argument;
	vector<uint64_t> data;
	uint64_t min, max, mean, sum = 0;
	double sd;  /// standard deviation

public:
	/// Constructor
	Meter();

	/// Destructor
	~Meter();

	/// Methods
	void measureTime(int(*pFunc)(int), int arg);
	void saveTimeDataToFile();
};
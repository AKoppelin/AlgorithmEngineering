#include "Stopwatch.h"
//using namespace std;
	
	/// This functions sets the starting time of the stopwatch.
	void Stopwatch::start() {
		tp1 = std::chrono::system_clock::now();
	}

	/// This functions sets the stopping time of the stopwatch.
	void Stopwatch::stop() {
		tp2 = std::chrono::system_clock::now();
	}

	/// This functions computes the duration.
	void Stopwatch::peek(){
		duration = tp2 - tp1;
	}

	/// This functions resets the duration to 0.
	void Stopwatch::reset() {
		duration = duration.zero();
	}

	/// This functions returns the duration.
	uint64_t Stopwatch::getValue() {
		peek();
		return duration.count();
	}
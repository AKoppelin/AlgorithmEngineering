#include <chrono>
#include <cstdint>
using namespace std;

class Stopwatch {
	std::chrono::time_point<std::chrono::system_clock> tp1, tp2;
	std::chrono::duration<uint64_t, std::nano> duration;

public:
	/// This functions sets the starting time of the stopwatch.
	void start() {
		tp1 = std::chrono::system_clock::now();
	}

	/// This functions sets the stopping time of the stopwatch.
	void stop() {
		tp2 = std::chrono::system_clock::now();
	}

	/// This functions computes the duration.
	void peek(){
		duration = tp2 - tp1;
	}

	/// This functions resets the duration to 0.
	void reset() {
		duration = duration.zero();
	}

	/// This functions returns the duration.
	uint64_t getValue() {
		peek();
		return duration.count();
	}
};
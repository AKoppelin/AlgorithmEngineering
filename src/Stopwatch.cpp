#include "Stopwatch.h"

Stopwatch::Stopwatch() {};
Stopwatch::~Stopwatch() {};

// This functions sets the starting time of the stopwatch.
void Stopwatch::start() {
//	cout << std::time(nullptr) << endl;
	tp1 = std::chrono::system_clock::now();
//	printf("Start: %u \n", tp1);
}

// This functions sets the stopping time of the stopwatch.
void Stopwatch::stop() {
	tp2 = std::chrono::system_clock::now();
//	cout << std::time(nullptr) << endl;
//	printf("Stop: %u \n", tp2);
}

// This functions computes the duration.
void Stopwatch::peek(){
	duration = std::chrono::duration_cast<std::chrono::duration<uint64_t, std::micro> > (tp2 - tp1);
//	duration = tp2 - tp1;
//    duration = std::chrono::duration_cast<std::chrono::duration<uint64_t,std::ratio<1,1000000> >>;
}

// This functions computes the duration.
//void Stopwatch::peekStop(){
////	startpeek = std::chrono::duration_cast<std::chrono::duration<uint64_t, std::micro> > (tp1 - 0);
////	startpeek = tp2;
////    duration = std::chrono::duration_cast<std::chrono::duration<uint64_t,std::ratio<1,1000000> >>;
//    std::time_t now_c = std::chrono::system_clock::to_time_t(tp2);
//    cout << ctime(&now_c);
//}


//// This functions computes the duration.
//void Stopwatch::peekStart(){
////	duration = std::chrono::duration_cast<std::chrono::duration<uint64_t, std::micro> > (tp2 - 0);
////	startpeek = tp1 - tp1;
////	startpeek = startpeek + tp1;
//    std::time_t now_c = std::chrono::system_clock::to_time_t(tp1);
//    cout << ctime(&now_c);
////    duration = std::chrono::duration_cast<std::chrono::duration<uint64_t,std::ratio<1,1000000> >>;
//}

// This functions resets the duration to 0.
void Stopwatch::reset() {
	duration = duration.zero();
}

// This functions returns the duration.
uint64_t Stopwatch::getValue() {
	peek();
	return duration.count();
}

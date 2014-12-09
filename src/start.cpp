#include "Fibonacci.h"
#include "Meter.h"
#ifdef TEST_RUN
//#include "gtest/gtest.h"
//#include <random>
#endif

int main(
#ifdef TEST_RUN
int argc, char **argv
#endif
)  {
Fibonacci f;
f.initFiboLUT();
#ifdef TEST_RUN
::testing::InitGoogleTest(&argc, argv);
RUN_ALL_TESTS();
#else
return 0;
#endif // TEST_RUN
}

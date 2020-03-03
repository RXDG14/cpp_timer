#include <iostream>
//#include <unistd>
#include <chrono>
using namespace std;
typedef std::chrono::high_resolution_clock Clock;

auto start_time = Clock::now();
    
auto end_time = Clock::now();
auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time).count();
//cout<<std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time).count() << " nanoseconds" << std::endl;

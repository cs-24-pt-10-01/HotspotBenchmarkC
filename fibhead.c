#include <stdio.h>
#include <stdlib.h>

void start_rapl(const char*);
void stop_rapl(const char*);

// test method from Rosetta code
unsigned int fibb(unsigned int a){
    if (a <= 1){
        return a;
    }
    return fibb(a-1) + fibb(a-2);
}

int fibhead_bench() {
    int fibParam = 47;

    start_rapl("Fib");
    long long int result = fibb(fibParam);
    stop_rapl("Fib");

    // stopping compiler optimization
    if (result < 42){
        printf("%lld\n", result);
    }
    
    return 0;
}

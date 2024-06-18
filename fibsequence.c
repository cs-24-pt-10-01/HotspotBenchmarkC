#include <stdio.h>
#include <stdlib.h>

void start_rapl(const char*);
void stop_rapl(const char*);

// test method from Rosetta code
long long fibb(long long a, long long b, int n) {
    return (--n>0)?(fibb(b, a+b, n)):(a);
}

int fibsequence_bench() {
    int fibParam = 47;

    start_rapl("Fib");
    long long int result = fibb(1,1,fibParam);
    stop_rapl("Fib");

    // stopping compiler optimization
    if (result < 42){
        printf("%lld\n", result);
    }
    
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "fibsequence.h"
#include "nbody.h"
#include "quicksort.h"
#include "mergesort.h"

//void start_rapl();
//void stop_rapl();

int main(int argc, char *argv[]) {    
    //start_rapl("Main");

    // The order is equivalent to the JavaScript version
    printf("starting fib!\n");
    fibsequence_bench();
    printf("done fib!\n");

    printf("starting nbody!\n");
    nbody_bench();
    printf("done nbody!\n");

    printf("starting quicksort!\n");
    quicksort_bench();
    printf("done quicksort!\n");

    printf("starting mergesort!\n");
    mergesort_bench();
    printf("done mergesort!\n");

    //stop_rapl("Main");

    return 0;
}
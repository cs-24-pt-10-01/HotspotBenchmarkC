#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "fibsequence.h"
#include "nbody.h"
#include "quicksort.h"

//void start_rapl();
//void stop_rapl();

int main(int argc, char *argv[]) {    

    printf("starting fib!\n");
    fibsequence_bench();
    printf("done fib!\n");

    printf("starting nbody!\n");
    nbody_bench();
    printf("done nbody!\n");

    printf("starting quicksort!\n");
    quicksort_bench();
    printf("done quicksort!\n");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "quicksort.h"

//void start_rapl();
//void stop_rapl();

int main(int argc, char *argv[]) {    

    printf("starting quicksort!\n");
    quicksort_bench();
    printf("done quicksort!\n");

    return 0;
}
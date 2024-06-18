#gcc main.c -O3 -o benchmarks/$folder/c/bench -L./target/release -lrapl_lib -Wl,-rpath=./target/release
gcc -fomit-frame-pointer -march=ivybridge main.c quicksort.c fibsequence.c nbody.c mergesort.c -O3 -L. -lthor_lib -Wl,-rpath=.

for i in {1..10}
do
   node ./main
done
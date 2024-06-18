#gcc main.c -O3 -o benchmarks/$folder/c/bench -L./target/release -lrapl_lib -Wl,-rpath=./target/release
gcc main.c -O3 -L. -lrapl_lib -Wl,-rpath=.

for i in {1..10}
do
   node ./main
done
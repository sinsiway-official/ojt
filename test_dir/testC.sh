[ -f "./test" ] && rm -f test
g++ -L. -lpcapi -o test test.c
[ -f "./test" ] && ./test

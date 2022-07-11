[ -f "./PetraApiCDemo" ] && rm -f PetraApiCDemo
g++ -L. -lpcapi -o PetraApiCDemo PetraApiCDemo.cpp
[ -f "./PetraApiCDemo" ] && ./PetraApiCDemo

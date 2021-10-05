#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdio>
#include <typeinfo>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <iterator>
#include <memory>
#include <new>
#include <utility>
#include <stdexcept>

using namespace std;

// TMP递归计算阶乘
// enum hack

template<unsigned n>
struct Factorial{
    enum { value = n * Factorial<n - 1>::value };
};

template<>
struct Factorial<0>{
    enum { value = 1 };
};


int main(int argc, char** argv)
{
    cout << Factorial<0>::value << endl;
    cout << Factorial<3>::value << endl;
    cout << Factorial<5>::value << endl;

    return 0;
}

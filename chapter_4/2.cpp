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

//  Koenig Lookup or Argument Dependent Lookup(ADL)

void gg(){
    std::cout << "gg\n";
}

namespace test{

class Test{
public:
    int a;
};

void swap(Test a, Test b){
    std::cout << "test function.\n";
};

}

void swap(test::Test a, test::Test b){
    std::cout << "global function.\n";
};

int main(int argc, char** argv)
{
    test::Test t1, t2;
    using std::swap;
    swap(t1, t2);
    using namespace test;
    gg();
    
    return 0;
}

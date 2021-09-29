#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <numeric>
#include <typeinfo>
#include <iterator>
#include <memory>
#include <new>
#include <utility>
#include <functional>
#include <stdexcept>

using namespace std;

// 阻止copy

class Uncopy{
public:
    Uncopy() {}
    ~Uncopy() {}
private:
    Uncopy(const Uncopy&);
    Uncopy& operator=(const Uncopy&);
};

class House: public Uncopy{

};

int main(int argc, char** argv)
{
    House a, b;
    //a = b;
    //House c(a);

    return 0;
}

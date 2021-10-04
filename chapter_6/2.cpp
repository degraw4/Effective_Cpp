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

// 纯虚函数+定义来实现派生类强制接口实现+默认操作

class Airplane{
public:
    virtual void fly() = 0;
};

void Airplane::fly(){
    // default operation
}

class ModelA: public Airplane {
public:
    void fly(){
        Airplane::fly();
    }
};

class ModelB: public Airplane {
public:
    void fly(){
        // custom operation
    }
};

int main(int argc, char** argv)
{
    
    return 0;
}

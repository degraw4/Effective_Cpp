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

// static对象何时初始化
// 类内static成员，手动定义时初始化
// main外的global static，程序开始时初始化
// main内的local static，main函数开始后初始化
// 函数内的local static，函数首次调用时初始化 
// (ps. 类成员函数内的local static也是首次调用时初始化)

class Test{
public:
    Test() { cout << "ctr\n"; }
};

class Base{
public:
    static Test t1;
    void more_test(){
        static Test t2;
    }
};

// static Test t2;

void test(){
    static Test t4;
}

// Test Base::t1;

int main(int argc, char** argv)
{
    cout << "main\n";
    Base b;
    b.more_test();
    // static Test t3;
    return 0;
}

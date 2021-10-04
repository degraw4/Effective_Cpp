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

// public继承中，基类函数即使被派生类隐藏，但还是存在于派生类中
// 可以通过基类::来显示调用

class Base{
public:
    void func() {
        cout << "base\n";
    }
};

class Derive: public Base{
public:
    void func() {
        cout << "derive\n";
    }
};

int main(int argc, char** argv)
{
    Derive d;
    d.Base::func();
    d.func();
    // 通过静态绑定仍然可以调用基类的函数
    Base* pb = &d;
    Derive* pd = &d;
    pb->func();
    pd->func();
    return 0;
}

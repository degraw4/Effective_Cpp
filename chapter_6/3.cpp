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

// 有缺省值的virtual函数，静态绑定不继承缺省参数
// 动态绑定继承缺省参数
// 即，缺省参数是静态绑定的

class Base{
public:
    virtual void draw(string s = "base"){
        cout << s << endl;
    }
};

class Derive: public Base{
public:
    void draw(string s = "derive"){
        cout << s << endl;
    }
};

int main(int argc, char** argv)
{
    Base b;
    Derive d;
    Base *pb = &b;
    // 静态绑定调用
    pb->draw();
    // 静态绑定调用
    Derive* pd = &d;
    pd->draw();
    // 动态绑定调用
    pb = &d;
    pb->draw();
    return 0;
}

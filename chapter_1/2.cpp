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

class Test{
public:
    int a;
    double b;
    static int c;
    // 但是变量加上mutable就可以在const函数内更改了
    mutable int d;
    mutable double e;

    void change(){}
    void const_change() const{}
    
    // const成员函数只能修改静态成员变量和mutable成员
    void test() const{
        //a = 1;
        //b = 0.5;
        d = 1;
        e = 0.7;
        c = 1;
        // const成员函数内部不能调用非const的成员函数
        //change();
        const_change();
    }

};


int main(int argc, char** argv)
{
    
    

    return 0;
}

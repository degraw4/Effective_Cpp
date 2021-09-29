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
    // 类内静态成员初始化，必须是整数类型的const
    // 或者不是整数类型，但必须加上constexpr
    const static int num = 10;
    constexpr static const double rate = 6.5;
    const int a = 0;

    // 枚举类型可以充当int使用，且无法对其取地址
    enum {number = 5};
    int arr[number];
    void test(){
        //cout << &number << endl;
    }
};

// 但类内的静态成员即使初始化了，也只是声明而不是定义
// 要在类外额外定义一次，且由于是const，只定义不赋值
const int Test::num;

int main(int argc, char** argv)
{
    cout << Test::num << endl;
    cout << &Test::num << endl;
    // 非静态成员引用必须与特定对象相对，即使其为const
    //cout << Test::a << endl;

    return 0;
}

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

// 使用对象管理资源

// 资源类对象
class Investment{
public:
    Investment() { cout << "ctr\n"; }
    ~Investment() { cout << "dtr\n"; }
    // 类型转换函数
    operator int*() const{
        return ptr;
    }
    int data;
    int* ptr;
};

// 工厂函数
Investment* createInvestment(){
    auto ptr = new Investment();
    return ptr;
}

// 使用资源的函数
void func(){
    shared_ptr<Investment> ptr1(createInvestment());
    shared_ptr<Investment> ptr2 = make_shared<Investment>();
    // 除了get()，智能指针还可以通过.和->转换为原始指针
    ptr1->data;
    (*ptr1).data;
}

int main(int argc, char** argv)
{
    func();

    return 0;
}

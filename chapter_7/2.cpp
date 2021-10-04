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

template<class T>
class smartPtr{
public:
    //模板成员函数
    template<class Y>
    // 初始化列表保证了只有合法的Y*->T*可以通过编译
    smartPtr(const smartPtr<Y>& other): ptr(other.get()) {}
    T* get() const { return ptr; }
private:
    T* ptr;
};

int main(int argc, char** argv)
{
    
    return 0;
}

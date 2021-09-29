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

// 等价实现时，使用non-const成员函数调用const成员函数来避免代码重复
class Text{
public:
    const char& operator[](size_t position) const{
        // something else...
        return text[position];
    }

    char& operator[](size_t position){
        return const_cast<char&>(
            static_cast<const Text&>(*this)[position]
        );
    }

private:
    string text;
};

int main(int argc, char** argv)
{
    

    return 0;
}

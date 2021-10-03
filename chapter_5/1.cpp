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

class Test{
public:
    Test() { *ptr = 10; }
    int& func1() const {
        // const成员函数会给返回类型加上顶层const
        //return data;
        return *ptr;
    }
    int* func2() const {
        return ptr;
    }
    int func3() const {
        return data;
    }
    void show(){
        cout << *ptr << endl;
    }
private:
    int* ptr;
    int data;
};

int main(int argc, char** argv)
{
    Test t;
    t.show();
    t.func1() = 1;
    t.show();
    return 0;
}

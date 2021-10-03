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
    Test() { a = 2; }
    // 类型转换函数
    operator int(){
        return a;
    }
private:
    int a;
};

int main(int argc, char** argv)
{
    Test t;
    cout << int(t) << endl;
    return 0;
}

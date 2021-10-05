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
#include "template.h"

using namespace std;

// 模板类的定义要在头文件中，不要在单独的cpp中，否则会链接错误
// 编译器编译的时会根据调用实例化.h中的模板，但不会实例化cpp中的定义，因为寻找定义是链接时的行为
// 因为编译时候有对定义实例化，而实例化又不是链接的职责
// 所以编译会通过，但是链接的时候会找不到声明对应的定义

int main(int argc, char** argv)
{
    Test<int> t;
    t.get();
    t.func();
    t.ret();
    return 0;
}

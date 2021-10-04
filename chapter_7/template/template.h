#ifndef __TEMPLATE_H
#define __TEMPLATE_H
#include <iostream>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

template<class T>
class Test{
public:
    T get();
    string ret();
    void func();
private:
    T data;
    string s;
};

#endif

#ifndef __PERSON_H
#define __PERSON_H
#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <memory>

using namespace std;

// cpp中，.h文件作为接口
// 若.h文件中的内容或其include的内容变了，则所有include了.h的文件都要重新编译
// 为了降低编译依赖性，可以在.h中只写声明式，定义式写在.cpp中

// 在.h中用class声明外来类，用指针或引用代替变量的声明
class data;
class Person;

// 封装Person
class PersonCampuse{
public:
    shared_ptr<Person> ptr;
};

#endif

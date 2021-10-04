#include "template.h"

template<class T>
T Test<T>::get(){
    return data;
}

template<class T>
string Test<T>::ret(){
    return s;
}

template<class T>
void Test<T>::func(){
    cout << s << endl;
}
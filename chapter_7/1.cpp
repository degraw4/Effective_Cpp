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

// 编译器拒绝在模板化基类中寻找继承来的名字
// 原因：编译器认为模板基类可能会被特化，而特化后的基类未必含有一般模板中的函数，因此拒绝寻找和调用

template<class Company>
class MsgSender{
    void sendClear() {};
    void sendSecret() {};
};

template<class Company>
class MsgSenderWithLog: public MsgSender<Company> {
public:
    using MsgSender<Company>::sendClear;
    void sendClearWithLog(){
        // log...
        //sendClear();
        // 1: this->
        this->sendClear();
        // 2: using
        sendClear();
        // 3: 明确指出，但是此方法会关闭virtual绑定行为
        MsgSender<Company>::sendClear();
    }
    void sendSecretWithLog(){
        // log...
        //sendSecret();
        this->sendSecret();
    }
};

int main(int argc, char** argv)
{
    
    return 0;
}

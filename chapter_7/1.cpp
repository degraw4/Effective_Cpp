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

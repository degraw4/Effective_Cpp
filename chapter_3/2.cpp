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
#include <mutex>

using namespace std;

// 资源管理中小心copy行为

// 使用Lock类管理一个mutex锁，确保该锁不会忘记被释放
class Lock{
public:
    Lock(mutex* ptr): mutex_ptr(ptr){
        mutex_ptr->lock();
    }
    ~Lock(){
        mutex_ptr->unlock();
    }
    // 阻止复制
    Lock(const Lock&) = delete;
    Lock& operator=(const Lock&) = delete;
private:
    mutex* mutex_ptr;
};

// 共享管理mutex，底层指针变为shared_ptr即可
// 无需析构函数，只需将unlock传入shared_ptr的构造函数
class sharedLock{
public:
    sharedLock(mutex* m): ptr(m, mutex::unlock){
        ptr.get()->lock();
    }
private:
    shared_ptr<mutex> ptr;
};

int main(int argc, char** argv)
{
    

    return 0;
}

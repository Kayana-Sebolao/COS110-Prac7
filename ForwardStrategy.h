#include "Storage.h"
template <typename T>
class ForwardStrategy : public Storage<T>{
    public:
    ForwardStrategy(int size);
    virtual void addData(T value);
    virtual void removeData(T value);
    virtual int getIndex(T value);
};
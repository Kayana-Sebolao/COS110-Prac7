#include "Storage.h"

template <typename T>
class ReverseStrategy : public Storage<T>{
public:
ReverseStrategy(int size);
virtual void addData(T value);
virtual void removeData(T value);
virtual int getIndex(T value);
};
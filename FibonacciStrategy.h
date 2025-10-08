#include "Storage.h"

template <typename T>
class FibonacciStrategy : public Storage<T>{
public: 
FibonacciStrategy(int size);
virtual void addData(T value);
virtual void removeData(T value);
virtual int getIndex(T value);
};
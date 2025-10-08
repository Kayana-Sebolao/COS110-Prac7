#include "Storage.h"

template <typename T>
class RandomStrategy : public Storage<T>{
private:
static int a;
static int c;
static int m;
public:
RandomStrategy(int size);
virtual void addData(T value);
virtual void removeData(T value);
virtual int getIndex(T value);
};
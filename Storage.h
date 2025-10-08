#ifndef STORAGE_H
#define STORAGE_H


#include <iostream>
#include <cmath>
#include <sstream>

template <typename T>

class Storage{
private:
T** data;
int size;
public:
Storage(int size);
virtual ~Storage();
void print();
virtual void addData(T value) = 0;
virtual void removeData(T value) = 0;
virtual int getIndex(T value) = 0;

};

#endif
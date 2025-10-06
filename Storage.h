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
void addData(T value);
void removeData(T value);
int getIndex(T value);

};

#endif
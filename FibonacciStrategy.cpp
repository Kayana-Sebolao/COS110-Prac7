#include "FibonacciStrategy.h"

template <typename T>
FibonacciStrategy<T>::FibonacciStrategy(int size) : Storage<T>(size){}

template <typename T>
void FibonacciStrategy<T>::addData(T value){
    int prev = 0;
    int curr = 1;
    for(int i =0; i < 3* this->size ; i++){
        int index = prev % this->size;
        if(this->data[index] == NULL){
            this->data[index] = new T(value);
            return;
        }
        int next = prev + curr;
        prev = curr;
        curr = next;
    }
}

template <typename T>
void FibonacciStrategy<T>::removeData(T value){
    int prev = 0;
    int curr = 1;
    for(int i =0; i < 3* this->size ; i++){
        int index = prev % this->size;
        if(this->data[index] != NULL && *(this->data[index]) == value){
            delete this->data[index];
            this->data[index] = NULL;
            return;
        }
        int next = prev + curr;
        prev = curr;
        curr = next;
    }
}

template <typename T>
int FibonacciStrategy<T>::getIndex(T value){
       int prev = 0;
    int curr = 1;
    for(int i =0; i < 3* this->size ; i++){
        int index = prev % this->size;
        if(this->data[index] != NULL && *(this->data[index]) == value){
            return index;
        }
        int next = prev + curr;
        prev = curr;
        curr = next;
    } 
    return -1;
}
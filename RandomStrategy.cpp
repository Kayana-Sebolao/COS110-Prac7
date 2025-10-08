#include "RandomStrategy.h"

template <typename T>
RandomStrategy<T>::RandomStrategy(int size): Storage<T>(size){}

template <typename T>
int RandomStrategy<T>::a = 1103515245;

template <typename T>
int RandomStrategy<T>::c =12345;

template <typename T>
int RandomStrategy<T>::m = 2147483648;

template <typename T>
void RandomStrategy<T>::addData(T value){
    int r = this->size;
    int index = r %  this->size;
    for(int i = 0; i < 3*this->size; i++){
        if(this->data[index]  == NULL){
            this->data[index] = new T(value);
            return;
        }
        r = abs((a * r + c) % m);
        index = r % this->size;
    }

}
template <typename T>
void RandomStrategy<T>::removeData(T value){
      int r = this->size;
    int index = r %  this->size;
    for(int i = 0; i < 3*this->size; i++){
        if( this->data[index] != NULL && *(this->data[index]) == value){
            delete this->data[index];
            this->data[index] = NULL;
            return;
        }
        r = abs((a * r + c) % m);
        index = r % this->size;
    }
}

template <typename T>
int RandomStrategy<T>::getIndex(T value){
       int r = this->size;
    int index = r %  this->size;
    for(int i = 0; i < 3*this->size; i++){
        if( this->data[index] != NULL && *(this->data[index]) == value){
            return index;
        }
        r = abs((a * r + c) % m);
        index = r % this->size;
    }
    return -1;
}
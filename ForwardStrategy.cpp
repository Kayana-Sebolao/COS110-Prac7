#include "ForwardStrategy.h"
template <typename T>
ForwardStrategy<T>::ForwardStrategy(int size): Storage<T>(size){   
}

template <typename T>
void ForwardStrategy<T>::addData(T value){
    int emptyIndex = -1;
    for(int i =0; i < this->size; i++){
        if(this->data[i] == NULL){
            emptyIndex = i;
            break;
        }
    }
    if(emptyIndex == -1 ){
        return;
    }
    this->data[emptyIndex] = new T(value);
}

template <typename T>
void ForwardStrategy<T>::removeData(T value){
    int index = -1;
    for(int i =0; i < this->size; i++){
        if(this->data[i] != NULL && *(this->data[i]) == value){
            index = i;
            break;
        }
    }
    if(index == -1){
        return;
    }
    delete this->data[index];
    this->data[index] = NULL;
}

template <typename T>
int ForwardStrategy<T>::getIndex(T value){
    for(int i =0; i <this->size; i++){
        if(this->data[i] != NULL && *(this->data[i]) == value){
            return i;
        }
    }
    return - 1;
}
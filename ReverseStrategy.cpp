#include "ReverseStrategy.h"

template <typename T>
ReverseStrategy<T>::ReverseStrategy(int size): Storage<T>(size){
}

template <typename T>
void ReverseStrategy<T>::addData(T value){
    int emptyIndex = -1;
    for(int i = this->size -1; i >= 0 ; i--){
        if(this->data[i] == NULL){
            emptyIndex = i;
            break;
        }
    }
    if(emptyIndex == -1){
        return;
    }
    this->data[emptyIndex] = new T(value);
}

template <typename T>
void ReverseStrategy<T>::removeData(T value){
    int index = -1;
        for(int i = this->size -1 ; i >= 0; i--){
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
int ReverseStrategy<T>::getIndex(T value){
        for(int i = this->size -1; i >= 0; i--){
        if(this->data[i] != NULL && *(this->data[i]) == value){
            return i;
        }
    }
    return - 1;
}
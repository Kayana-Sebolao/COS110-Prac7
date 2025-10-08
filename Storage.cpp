#include "Storage.h"
template <typename T>

Storage<T>::Storage(int size){
    this->size = size;
    data = new T*[size];
    for(int i =0; i < size; i++){
        data[i] = NULL;
    }
}
template <typename T>
Storage<T>::~Storage(){
for (int i =0; i< size; i++){
    if(data[i] != NULL){
    delete data[i];
    data[i] = NULL;
    }
}
    delete[] data;
}

template <typename T>
void Storage<T>::print(){
  
    std::cout<<"[";
    for(int i =0; i < size; i++){
        if(data[i] != NULL){
            std::cout<<*(data[i]);
        }else{
           std::cout<<"-"; 
        }
        if(i != size - 1){
            std::cout<<",";
        }
    }   
    std::cout<<"]"<<std::endl;
}



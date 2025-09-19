#include <iostream>

int main(){
    int *ptr_a, 
        *ptr_oux;
    ptr_a = nullptr; 
    ptr_oux = nullptr;

    //ptr_a = new int; // apunta a un entero
    ptr_a = new int[1]; //apunta a un vector de un solo elemento
    int tam = 1;
    ptr_a[0] = 5;

    //std::cout << ptr_a <<" "<< *ptr_a <<" "<< &ptr_a ;
    // 0x55a885652eb0 5 0x7ffd5b804478
    
    for (int i = 0; i < 10; i++){
        int x;
        std::cin>>x;
        std::cout << "\n";
        tam++;
        ptr_oux = ptr_a;

    }
    delete[] ptr_a,ptr_oux;
    ptr_a = nullptr;
    return 0;
}
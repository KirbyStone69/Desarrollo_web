#include <iostream>

int main(){
    int *ptr_a, *ptr_oux;
    ptr_a = nullptr; ptr_oux = nullptr;
    //ptr_a = new int; // apunta a un entero
    ptr_a = new int[1]; //apunta a un vector de un solo elemento
    int tam = 1;
    ptr_a[0] = 5;
    for (int i = 0; i < 10; i++){
        int x;
        std::cin >> x;
        std::cout << std::endl;
        
        tam++;

        delete[] ptr_oux; ptr_oux = nullptr; 
        ptr_oux = new int[tam];

        for (int i = 0; i < tam-1; i++){
            ptr_oux[i] = ptr_a[i];
        }

        ptr_oux[tam] = x;

        delete[] ptr_a; ptr_a = nullptr; 
        ptr_a = new int[tam];

        for (int i = 0; i < tam; i++){
            ptr_a[i] = ptr_oux[i];
        }

        for (int i = 0; i < tam; i++){
        std::cout << ptr_a[i] << std::endl;
        }

        std::cout << std::endl;
    }


    delete[] ptr_a,ptr_oux;
    ptr_a = nullptr;
    return 0;
}
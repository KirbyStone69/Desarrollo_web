#include <iostream>

void fun_m(int a[][2], int b){
    for (int i = 0; i < 3; i++){
        std::cout << a[i][0] << " " <<  a[i][1] << "\n";
    }
}
int main(int argc, char * args[]){
    int arr[3] = {3,2,1};

    int a=9;
    int *ptr_a ;
    if (ptr_a == nullptr){
        std::cout << "es nullo\n" ;
    }
    
    ptr_a = &a;
    a= 5;

    std::cout << ptr_a << "\n" << a << "\n" << &a << "\n" << *ptr_a << "\n" << &ptr_a << "\n";

    int arrr[3][2] = {
        {2,3},
        {3,2},
        {3,2}
    };

    std::cout << "Hola ";
    for (int i = 1; i < argc; i++){
        std::cout << args[i] << " ";
    }
    std::cout << "\n";

    fun_m(arrr, 3);

    std::cout << "\n\n\n";

    int *ab;
    ab = new int[5];
    
    for (int i = 0; i < 5; i++){
        ab[i] = 5*i;
        std::cout << ab[i] << "\n"; 
    }
    

    int b[3] = {3,2,7};
    int *ptr_b = b;
    int *ptr_b2 = &b[2];
    *ptr_b2 = 5; 
    for (int i = 0; i < 3; i++){
        std::cout << ptr_b[i] << "\n"; 
        std::cout << *ptr_b2 << "\n"; 
    }

    return 0; 
}
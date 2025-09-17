#include <iostream>


struct Alumno{
    std::string nombre;
    int cali1;
    int cali2;

    float prom;
};

typedef struct Alumno ALUMNO;

typedef ALUMNO* PTR_ALUMNO;

int main(){

    ALUMNO A[10];

    /*
    int j=0;
    while (j > 10){
        std::cout << "Ingresa nombre" << std::endl;
        std::cin >> A[i].nombre;
        std::cout << "Ingresa calificacion 1" << std::endl;
        std::cin >> A[i].cali1;
        std::cout << "Ingresa calificacion 2" << std::endl;
        std::cin >> A[i].cali2;
        A[i].prom = (A[i].cali1 + A[i].cali2)/2;
        i++;
    }
    */

    for (int i = 0; i < 10; i++){
        A[i].nombre = "pepe ";
        A[i].cali1 = (i+1)*3;
        A[i].cali2 = (i+1)*2;
        A[i].prom = (A[i].cali1 + A[i].cali2)/2;
    }
    

    PTR_ALUMNO b = A;
/*
*/
    for (int i = 0; i < 10; i++){
        std::cout << i+1  <<" Alumno:"+ A[i].nombre <<" calificacion uno:" << A[i].cali1; 
        std::cout << " calificacion dos:" << A[i].cali2;
        std::cout << " promedio:" << A[i].prom  << std::endl;
    }
    
    return 0;
}
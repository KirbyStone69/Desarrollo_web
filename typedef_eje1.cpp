#include <iostream>
#include <string>

typedef struct alumno{//dato compuesto
    std::string nombre;
    int cali;
    int cali2;

    float prom;
}   ALUMNO;
//int, char, bool, float //datos primitivos 

typedef ALUMNO* PTR_ALUMNO;// de define arriba para ser global //apodo 
typedef int* PTR_INT;

int main(){

    PTR_INT ptr_cali;

    struct alumno sofi;


    struct alumno alumnos[3];
    ALUMNO cesar;

    PTR_ALUMNO ptr_cesar = &cesar;



    sofi.nombre = "sofi";
    sofi.cali = 80;
    sofi.cali2 = 100;
    sofi.prom = (sofi.cali + sofi.cali2)/2;

    ptr_cali = &sofi.cali;
    std::cout << *ptr_cali  << "\n";


    std::cout << sofi.nombre + " : " << sofi.prom  << "\n";

    alumnos[0].nombre = "pepe";
    alumnos[0].cali = 100;
    alumnos[0].cali2 = 100;
    alumnos[0].prom = (alumnos[0].cali + alumnos[0].cali2 )/2;

    ptr_cali = &alumnos[0].cali;
    std::cout << *ptr_cali  << "\n";

    ptr_cesar = &alumnos[0];
    std::cout << (*ptr_cesar).nombre  << "\n"; // (2+2)*6
    
    alumnos[1].nombre = "Ginna";
    alumnos[1].cali = 70;
    alumnos[1].cali2 = 50;
    alumnos[1].prom = (alumnos[1].cali + alumnos[1].cali2 )/2;

    alumnos[2].nombre = "tomas";
    alumnos[2].cali = 67;
    alumnos[2].cali2 = 87;
    alumnos[2].prom = (alumnos[2].cali + alumnos[2].cali2 )/2;

    for (int i = 0; i < 3; i++)
    {
        std::cout << alumnos[i].nombre + " : " << alumnos[i].prom  << "\n";
    }
    
    return 0;
}
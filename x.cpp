#include <iostream>

int main(int argc, char* args[]) {
    std::cout << "Hola " ; //no pos un hola

    for(int i = 1; i < argc; i++) { // va del parametro ingresado encima de 1 y va imprimiendo cada uno 
        std::cout << args[i] << " "; //imprime cada parametro que le voy pasando
    }
    
    std::cout << std::endl;//salta pa que no se vea feote
    return 0;//se cerro con exito mi programita
}
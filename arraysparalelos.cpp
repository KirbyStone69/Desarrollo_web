#include <iostream>
#include <string>

const int N=5;
int matricula[N];
int u1[N] ,u2[N],u3[N],u4[N];
int temp;

void mostrar();
void modificar(int cont);
void modificar1(int cont);

int main(){
    int opcion = 0;
    bool full1 = false, full2 = false; 

    while (true){
        std::cout << "Opciones"<<std::endl<< std::endl;

        std::cout << "1)Ingresar las matriculas de alumnos"<<std::endl;
        std::cout << "2)Ingresar las calificaciones de alumnos"<<std::endl;
        if (full1 == true && full2 == true){
            std::cout << "3)modificar una matricula"<<std::endl;
            std::cout << "4)modificar una calificación"<<std::endl;
            std::cout << "5)mostrar alumnos y calificaciones"<<std::endl;
            std::cout << "6)promedio de un alumno"<<std::endl;
            std::cout << "7)promedio general"<<std::endl;
        }
        std::cout << "0)Salir del programa"<< std::endl;
        
        std::cin >> opcion;
        switch (opcion){
        case 0:
            return 0;
            break;
        case 1: // ingresar matricula
            for (int i = 0; i < N; i++){
                std::cout << "Ingrese matricula del alumno : "<<(i+1)<<std::endl;
                std::cin >> matricula[i];
            }
            full1 = true;
            break;
        case 2: // ingresar calificaciones
        for (int i = 0; i < N; i++){
            std::cout << "Alumno : "<<(i+1)<<" "<< matricula[i] << std::endl;
            std::cout << "Ingrese la calificacion unidad 1:"<<std::endl;
            std::cin >> u1[i];
            std::cout << "Ingrese la calificacion unidad 2"<<std::endl;
            std::cin >> u2[i];
            std::cout << "Ingrese la calificacion unidad 3"<<std::endl;
            std::cin >> u3[i];
            std::cout << "Ingrese la calificacion unidad 4"<<std::endl;
            std::cin >> u4[i];
        } full2 = true;
            break;
        case 3:
                modificar(N);
            break;
        case 4:
                modificar1(N);
            break;
        case 5:
            break;
        case 6:
            break;
        default:
            break;
        }
    }
return 0;
}
void modificar(int cont){
    int matriculabuscada;
    for (int i = 0; i < 5; i++){
        std::cout <<(i+1)<<":"<<matricula[i];
    }
    std::cout << "Ingrese la matricula a buscar"<<std::endl;
    std::cin >> matriculabuscada;
    for (int i = 0; i < cont; i++){
        if (matricula[i]==matriculabuscada){
            std::cout << "Modificar matricula"<< matricula[i]<<std::endl;
            std::cin>> matricula[i];
        }
    }
}
void modificar1(int cont){
    int matriculabuscada;
    for (int i = 0; i < 5; i++){
        std::cout <<(i+1)<<":"<<matricula[i];
    }
    std::cout << "Ingrese la matricula a buscar"<<std::endl;
    std::cin >> matriculabuscada;
}
void mostrar(){
    for (int i = 0; i < N; i++){
        std::cout << "Matricula :"<<matricula[i] << std::endl;
        std::cout << " u1 :"<<u1[i] << "| u2 :"<<u2[i] << "| u3 :"<<u3[i] << "| u4 :"<<u4[i] << std::endl;
    }
}
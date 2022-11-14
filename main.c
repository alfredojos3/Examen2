#include<stdio.h>
#include<stdlib.h>

//Crando la estructura
struct datos{
    char nombre[30];
    char apellido[30];
    int cedula[8];
    int edad;
    float promedio;
} alumnos[5];

//Prototipo de funciones
void capturar();
void mostrarTodos();
void buscarEdad();
void buscarPromedio();
void salir();
void menu();

int main(){
    menu();
    system("PAUSE");
    return 0 ;
}

//Definicion de las funciones
void capturar(){
    for(int i = 0; i< 5 ;i ++ ){
        printf("Ingresa el Nombre del Alumno # %d:  ", i+1);
        scanf("%s", &alumnos[i].nombre);
        printf("Ingresa el apellido del Alumno # %d: ", i+1);
        scanf("%s", &alumnos[i].apellido);
        printf("Ingresa el numero de cedula # %d: ", i+1);
        scanf("%d", &alumnos[i].cedula);
        printf("Ingresa el Edad del Alumno # %d:  ", i+1);
        scanf("%d", &alumnos[i].edad);
        printf("Ingresa el Promedio del Alumno # %d:  ", i+1);
        scanf("%f", &alumnos[i].promedio);
    }
};

void mostrarTodos(){
    printf("Mostrando los datos de los Alumnos\n");
    for( int i = 0 ; i < 5 ; i++){
        printf("________________\n");
        printf("Alumno # %d\n ", i+1);
        printf("Nombre: %s\n", alumnos[i].nombre);
        printf("Apellido: %s\n", alumnos[i].apellido);
        printf("Cedula: %d\n", alumnos[i].cedula);
        printf("Edad: %d\n", alumnos[i].edad);
        printf("Promedio: %.2f\n", alumnos[i].promedio);
    };
};

void buscarEdad(){

    int edad, encontrado = 0;
    printf("________________\n");
    printf("Ingresa la edad a Buscar: ");
    scanf("%d", &edad);
    printf("________________\n");
    for(int i = 0 ; i< 5 ; i++){
        if(alumnos[i].edad==edad){
            encontrado = 1;
             printf("________________\n");
             printf("Alumnos # %d\n ", i +1);
             printf("Nombre: %s\n", alumnos[i].nombre);
             printf("Apellido: %s\n", alumnos[i].apellido);
             printf("Cedula: %d\n", alumnos[i].cedula);
             printf("Edad: %d\n", alumnos[i].edad);
             printf("Promedio: %.2f\n", alumnos[i].promedio);
        }
    };
    if(encontrado ==0 ){
        printf("________________\n");
        printf("No hay alumnos con la Edad %d\n", edad);
        printf("________________\n");
    }
};

void buscarPromedio(){
    int  encontrado = 0;
    float prom;
    printf("________________\n");
    printf("Ingresa el Promedio a Buscar: ");
    scanf("%f", &prom);
    printf("________________\n");

      for(int i = 0 ; i< 5 ; i++)  {
        if(alumnos[i].promedio==prom){
            encontrado = 1;
             printf("________________\n");
             printf("Alumnos # %d\n ", i +1);
             printf("Nombre: %s\n", alumnos[i].nombre);
             printf("Apellido: %s\n", alumnos[i].apellido);
             printf("Cedula: %d\n", alumnos[i].cedula);
             printf("Edad: %d\n", alumnos[i].edad);
             printf("Promedio: %.2f\n", alumnos[i].promedio);
        }
    };
   if(encontrado ==0 ){
        printf("________________\n");
        printf("No hay alumnos con el Promedio %.2f\n", prom);
        printf("________________\n");
    }
}


void salir(){
    printf("(*)Programa finalizado(*)\n");
};


void menu(){
    int opcion;
    do{
        printf("________________\n");
        printf("Menu de Opciones\n");
        printf("1. Captura de  datos de Alumnos\n");
        printf("2. Mostrar datos de  todos Alumnos\n");
        printf("3. Buscar Alumno( s ) por Edad\n");
        printf("4. Buscar Alumno( s ) por Promedio\n");
        printf("5. Salir del sistema\n");
        printf("Selecione una Opcion\n");
        scanf("%d", &opcion);

        switch(opcion){

        case 1:
            capturar();
        break;

        case 2:
            mostrarTodos();
        break;

        case 3:
            buscarEdad();
        break;

        case 4:
            buscarPromedio();
        break;

        case 5:
            salir();
        break;

        default:
            printf("Opcion incorrecta");
        }

    }while(opcion!=5);

};

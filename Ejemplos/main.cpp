#include <iostream>
#include <stdio.h>
using namespace std;

int main(void){
    int x;//Variable int
    float y;//Variable float
    char z;//Variable char

    x=5;
    y=6.7;
    z='@';

    int* ptrInt;//Apuntador int
    float* ptrFloat;//Apuntador float
    char* ptrChar;//Apuntador char

    ptrInt = &x;//Guardar el dato en variable x en Apuntador ptrInt
    ptrFloat = &y;//Guardar el dato en variable y en Apuntador ptrFloat
    ptrChar = &z;//Guardar el dato en variable z en Apuntador ptrChar

    cout<<"x\t  = "<<x<<endl//Contenido en x
        <<"&x\t  = "<<&x<<endl//Direccion de x
        <<"ptrInt\t  = "<<ptrInt<<endl//Contenido en ptrInt
        <<"&ptrInt\t  = "<<&ptrInt<<endl//Direccion de ptrInt
        <<"*ptrInt\t  = "<<*ptrInt<<endl<<endl//Dato contenido en direccion contenida en ptrInt
        <<"y\t  = "<<y<<endl//Contenido en y
        <<"&y\t  = "<<&y<<endl//Direccion de y
        <<"ptrFloat  = "<<ptrFloat<<endl//Contenido en ptrFloat
        <<"&ptrFloat = "<<&ptrFloat<<endl//Direccion de ptrFloat
        <<"*ptrFloat = "<<*ptrFloat<<endl<<endl//Dato contenido en direccion contenida en ptrFloat
        <<"z\t  = "<<z<<endl//Contenido en z
        <<"&z\t  = "<<(void*)&z<<endl//Direccion de z
        <<"ptrChar\t  = "<<(void*)ptrChar<<endl//Contenido en ptrChar
        <<"&ptrChar  = "<<(void*)&ptrChar<<endl//Direccion de ptrChar
        <<"*ptrChar  = "<<*ptrChar<<endl<<endl;//Dato contenido en direccion contenida en ptrChar

    return 0;
}

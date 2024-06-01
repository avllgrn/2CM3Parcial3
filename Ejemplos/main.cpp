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

    int* ptrInt;//Variable int
    float* ptrFloat;//Variable float
    char* ptrChar;//Variable char

    ptrInt = &x;//Guardar la direccion de variable x en variable ptrInt
    ptrFloat = &y;//Guardar la direccion de variable y en variable ptrFloat
    ptrChar = &z;//Guardar la direccion de variable z en variable ptrChar

    cout<<"x\t  = "<<x<<endl//Contenido en x
        <<"&x\t  = "<<&x<<endl//Direccion de x
        <<"ptrInt\t  = "<<ptrInt<<endl//Contenido en ptrInt
        <<"&ptrInt\t  = "<<&ptrInt<<endl<<endl//Direccion de ptrInt
        <<"y\t  = "<<y<<endl//Contenido en y
        <<"&y\t  = "<<&y<<endl//Direccion de y
        <<"ptrFloat  = "<<ptrFloat<<endl//Contenido en ptrFloat
        <<"&ptrFloat = "<<&ptrFloat<<endl<<endl//Direccion de ptrFloat
        <<"z\t  = "<<z<<endl//Contenido en z
        <<"&z\t  = "<<(void*)&z<<endl//Direccion de z
        <<"ptrChar\t  = "<<(void*)ptrChar<<endl//Contenido en ptrChar
        <<"&ptrChar  = "<<(void*)&ptrChar<<endl;//Direccion de ptrChar

    return 0;
}

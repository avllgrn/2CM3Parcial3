#include <iostream>
#include <stdlib.h>
using namespace std;

template<typename T>
class Nodo{
private:
    T dato;
    Nodo<T>* inferior;
public:
    Nodo(void);
    Nodo(T dato, Nodo<T>* inferior);
    ~Nodo(void);
    void pideleAlUsuarioTuEstado(void);
    void muestraTuEstado(void);
    T dameTuAtributoDato(void);
    void modificaTuAtributoDato(T dato);
    Nodo<T>* dameTuAtributoInferior(void);
    void modificaTuAtributoInferior(Nodo<T>* inferior);
};
template<typename T>
Nodo<T>::Nodo(void){
    this->dato = 0;
    this->inferior = NULL;
}
template<typename T>
Nodo<T>::Nodo(T dato, Nodo<T>* inferior){
    this->dato = dato;
    this->inferior = inferior;
}
template<typename T>
Nodo<T>::~Nodo(void){
}
template<typename T>
void Nodo<T>::pideleAlUsuarioTuEstado(void){
    cout << "Dame mi dato ";
    cin >> this->dato;
}
template<typename T>
void Nodo<T>::muestraTuEstado(void){
    cout << this->dato << " -> ";
    if(this->inferior==NULL)
        cout << "NULL";
    else
        cout << this->inferior;
    cout<<endl;
}
template<typename T>
T Nodo<T>::dameTuAtributoDato(void){
    return this->dato;
}
template<typename T>
void Nodo<T>::modificaTuAtributoDato(T dato){
    this->dato = dato;
}
template<typename T>
Nodo<T>* Nodo<T>::dameTuAtributoInferior(void){
    return this->inferior;
}
template<typename T>
void Nodo<T>::modificaTuAtributoInferior(Nodo<T>* inferior){
    this->inferior = inferior;
}

template<typename T>
class Pila{
private:
    Nodo<T>* tope;
public:
    Pila(void);
    ~Pila(void);
    void push(T d);
    T pop(void);
    bool estaVacia(void);
    void vaciaPila(void);
};
template<typename T>
Pila<T>::Pila(void){
    tope = NULL;
}
template<typename T>
Pila<T>::~Pila(void){
    vaciaPila();
}
template<typename T>
void Pila<T>::push(T d){
    tope = new Nodo<T>(d,tope);
}
template<typename T>
T Pila<T>::pop(void){
    T d = tope->dameTuAtributoDato();
    Nodo<T>* aux = tope;
    tope = tope->dameTuAtributoInferior();
    delete aux;
    return d;
}
template<typename T>
bool Pila<T>::estaVacia(void){
    return tope == NULL;
}
template<typename T>
void Pila<T>::vaciaPila(void){
    while(!estaVacia())
        cout<<pop()<<endl;
}


int main(void){
    Pila<string> P;
    int op;
    string d;

    do{
        system("cls");
        cout<<"1. push"<<endl
            <<"2. pop"<<endl
            <<"3. libera Pila"<<endl
            <<"4. Salir"<<endl
            <<"Cual es tu opcion? ";
        cin>>op;
        system("cls");
        switch(op){
            case 1:
                cout<<"Ingresa dato ";cin>>d;
                P.push(d);
                break;
            case 2:
                if(P.estaVacia()){
                    cout<<"La pila esta vacia... =("<<endl;
                }
                else{
                    d = P.pop();
                    cout<<"Salio nodo con dato "<<d<<endl<<endl;
                }
                break;
            case 3:
                P.vaciaPila();
                break;
            case 4:
                cout<<"Adios! =)"<<endl<<endl;
                break;
            default :
                cout<<"Opcion invalida...! =("<<endl<<endl;
                break;
        }
        if(op!=4)
            system("pause");

    }while(op!=4);

    return 0;
}

#include <iostream>
using namespace std;

class Nodo{
private:
    double dato;
    Nodo* inferior;
public:
    Nodo(void);
    Nodo(double dato, Nodo* inferior);
    ~Nodo(void);
    void pideleAlUsuarioTuEstado(void);
    void muestraTuEstado(void);
    double dameTuAtributoDato(void);
    void modificaTuAtributoDato(double dato);
    Nodo* dameTuAtributoInferior(void);
    void modificaTuAtributoInferior(Nodo* inferior);
};
Nodo::Nodo(void){
    this->dato = 0.0;
    this->inferior = NULL;
}
Nodo::Nodo(double dato, Nodo* inferior){
    this->dato = dato;
    this->inferior = inferior;
}
Nodo::~Nodo(void){
}
void Nodo::pideleAlUsuarioTuEstado(void){
    cout << "Dame mi dato ";
    cin >> this->dato;
}
void Nodo::muestraTuEstado(void){
    cout << this->dato << " -> ";
    if(this->inferior==NULL)
        cout << "NULL";
    else
        cout << this->inferior;
    cout<<endl;
}
double Nodo::dameTuAtributoDato(void){
    return this->dato;
}
void Nodo::modificaTuAtributoDato(double dato){
    this->dato = dato;
}
Nodo* Nodo::dameTuAtributoInferior(void){
    return this->inferior;
}
void Nodo::modificaTuAtributoInferior(Nodo* inferior){
    this->inferior = inferior;
}

class Pila{
private:
    Nodo* tope;
public:
    Pila(void);
    ~Pila(void);
    void push(double d);
    double pop(void);
    bool estaVacia(void);
    void vaciaPila(void);
};
Pila::Pila(void){
    tope = NULL;
}
Pila::~Pila(void){
    vaciaPila();
}
void Pila::push(double d){
    tope = new Nodo(d,tope);
}
double Pila::pop(void){
    double d = tope->dameTuAtributoDato();
    Nodo* aux = tope;
    tope = tope->dameTuAtributoInferior();
    delete aux;
    return d;
}
bool Pila::estaVacia(void){
    return tope == NULL;
}
void Pila::vaciaPila(void){
    while(!estaVacia())
        cout<<pop()<<endl;
}


int main(void) {
    Pila P;

    cout<<"\tP.push(5);"<<endl;
    P.push(5);
    cout<<"\tP.push(3);"<<endl;
    P.push(3);
    cout<<"\tP.push(7);"<<endl;
    P.push(7);
    cout<<"\tP.push(-4);"<<endl;
    P.push(-4);

    cout<<"\tP.pop();"<<endl;
    cout<<P.pop()<<endl;
    cout<<"\tP.pop();"<<endl;
    cout<<P.pop()<<endl;
    cout<<"\tP.push(9);"<<endl;
    P.push(9);
    cout<<"\tP.pop();"<<endl;
    cout<<P.pop()<<endl;
    cout<<"\tP.pop();"<<endl;
    cout<<P.pop()<<endl;
    cout<<"\tP.pop();"<<endl;
    cout<<P.pop()<<endl;

    return 0;
}

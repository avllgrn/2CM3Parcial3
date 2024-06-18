#include <iostream>
#include "Punto2D.h"
#include "Complejo.h"
#include "Fraccion.h"
#include "Monomio.h"
using namespace std;

template<typename T>
T suma(T a, T b);

int main(void) {
    int aI=2147483646, bI=1, cI;
    cI = suma(aI, bI);
    cout << aI << " + " << bI << " = " << cI << endl << endl;

    long long aL=9223372036854775806, bL=1, cL;
    cL = suma(aL, bL);
    cout << aL << " + " << bL << " = " << cL << endl << endl;

    float aF=2.40282e+038, bF=1e+038, cF;
    cF = suma(aF, bF);
    cout << aF << " + " << bF << " = " << cF << endl << endl;

    double aD=0.79769e+308, bD=1e+308, cD;
    cD = suma(aD, bD);
    cout << aD << " + " << bD << " = " << cD << endl << endl;

    Punto2D AP(1,2), BP(3,4), CP;
    CP = suma(AP, BP);
    cout << AP << " + " << BP << " = " << CP << endl << endl;

    Complejo AC(1,2), BC(3,4), CC;
    CC = suma(AC, BC);
    cout << AC << " + " << BC << " = " << CC << endl << endl;

    Fraccion AF(1,2), BF(3,4), CF;
    CF = suma(AF, BF);
    cout << AF << " + " << BF << " = " << CF << endl << endl;

    Monomio AM(1,2), BM(3,4), CM;
    CM = suma(AM, BM);
    cout << AM << " + " << BM << " = " << CM << endl << endl;

    return 0;
}

template<typename T>
T suma(T a, T b){
    T c;
    c = a+b;
    return c;
}

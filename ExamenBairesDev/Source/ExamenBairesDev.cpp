// ExamenBairesDev.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <vector>
#include <set>
#include "../Headers/Functions.h"
using namespace std;

int main()
{
   
    //Test for problem 1
    string muestra = "[asdfafs]asd[asdf](asdf)      ";
    if (brackets(muestra))
        std::cout << "Verdadero\n";
    else
        std::cout << "Falso\n";
    
    
    //Test for problem 2

     string a = "1234567";
    string b = "7654321";
    cout << "combinaciones encontradas: " << findCombinations(a, b) << endl;
    

    //Test for problem 3

    Point punto1, punto2;

    punto1.x = 0;
    punto1.y = 11;

    punto2.x = -7;
    punto2.y = 1;
    
    cout << "Distancia euclidiana: " << euclidianDistance(punto1,punto2) << endl;
    cin.get();
    return 0;
}

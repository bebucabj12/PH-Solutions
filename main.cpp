#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <string>
#include <cstdlib>
#include "functions.h"
using namespace std;

int main() {
    int aux;

    do {
        system("cls");
        cout << "\t\t\t\t\t\tBienvenidos a PH Solutions" << endl;
        cout << "\t\t\t\t\t\t--------------------------" << endl;
        cout << "\tIngrese una opcion\n" << endl;
        cout << "\t1.Estoy Registrado" << endl;
        cout << "\t2.Registrarme" << endl;
        cin >> aux;
        system("cls");

        switch(aux){
            case 1:
                menuResgistrado();
                break;
            case 2:
                menuRegistrarse();
                break;
            default:
                system("cls");
                cout << "Opcion incorrecta" << endl;
                break;
        }

        cout << "\t\t\t\t\t\tBienvenidos a PH Solutions" << endl;
        cout << "\t\t\t\t\t\t--------------------------" << endl;
        cout << "\t\Ingrese una opcion\n" << endl;
        cout << "\t1.Estoy Registrado" << endl;
        cout << "\t2.Registrarme" << endl;
        cin >> aux;


    } while(aux !=0);
    system("pause");
    return 0;
}

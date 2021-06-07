#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <string.h>
#include <cstdlib>
#include "functions.h"
using namespace std;
//Credenciales de testeo
#define USER "34359489"
#define PASS "hola"

void loginCliente(){
    //El usuario sera el dni
    char usuario[9], password[10];
    int cont = 0;
    bool ingresa = false;

    do {
        system("cls");
        cout << "\t\t\t\t\t\tLogin" << endl;
        cout << "\t\t\t\t\t\t-----" << endl;
        cout << "\n\tUsuario: ";
        cin >> usuario;
        cout << "\tPassword: ";
        cin >> password;

        //Compara si lo ingresado coincide con las credenciales
        if(strcmp(usuario, USER) == 0 && strcmp(password, PASS) == 0){
            ingresa = true;
        } else {
            cout << "El usuario y/o password son incorrectos" << endl;
            system("pause");
            cont++;
        }
    } while(ingresa == false && cont < 3); //Determina la cantidad de intentos incorrectos

    if(ingresa == false){
        cout << "No ha podido ingresar. Por favor intentelo nuevamente." << endl;
    } else {
        cout << "Se ha logueado correctamente" << endl;
        menuCliente();
    }

    cin.get();
}

int menuCliente(){
    int aux;

    do {
        system("cls");
        cout << "\t\t\t\t\t\tBienvenido Cliente" << endl;
        cout << "\t\t\t\t\t\t----------" << endl;
        cout << "\t\t1.Solicitar nuevo presupuesto" << endl;
        cout << "\t\t2.Consultar presupuestos" << endl;
        cout << "\t\t3.Dispositivos" << endl;
        cout << "\t\t4.Perfil de usuario" << endl;
        cout << "\t\t5.Puntuacion de prestadores" << endl;
        cout << "\t\t0.Volver" << endl;
        cin >> aux;
        system("cls");

        switch(aux){
        case 1:
            cout << "Aca va la carga de presupuesto" << endl;
            break;
        case 2:
            cout << "Aca va el listado con todos sus presupuestos" << endl;
            break;
        case 3:
            menuDispositivos();
            break;
        case 4:
            menuPerfil();
            break;
        case 5:
            cout << "Aca va el listado con la puntuacion que le dieron los prestadores" << endl;
            break;
        case 0:
            return 0;
            break;
        }
    } while(aux !=0);
}

int menuDispositivos(){
    int aux;

    do {
        system("cls");
        cout << "\t\t\t\t\t\tDispositivos" << endl;
        cout << "\t\t\t\t\t\t------------" << endl;
        cout << "\t\t1.Ingresar un nuevo dispositivo" << endl;
        cout << "\t\t2.Consultar dispositivos cargados" << endl;
        cout << "\t\t0.Volver" << endl;
        cin >> aux;
        system("cls");

        switch(aux){
        case 1:
            cout << "Aca va el submenu de carga de dispositivos" << endl;
            break;
        case 2:
            cout << "Aca va el listado con todos los dispositivos cargados" << endl;
            break;
        case 0:
            return 0;
            break;
        }
    } while(aux !=0);
}

int menuPerfil(){
    int aux;

    do {
        system("cls");
        cout << "\t\t\t\t\t\tPerfil" << endl;
        cout << "\t\t\t\t\t\t------" << endl;
        cout << "\t\t1.Editar datos" << endl;
        cout << "\t\t2.Ver mis datos actuales" << endl;
        cout << "\t\t0.Volver" << endl;
        cin >> aux;
        system("cls");

        switch(aux){
        case 1:
            cout << "Aca va la edicion de datos" << endl;
            break;
        case 2:
            cout << "Aca van los datos" << endl;
            break;
        case 0:
            return 0;
            break;
        }
    } while(aux !=0);
}

int menuPrestador(){
    int aux;

    do {
        system("cls");
        cout << "\t\t\t\t\t\tBienvenido Prestador" << endl;
        cout << "\t\t\t\t\t\t--------------------" << endl;
        cout << "\t\t1.Solicitudes recibidas" << endl;
        cout << "\t\t2.Consultar presupuestos" << endl;
        cout << "\t\t3.Dispositivos" << endl;
        cout << "\t\t4.Perfil de usuario" << endl;
        cout << "\t\t5.Puntuacion de prestadores" << endl;
        cout << "\t\t0.Volver" << endl;
        cin >> aux;
        system("cls");

        switch(aux){
        case 1:
            cout << "Aca va la carga de presupuesto" << endl;
            break;
        case 2:
            cout << "Aca va el listado con todos sus presupuestos" << endl;
            break;
        case 3:
            menuDispositivos();
            break;
        case 4:
            menuPerfil();
            break;
        case 5:
            cout << "Aca va el listado con la puntuacion que le dieron los prestadores" << endl;
            break;
        case 0:
            return 0;
            break;
        }
    } while(aux !=0);
}

//Menu si ya esta logueado, por el momento los logins seran los mismos para prestador y cliente
int menuResgistrado(){
    int aux;

    do {
        system("cls");
        cout << "\t\t\t\t\t\tComo desea ingresar?" << endl;
        cout << "\t\t\t\t\t\t--------------------" << endl;
        cout << "\t\t1.Soy Cliente" << endl;
        cout << "\t\t2.Soy Prestador" << endl;
        cout << "\t\t0.Volver al menu principal" << endl;
        cin >> aux;
        system("cls");

        switch(aux){
        case 1:
            loginCliente();
            break;
        /*case 2:
            login();
            break;
        case 0:
            return 0;
            break;*/
        }

        /*cout << "1.Soy Cliente" << endl;
        cout << "2.Soy Prestador" << endl;
        cin >> aux;*/


    } while(aux !=0);

}

//Menu para registrarse
void menuRegistrarse(){
    int aux;

    do {

        cout << "\t\t\t\t\t\tComo desea ingresar?" << endl;
        cout << "\t\t\t\t\t\t--------------------------" << endl;
        cout << "\t\t1.Como Cliente" << endl;
        cout << "\t\t2.Como Prestador" << endl;
        cout << "\t\t0.Volver al menu principal" << endl;
        cin >> aux;
        system("cls");


        /*cout << "1.Como Cliente" << endl;
        cout << "2.Como Prestador" << endl;
        cin >> aux;*/


    } while(aux !=0);
}

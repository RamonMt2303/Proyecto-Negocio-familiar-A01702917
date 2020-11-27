//
//  main.cpp
//  proyecto A01702917
//
//  Created by Ramon Mtz on 12/11/20.
//

#include <iostream>
#include <string>
#include "Transporte.h"
#include "Ventas.h"
#include "Empleados.h"
using namespace std;

/*
 * Creo una función que me imprima el menú.
 */

void printMenu(){
    cout << " ¿Qué deseas hacer?" << endl;
    cout << " 1 para entrar al sistema de ventas/rentas " << endl;
    cout << " 2 para los vehículos " << endl;
    cout << " 3 para los empleados " << endl;
    cout << " ó 0 para salir " << endl;
}

/*
 * Creo la función principal, que va a llamar a los archivos
 * donde están las clases guardadas por separado, para tener más limpio el main
 */

class Empresa{
private:
    int confirmacion;
public:
    void menu(){
        /*
         * Creo una condición para crear el menú, y el usuario pueda
         * interactuar con las diversas opciones que se ofrecen
         */
        
        int confirmacion = 0;
        printMenu();
        cin >> confirmacion;
        if (confirmacion == 0){cout << " Gracias por usar el sistema " << endl;}
        else{
            while (confirmacion != 0){
                if(confirmacion == 1){
                    Ventas producto;
                    producto.llenarDatos();
                    producto.getDatosPersonales();
                    producto.printInfo();
                    printMenu();
                    cin >> confirmacion;}
                else if(confirmacion == 2){
                    Transporte vehiculo;
                    vehiculo.llenarInfo();
                    vehiculo.printInfo();
                    printMenu();
                    cin >> confirmacion;}
                else if (confirmacion == 3){
                    Empleados empleado;
                    empleado.llenarInfo();
                    empleado.printInfo();
                    printMenu();
                    cin >> confirmacion;}
                else if (confirmacion == 0){
                    cout << " Gracias por usar el sistema " << endl;
                    break;}
            }
        }
    }
};

/*
 * Creo la función main, que va a llamar a los archivos
 * donde están las clases guardadas por separado.
 */

int main(){
    Empresa menu;
    menu.menu();
    return 0;
}


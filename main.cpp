//
//  main.cpp
//  proyecto A01702917
//
//  Created by Ramon Mtz on 12/11/20.
//

#include <iostream>
#include <string>
#include "Transporte.h"
#include "Negocio.h"
#include "Empleados.h"
using namespace std;

/*
 Creo una función que me imprima el menú, para no repetir código
 */

void printMenu(){
    cout << " ¿Qué deseas hacer?" << endl;
    cout << " 1 para entrar al sistema " << endl;
    cout << " 2 para los vehículos " << endl;
    cout << " 3 para los empleados " << endl;
    cout << " ó 0 para salir " << endl;
}

/*
 Creo la función principal, que va a llamar a los archivos
 donde están las clases guardadas por separado, para tener más limpio el main
 */

int main() {
    int confirmacion = 0;
    printMenu();
    cin >> confirmacion;
    /*
     Creo una condición para crear el menú, y el usuario pueda
     interactuar con las diversas opciones que se ofrecen
     */
    if (confirmacion == 0){
        cout << " Gracias por usar el sistema " << endl;
    }else{
        while (confirmacion != 0){
            if(confirmacion == 1){
                Negocio producto;
                producto.llenarDatos();
                producto.printInfo();
                confirmacion = 0;
                printMenu();
                cin >> confirmacion;
            }else if(confirmacion == 2){
                Transporte vehiculo;
                vehiculo.llenarInfo();
                vehiculo.printInfo();
                confirmacion = 0;
                printMenu();
                cin >> confirmacion;
            }else if (confirmacion == 3){
                Empleados empleado;
                empleado.llenarInfo();
                empleado.printInfo();
                confirmacion = 0;
                printMenu();
                cin >> confirmacion;
            }else if (confirmacion == 0){
                cout << " Gracias por usar el sistema " << endl;
                break;
            }
        }
    return 0;
    }
}

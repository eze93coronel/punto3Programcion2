#include <iostream>
#include <string>

using namespace std;
void menu();

int main()
{   menu();
    cout << "Hello world!" << endl;
    return 0;
}


void menu(){
    int seleccion;
    while (true){
        system("cls");
        std:: cout << std::string(10, '*') << " Libreria: El librito feliz " << std::string(10, '*') << endl;
        std:: cout << "1. Socios " << endl;
        /// Nuevos, pago de cuotas. Estado de los socios,
        std:: cout << "2. Libros " << endl;
        ///Nuevos, Prestamos y devoluciones, stock de libros.
        std:: cout << "3. Reportes " << endl;
        /// libros prestados por mes, anio. Recaudacion por mes - anio, socios que no solicitaron prestamos en los ultimos X meses.
        std:: cout << "0. SALIR " << endl;
        std:: cout << std::string(50, '*') << endl;
        std:: cout <<" SELECCIONE UNA OPCION: ";
        cin >> seleccion;
        system("cls");
        switch(seleccion){
            case 1: std:: cout <<" ACA VA EL SUBMENU DE LIBROS: " << endl;
            break;
            case 2: std:: cout <<" ACA VA EL SUBMENU DE SOCIOS: " << endl;
            break;
            case 3: std:: cout <<" ACA VA EL SUBMENU DE REPORTES: " << endl;
            break;
            case 0:
                cout << "Saliendo del sistema..." << endl;
                return; // Sale de la función (y por lo tanto del bucle)
            default:
                cout << "Opcion invalida. Intente de nuevo." << endl;
                break;
        }

        system("pause"); // Espera antes de volver a mostrar el menú
    }
}

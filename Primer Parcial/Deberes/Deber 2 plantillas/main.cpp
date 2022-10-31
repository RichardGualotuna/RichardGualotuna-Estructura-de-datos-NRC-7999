/* UFA ESPE
ALumno: Gualotuña Richard, Quintana Wendy
Fecha creacion: 30-10-2022
Fecha modificacion: 
NRC: 7999
 */
#include <iostream>
#include <cstring>
#include <string>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "transform.h"
#include "transform.cpp"
using namespace std;

template <typename T>
class chars{
	public:
		void setDato(T n);
		T getDato()const; // para declara datos fijos 
	private:
	    T dato;	
};

char *ingresoDatos(const char *);

int main(){
    int opcion, valor = 0;
    char dato[10];
    string cadena;
    transform t;
    //chars c;
do{
    cout << "\n\t\t Transformador de datos"<< endl;
	cout << "----------------------------------------------------"<< endl;
	cout << "Opciones: "<< endl;
	cout << "1.Caracter "<< endl;
    cout << "2.Numero "<< endl;
    cout << "3.Salir "<< endl;
    cout << "----------------------------------------------------"<< endl;
    std::cin >> opcion;
    
        switch(opcion){
            case 1:
                char dato[10];
                strcpy(dato, ingresoDatos("Por favor ingrese un caracter: "));
                valor = atoi(dato);
                valor = valor;
                printf("\nEl valor es: %d\n", valor);
                system("pause");
                break;
            case 2:
                cout << "Ingrese un valor: ";
                std::cin >> cadena;
                if(!t.esEntero(cadena) && !t.esFlotante(cadena) && !t.esNumeros(cadena)){
                    cout << "Se trata de un String" << endl;
                }
                else if(t.esEntero(cadena)){
                    cout << "Esto no es un string" << endl;
                    cout << "Transformado a INT: " << t.entero(cadena) << endl;
                }
                else if(t.esFlotante(cadena)){
                    cout << "Esto no es un string" << endl;
                    cout << "Transformado a FLOAT: " << t.flotante(cadena) << endl;
                }
                system("pause");
                break;
            case 3:
                cout << "EXIT" << endl;
                 system("pause");
                break;
            default:
                cout << "OPTION ERROR" << endl;
                 system("pause");
                break;
        }
        system("cls");
    }while(opcion != 3);
    
    return 0;
}
char *ingresoDatos(const char *cadena){
    char *dato = new char[10];
    char c;
    int i = 0;
    printf("%s", cadena);
    while((c = getch()) != 13 ){
        if((c >= '0' && c <= '9')){
            printf("%c", c);
            dato[i++] = c;
        }
    }
    dato[i] = '\0';
    return dato;
}



/* UFA ESPE
ALumno: Gualotuña Richard, Quintana Wendy
Fecha creacion: 26-10-2022
Fecha modificacion: 
Crear un programa que pida datos personales y devuelva la edad del usuario usando TDA
NRC: 7999
*/
#include <iostream>
#include <string>
#include "Cpersona.cpp"
using namespace std;

int main(){
	std::string nombre;
	std::string apellido;
	std::string ciudad;
	int diaAct;
	int mesAct;
	int anioAct;
	int dia;
	int mes;
	int anio;
    
		
cout<<"Ingrese el nombre: ";
getline (cin,nombre);
cout<<"Ingrese el apellido: ";
getline (cin,apellido);
cout<<"Ingrese la ciudad: ";
getline (cin,ciudad);
cout<<"Ingrese dia Actual:"<<endl; 
cin >> diaAct;
cout<<"Ingrese Mes Actual:"<<endl;   
cin >> mesAct;
cout<<"Ingrese Año Actual:"<<endl;   
cin >> anioAct;
cout<<"Ingrese el dia de nacimiento"<<endl;
cin>>dia;
cout<<"Ingrese el mes de nacimiento"<<endl;
cin>>mes;
cout<<"Ingrese el anio de nacimiento"<<endl;
cin>>anio;
cout << " Edad: " <<anioAct - anio << endl; //Muestra edad
//calcularEdad( diaAct , mesAct, anioAct, dia, mes, anio);
Cpersona *obj=new Cpersona(nombre, apellido, ciudad, diaAct, mesAct, anioAct, dia, mes, anio);
obj->imprimirObj(*obj);
return 0;
}

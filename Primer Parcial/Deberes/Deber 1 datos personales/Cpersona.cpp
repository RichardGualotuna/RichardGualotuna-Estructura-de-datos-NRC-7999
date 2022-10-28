/* UFA ESPE
ALumno: Gualotuña Richard, Quintana Wendy
Fecha creacion: 26-10-2022
Fecha modificacion: 
Crear un programa que pida datos personales y devuelva la edad del usuario usando TDA
NRC: 7999
*/

#include <iostream>
#include "Cpersona.h"
using namespace std;
std::string Cpersona::getNombre(void)
{
   return nombre;
}
void Cpersona::setNombre(std::string& newNombre)
{
   nombre = newNombre;
}
std::string Cpersona::getApellido(void)
{
   return apellido;
}
void Cpersona::setApellido(std::string& newApellido)
{
   apellido = newApellido;
}
std::string Cpersona::getCiudad(void)
{
   return ciudad;
}
void Cpersona::setCiudad(std::string& newCiudad)
{
   ciudad = newCiudad;
}
int Cpersona::getDiaAct(void)
{
   return diaAct;
}
void Cpersona::setDiaAct(int newDiaAct)
{
	diaAct = newDiaAct;
}
int Cpersona::getMesAct(void)
{
   return mesAct;
}
void Cpersona::setMesAct(int newMesAct)
{
   mesAct = newMesAct;
}
int Cpersona::getAnioAct(void)
{
   return anioAct;
}
void Cpersona::setAnioAct(int newAnioAct)
{
  anioAct = newAnioAct;  
}
int Cpersona::getDia(void)
{
   return dia;
}
void Cpersona::setDia(int newDia)
{
	dia = newDia;
}
int Cpersona::getMes(void)
{
   return mes;
}
void Cpersona::setMes(int newMes)
{
   mes = newMes;
}
int Cpersona::getAnio(void)
{
   return anio;
}
void Cpersona::setAnio(int newAnio)
{
  anio = newAnio;  
}

Cpersona::Cpersona(std::string& nombre, std::string& apellido, std::string& ciudad, int diaAct, int mesAct, int anioAct, int dia, int mes, int anio)
{
   this->nombre=nombre;
   this->apellido=apellido;
   this->ciudad=ciudad;
   this->dia=dia;
   this->mes=mes;
   this->anio=anio;
   this->diaAct=diaAct;
   this->mesAct=mesAct;
   this->anioAct=anioAct;
}
//int Cpersona::calcularEdad(int dia, int mes, int anio){
//	int resultado	
//}

int Cpersona::calcularEdad(int diaAct,int mesAct,int anioAct, int dia, int mes, int anio)
{
    int respDia , respMes;
 
    if ( diaAct < dia  )
    {   //En caso de ser menor la fecha actual que el nacimiento
        diaAct = diaAct + 30; // Se le suma los 30 días (1 mes) a la fecha actual
        mesAct = mesAct - 1; // Se le resta un mes (30 días) al mes actual
        respDia =  diaAct - dia; //Se le resta fecha nacimiento al actual
    }
    else //En caso de ser mayor la fecha actual que el nacimiento
        respDia =  diaAct - dia;  //Se le resta fecha nacimiento al actual
 
    if( mesAct < mes )
    {   
        mesAct = mesAct + 12; 
        anioAct = anioAct - 1 ; 
        respMes = mesAct - mes; 
    }
    else 
        respMes = mesAct - mes; 
//Cpersona::Cpersona()
//{
   // TODO : implement
//}

return 0;
}
void Cpersona::imprimirObj(Cpersona obj)
{
   //Cpersona obj;
   cout<<"nombre "<<obj.getNombre()<<"\n Apellido "<<obj.getApellido()<<"\n Ciudad "<<obj.getCiudad()<<"\n DiaAct "<<obj.getDiaAct()<<"\n MesAct "<<obj.getMesAct()<<"\n AnioAct "<<obj.getAnioAct()<<"\n Dia "<<obj.getDia()<<"\n Mes "<<obj.getMes()<<"\n  "<<calcularEdad(diaAct, mesAct, anioAct, dia, mes, anio)<<endl;
}
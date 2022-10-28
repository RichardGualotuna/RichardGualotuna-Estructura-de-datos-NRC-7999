/* UFA ESPE
ALumno: Gualotuña Richard, Quintana Wendy
Fecha creacion: 26-10-2022
Fecha modificacion: 
Crear un programa que pida datos personales y devuelva la edad del usuario usando TDA
NRC: 7999
*/
#if !defined(__Class_Diagram_2_Cpersona_h)
#define __Class_Diagram_2_Cpersona_h
#include <iostream>
#include <string.h>
class Cpersona
{
public:
   std::string getNombre(void);
   void setNombre(std::string& newNombre);
   std::string getApellido(void);
   void setApellido(std::string& newApellido);
   std::string getCiudad(void);
   void setCiudad(std::string& newCiudad);
    int getDiaAct(void);
   void setDiaAct(int newDiaAct);
    int getMesAct(void);
   void setMesAct(int newMesAct);
    int getAnioAct(void);
   void setAnioAct(int newAnioAct);
    int getDia(void);
   void setDia(int newDia);
    int getMes(void);
   void setMes(int newMes);
    int getAnio(void);
   void setAnio(int newAnio);
   Cpersona(std::string& nombre, std::string& apellido, std::string& ciudad,int diaAct, int mesAct, int anioAct, int dia, int mes, int anio);
   Cpersona();
   int calcularEdad(int diaAct, int mesAct, int anioAct, int dia, int mes, int anio);
   void imprimirObj(Cpersona obj);
protected:
private:
   std::string nombre;
   std::string apellido;
   std::string ciudad;
   int diaAct;
   int mesAct;
   int anioAct;
   int dia;
   int mes;
   int anio;
   
};
#endif
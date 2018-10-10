#include <iostream>
#include <stdlib.h>

 // realizar un algoritmo  que lea el nombre del trabajador, la cantidad de
 // meses que trabajo, mostrar en pantalla el porcentaje de meses que trabajo en el año//
	using namespace std;
	int main(){
		string nombre; // declaracion de variable tipo cadena de texto
		int cantmesesquetra; // declaracion de variable entero
		cout<<"Ingrese el nombre del trabajor";
		cin>>nombre;
		cout<<"Ingrese las cantidad de meses que trabajo al ano";
		cin>>cantmesesquetra;
		cout<<nombre<<"el porcentaje de meses que trabajo al ano es de   "<<((cantmesesquetra*100)/12)<<endl;
	
	
	
	
	
	system("PAUSE");
	return 0;
}

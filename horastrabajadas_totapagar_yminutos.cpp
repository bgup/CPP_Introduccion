#include <iostream>
#include <stdlib.h>
// Algoritmo en el cual un Usuario ingresa las horas trabajadas,valor de cada 
//hora y muestra el total a pagar y los minutos que trabajo
	using namespace std;
	int main (){
		int horastrabajadas,horasypagtot,minquetrabajo,valorh; // declaracion de variables
		cout<<"ingrese las horas trabajadas";
		cin>>horastrabajadas;
		cout<<"ingrese el valor de cada hora";
		cin>>valorh;
		horasypagtot=(horastrabajadas*valorh);// a la variable horasypagotot se le asigna la siguiente operacion (horastrabajadas*valorh)//
		minquetrabajo=(horastrabajadas*60);//a la variable minquetrabajo se le asigna las horastrabajadas* 60 que son los  minutos que tiene cada hora que trabajo//
		cout<<"el total a pagar es "<<horasypagtot<<"y los minutos que trabajo fueron:"<<minquetrabajo<<endl;// se imprime en pantalla el total a pagar y los minutos que trabajo//
		system("PAUSE");
		return 0;
		
}

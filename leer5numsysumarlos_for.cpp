#include <iostream>
#include <stdlib.h>
// Realize un algoritmo que lea 5 numeros dados por el usuario y muestra la suma//
	using namespace std;
	int main (){
		
			int suma,ningresado;//declaracion de variables tipo entero
			
			for (int i=0;i<5;i++){ 
				cout<<"ingrese cinco numeros";
				cin>>ningresado;
				suma=suma+ningresado; // la variable suma se le asigna suma que vale cero mas 
				// el numero ingresado hasta que la variable sea menor que 5 
				
			}
			
			cout<<"la suma de los cinco numeros es"<<suma<<endl;
			
			
		
	system("PAUSE");
	return 	0;	
}

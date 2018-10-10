#include <iostream>
#include <stdlib.h>
// Realizar un algoritmo que lea un numero si el numero es 
// par muestre el doble en caso contrario muestre la mitad del numero
	using namespace std;
	int main (){
	int num; // declaracion de variables
	cout<<"ingrese el numero";
	cin>>num; 
	if (num%2==0){  // si el modulo o residuo del numero ingresado es igual a 0 el numero es par
		cout<<"El numero es par y el doble es" <<num*2<<endl;
	}else{ // si la condicion no se cumple hace lo siguiente
		float numimpar=num; // asignacion de variable
		cout<<"el numero  es impar y la mitad  es"<<numimpar/2<<endl;  // se  divide el numero impar en 2 y se muestra la mitad.
	}
	
	system("pause");
	return 0;
}

#include <iostream>
#include <stdlib.h>
// realizar un algoritmo que lea un numero y si el numero es mayor  que cien, muestre el cuadrado del numeri
// si no muestre el residuo del numero divido en 3	
	using namespace std;
	int main (){
	int num;  // declaracion de variables 
	cout<<"ingrese el numero";  // se imprime en pantalla el mensaje
	cin>>num; // se guarda variable en num
	if (num>=100){ // si el numero es mayor a cien se imprime en pantala el  cuadrado 
		cout<<"El numero es mayor que cien y el cudrado es " <<num*num<<endl; 
	}else{ // si el numero es menor a cien se  imprime en pantalla es menor y el residuo divido en 3 
		cout<<"el numero es menor y el residuo de divirlo x3 es "<<num%3<<endl; 
	}
	
	system("pause");
	return 0;
}

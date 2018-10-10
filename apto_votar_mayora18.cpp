#include <iostream>
#include <stdlib.h>

using namespace std;
int main (){
	int edad;
	cout<<"ingrese su edad";
	cin>>edad;
	if (edad>=18){
		cout<<"usted es apto para votar"<<endl;
	}else{
		cout<<"usted no es apto para votar"<<endl;
	}
	system("pause");
	return 0;
}

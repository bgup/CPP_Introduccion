#include <iostream>
#include <stdlib.h>

using namespace std;
int main (){
	int num1,num2;
	cout<<"ingrese numero1";
	cin>>num1;
	cout<<"ingrese numero2";
	cin>>num2;
	if (num1<num2){
		cout<<"El numero menor es" <<num1<<endl;
	}else{
		cout<<"el numero menor es"<<num2<<endl; 
	}
	
	system("pause");
	return 0;
}

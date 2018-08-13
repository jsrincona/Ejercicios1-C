#include<iostream>

using namespace std;

int mes(int a);

int main(){
	int b;
	cout<<"Este programa recibira el numero del mes que quiera consultar\n";
	cout<<"Y le dara la cantidad de dias que posee ese mes"<<endl;
	cout<<"Por favor ingrese el numero del mes que quiere consultar\n";
	cin>>b;
	mes(b);
	system("pause");
	return 0;
}
int mes(int a){
	switch(a){
		case 1:
			cout<<"El mes de enero tiene 31 dias"<<endl;
			break;
		case 2:
			cout<<"El mes de febero tiene 28 dias y 29 si es un año bisiesto"<<endl;
			break;
		case 3:
			cout<<"El mes de marzo tiene 31 dias"<<endl;
			break;
		case 4:
			cout<<"El mes de abril tiene 30 dias"<<endl;
			break;
		case 5:
			cout<<"El mes de mayo tiene 31 dias"<<endl;
			break;
		case 6:
			cout<<"El mes de junio tiene 30 dias"<<endl;
			break;
		case 7:
			cout<<"El mes de julio tiene 31 dias"<<endl;
			break;
		case 8:
			cout<<"El mes de agosto tiene 31 dias"<<endl;
			break;
		case 9:
			cout<<"El mes de septiembre tiene 30 dias"<<endl;
			break;
		case 10:
			cout<<"El mes de octubre tiene 31 dias"<<endl;
			break;
		case 11:
			cout<<"El mes de noviembre tiene 30 dias"<<endl;
			break;
		case 12:
			cout<<"El mes de diciembre tiene 31 dias"<<endl;
			break;
		default:
			cout<<"El numero ingresado no es valido, por favor ingrese un numero del 1 al 12\n";
			break;
	}
}

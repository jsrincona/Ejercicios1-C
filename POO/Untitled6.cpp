#include <iostream>
#include <math.h>
using namespace std;
int Suma (int numero1,int numero2);
int Resta (int numero1,int numero2);
int Multiplicacion (int numero1,int numero2);
int Division (int numero1,int numero2);


int main (){
	float numero1,numero2,Tot;
	int x,opcion;
	do{
		cout<<"Si desea hacer una suma digite 1\n";
		cout<<"Si desea hacer una resta digite 2\n";
		cout<<"Si desea hacer una multiplicacion digite 3\n";
		cout<<"Si desea hacer una dvision digite 4\n";
		cin >>opcion;
		system("CLS");
		switch(opcion){
			case 1:
				cout<<"	SUMA\n";
				cout <<"Digite el primer valor\n";
				cin >>numero1;
				cout <<"Digite el segundo valor\n";
				cin >>numero2;
				Suma (numero1,numero2);
				break;
			case 2:
				cout<<"	RESTA\n";
				cout <<"Digite el primer valor\n";
				cin >>numero1;
				cout <<"Digite el segundo valor\n";
				cin >>numero2;
				Resta (numero1,numero2);
				break;
			case 3:
				cout<<"	MULTIPLICACION\n";
				cout <<"Digite el primer valor\n";
				cin >>numero1;
				cout <<"Digite el segundo valor\n";
				cin >>numero2;
				Multiplicacion (numero1,numero2);
				break;
			case 4:
				cout<<"	DIVISION\n";
				cout <<"Digite el primer valor\n";
				cin >>numero1;
				cout <<"Digite el segundo valor\n";
				cout <<"Recuerde que el segundo valor no puede ser 0\n";
				cin >>numero2;
				Division (numero1,numero2);
				break;
			default:
				cout<<"Digite valores validos\n";
				break;
		}
		cout<<"si desea ejecutar el programa otra vez digite 1\n";
		cin >> x;
		system("CLS");
	}while(x == 1);
	return 0;
}

int Suma (int numero1,int numero2){
	float Tot = numero1 + numero2;
	cout <<"La Suma de "<<numero1<<" con "<<numero2<<" es: "<<Tot<<"\n";
}
int Resta (int numero1,int numero2){
	float Tot = numero1 - numero2;
	cout <<"La Resta de "<<numero1<<" con "<<numero2<<" es: "<<Tot<<"\n";
}
int Multiplicacion (int numero1,int numero2){
	float Tot = numero1 * numero2;
	cout <<"La Multiplicacion de "<<numero1<<" con "<<numero2<<" es: "<<Tot<<"\n";
}
int Division (int numero1,int numero2){
	
	if (numero2 == 0){
		cout <<"Digite un valor diferente de 0\n";
	}else{
	float Tot = numero1 / numero2;
	cout <<"La Division de "<<numero1<<" con "<<numero2<<" es: "<<Tot<<"\n";
	}
}

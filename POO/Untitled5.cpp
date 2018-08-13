#include <iostream>
using namespace std;
int main(){
string palabra,r;
int x;
do{
	system("CLS");
	cout <<"Digite la palabra:\n";
	cin >> palabra;
 	for(int i = palabra.length()-1; i >= 0; i--){
		r = r + palabra[i];
	}
 	if(palabra == r){
		cout << "\nEs palindromo";
 	}else{
		cout << "\nNo es palindromo";
	} 
	cout<<"\nSi desea ejecutar el progama de nuevo digite 1: ";
	cin>>x;
}while(x=1);
}

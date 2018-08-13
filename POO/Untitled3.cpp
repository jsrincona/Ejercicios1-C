#include <iostream>
using namespace std;
int main(){
    int i,numero,anterior2,fibo;
    anterior2 = 1;
    fibo = 2;
    i = 2;
    cout <<"cuantas veces quiere que se repita\n";
    cin >>numero;
    cout <<anterior2<<"\n"<<anterior2<<"\n";
    while (i <= numero){
    	i++;
    	cout << fibo <<"\n";
    	fibo = fibo+anterior2;
    	anterior2 = fibo-anterior2;
	}
system("PAUSE");
return 0;
}


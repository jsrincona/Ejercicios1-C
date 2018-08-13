#include <iostream>
using namespace std;
int main(){
	int num[7];
	int d = 0;
	do{
		system("CLS");
		int x = 0;
		cout <<"Digite los valores\n";
		while (x != 7){
			cout <<"Valor "<<x<<" : ";
			cin >> num[x];
			x++;
		}
		for (int i=0;i < 7;i++){
			for(int p = i + 1;p < 7;p++){
				if(num[i]<=num[p]){
				num[7]=num[i];
				num[i]=num[p];
				num[p]=num[7];
				}
			}
		}
		cout<<"Ascendente\n";
		for(x = 0;x <= 6;x++){
			cout << num[x]<<" ";
		}
		cout<<"\nDescendente\n";
		for(x = 6;x >= 0;x--){
			cout << num[x]<<" ";
		}
		cout<<"\nDigite 1 para iniciar el programa otra vez\n";
		cin>>d;
	}
	while(d == 1);
	return 0;
}


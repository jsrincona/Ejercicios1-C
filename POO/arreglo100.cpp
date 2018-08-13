#include <iostream>
using namespace std;

int main(){
	int a[100];
	int n=1;

		for(int i=0;i<100;i++){
			a[i]=n++;
				if(a[i]%2==0){
					cout<<a[i]<<endl;
			}
		}		
}


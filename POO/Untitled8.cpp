#include <iostream>
#include <math.h>

using namespace std;
      int Cuadrado (float num1);
      int Rombo (float num1, float num2);
      int Paralelogramo (float num1, float num2);
      int Trapecio (float num1, float num2, float num3, float num4);
      
      
int main (){
    
    float num1, num2, num3,num4;
    int x, opcion,opcionB;
    
        
        cout <<"\t\tPERIMETROS & AREAS\n\nElija El elemento a calcular :\n";
        cout <<" Cuadrado Presione             1\n";
        cout <<" Rombo presione                2\n";
        cout <<" Paralelogramo presione        3\n";
        cout <<" Trapecio presione             4\n";
        
        cin >>opcion;
        system("CLS");
        
        switch(opcion){ 
                        case 1:
                             cout<<"\t\tCUADRADO\n\n";
                             cout<<"Para Encontrar :\n";
                             cout<<"El area presione    1\n";
                             cout<<"El Per. presione    2\n";
                             cin>>opcionB;
                             system("CLS");
                             switch(opcionB){
                                            case 1:
                                                  cout <<"Para  encontrar el area porfavor ingrese un lado del cuadrado\n";
                                                  cin >>num1;
                                                  Cuadrado(num1);
                                                  break;
                                            case 2:
                                                  cout <<"Para  encontrar el perimetro porfavor ingrese un lado del cuadrado\n";
                                                  cin >>num1;
                                                  Cuadrado(num1);
                                                  break;
                                              }
                                              break;
                                                  
                        case 2:
                             cout<<"\t\tROMBO\n\n";
                             cout<<"Para Encontrar :\n";
                             cout<<"El area presione    1\n";
                             cout<<"El Per. presione    2\n";
                             cin>>opcionB;
                             system("CLS");
                             switch(opcionB){
                                            case 1:
                                                  cout <<"Para  encontrar el area porfavor ingrese un lado del rombo\n";
                                                  cin >>num1;
                                                   cout <<"Para  encontrar el area porfavor ingrese el otro lado del rombo\n";
                                                  cin >>num2;
                                                  Rombo(num1,num2);
                                                  break;
                                            case 2:
                                                  cout <<"Para  encontrar el perimetro porfavor ingrese un lado del rombo\n";
                                                  cin >>num1;
                                                   cout <<"Para  encontrar el perimetro porfavor ingrese el diagonal del rombo\n";
                                                  cin >>num2;
                                                  Rombo(num1,num2);
                                                  break;
                                              }
                                              break;
                        case 3:
                             cout<<"\t\tPARALELOGRAMO\n\n";
                             cout<<"Para Encontrar :\n";
                             cout<<"El area presione    1\n";
                             cout<<"El Per. presione    2\n";
                             cin>>opcionB;
                             system("CLS");
                             switch(opcionB){
                                             case 1:
                                                  cout <<"Para  encontrar el area porfavor ingrese un lado del paralelogramo\n";
                                                  cin >>num1;
                                                   cout <<"Para  encontrar el area porfavor ingrese el otro lado del paralelogramo\n";
                                                  cin >>num2;
                                                  Paralelogramo(num1,num2);
                                                  break;
                                            case 2:
                                                  cout <<"Para  encontrar el perimetro porfavor ingrese un lado del paralelogramo\n";
                                                  cin >>num1;
                                                   cout <<"Para  encontrar el perimetro porfavor ingrese el otro lado del paralelogramo\n";
                                                  cin >>num2;
                                                  Paralelogramo(num1,num2);
                                                  break;
                                              }
                            break;
                         case 4:
                             cout<<"\t\tTRAPECIO\n\n";
                             cout<<"Para Encontrar :\n";
                             cout<<"El area presione    1\n";
                             cout<<"El Per. presione    2\n";
                             cin>>opcionB;
                             system("CLS");
                             switch(opcionB){
                                             case 1:
                                                  cout <<"Para  encontrar el area porfavor ingrese un lado del trapecio\n";
                                                  cin >>num1;
                                                   cout <<"Para  encontrar el area porfavor ingrese el otro lado del trapecio\n";
                                                  cin >>num2;
                                                  cout <<"Para  encontrar el area porfavor ingrese el otro lado del trapecio\n";
                                                  cin >>num3;
                                                  
                                                  break;
                                            case 2:
                                                  cout <<"Para  encontrar el perimetro porfavor ingrese un lado del trapecio\n";
                                                  cin >>num1;
                                                   cout <<"Para  encontrar el perimetro porfavor ingrese el otro lado del trapecio\n";
                                                  cin >>num2;
                                                   cout <<"Para  encontrar el perimetro porfavor ingrese el otro lado del trapecio\n";
                                                  cin >>num3;
                                                   cout <<"Para  encontrar el perimetro porfavor ingrese el otro lado del trapecio\n";
                                                  cin >>num4;
                                                  Trapecio(num1,num2,num3,num4);
                                                  break;
                                              }
                                              break;
                                                  
                                                  
                                                  
                                                  
                                                  
}

}


int Cuadrado (float num1){
    float ACuadrado = pow(num1,2);
    float PCuadrado = (4*num1);
    cout<<"El Area del cuadrado es: "<<ACuadrado<<"CM2\n";
    cout<<"El Perimetro del cuadrado es :"<<PCuadrado<<"CM\n";
    
}

int Rombo (float num1, float num2){
    float ARombo = num1*num2;
    float PRombo = (4*num1);
    cout<<"El Area del Rombo es :"<<ARombo<<"CM\n";
    cout<<"El Perimetro del Rombo es :"<<PRombo<<"CM\n";
}

int Paralelogramo (float num1, float num2){
    float AParalelogramo = (num1*num2); 
    float PParalelogramo =  2*(num1*num2);
     cout<<"El Area del Paralelogramo es :"<<AParalelogramo<<"CM\n";
     cout<<"El Perimetro del Rombo es :"<<PParalelogramo<<"CM\n";
}

int Trapecio (float num1, float num2, float num3,float num4){  
    int ATrapecio = num1*((num2+num3)/2);
    int PTrapecio = num1+num2+num3+num4;
     cout<<"El Area del trapecio es :"<<ATrapecio<<"CM\n";
    cout<<"El Perimetro del Rombo es :"<<PTrapecio<<"CM\n";
}




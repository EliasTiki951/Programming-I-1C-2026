#include <iostream> ///Libreria por Defecto
#include <cstdlib>  ///Funciones generales como gestión de memoria, conversión de tipos y números aleatorios.
#include <conio.h>  ///Para el CMD de Windons
using namespace std;

int main(){
    float sal;

    cout<<"==============="<<endl;
    cout<<"    SALARIO    "<<endl;
    cout<<"==============="<<endl;
    cout<<endl;

    cout<<"Ingrese su salario: ";
    cin>>sal;

    if(sal>0){
        if(sal<=100000){
            sal = sal-(sal*5)/100;
            cout<<"El Impuesto es de un 5% y tu salario final es de "<<sal<<" pesos."<<endl;
        }else if(sal<=300000){
            sal = sal-(sal*10)/100;
            cout<<"El impuesto es de un 10% y tu salario final es de "<<sal<<" pesos."<<endl;
        }else{
            sal = sal-(sal*15)/100;
            cout<<"El impuesto es de un 15% y tu salario final es de "<<sal<<" pesos."<<endl;
        }
    }else{
        cout<<"Salario Falso"<<endl;
    }

    getch();
    return 0;
}

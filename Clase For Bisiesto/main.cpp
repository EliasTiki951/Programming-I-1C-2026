//Usa For para ver los años Bisiestos

#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	for(int i=1900; i<=2026; i++){
		if(i%4==0 && i%100!=0 || i%400==0){
			cout<<i<<" es Año Bisiesto"<<endl;
		}
	}
	
	getch();
	return 0;
}

// 8) Mostrar todos los números pares entre 1 y 100 usando while. 

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	int N = 0;
	
	//Pares entre 1 y 100.
	
	while(N<=100){
		N = N + 1;
		
		if(N % 2 == 0){
			cout<<N<<endl;
		}
	}
	
	getch();
	return 0;
}

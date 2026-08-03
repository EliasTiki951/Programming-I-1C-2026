//Contador con For

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	int n1, n2;
	
	cout<<"Ingrese el número 1: ";
	cin>>n1;
	cout<<"Ingrese el número 2: ";
	cin>>n2;
	
	if(n1>n2){
		for(int i=n1; i>=n2; i--){
		    cout<<i<<endl;
		}
	}else{
		for(int i=n1; i<=n2; i++){
			cout<<i<<endl;
		}
	}
	
	getch();
	return 0;
}

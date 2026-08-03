#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

void CargarMatriz(int m[][3], int f, int c){
	//int x=1;
	for(int i=0; i<f; i++){
		for(int j=0; j<c; j++){
			cin>>m[i][j];//=x
			//x++;
		}
		cout<<endl;
	}
}

void MostrarMatriz(int m[][3], int f, int c){
	for(int i=0; i<f; i++){
		for(int j=0; j<c; j++){
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main() {
	
	int mat[5][3];
	
	CargarMatriz(mat,5,3);
	MostrarMatriz(mat,5,3);
	
	/*
	int mat [5][3]{};
	
	for(int i=0; i<5; i++){
		for(int j=0; j<3; j++){
			cout<<mat[i][j];
			cin>>mat[i][j];
		}
		cout<<endl;
	}
	*/
	
	getch();
	return 0;
}

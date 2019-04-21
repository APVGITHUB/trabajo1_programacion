#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "matrix.h"

using namespace std;

int **m_matrix;

int main(){

	extern int **m_matrix;
	m_matrix=(int **)malloc(10*sizeof(int *));
	for(int i=0;i<10;i++){
		m_matrix[i]=(int *)malloc(10*sizeof(int));
	}//DECLARACION DE PUNTERO Y RESERVA DE MEMORIA
		//MATRIZ MAXIMA 10X10

	int ejemplo=0;
	cout<<"elija un ejemplo de matriz: ";
	cin>>ejemplo;

	Matrix q= Matrix(ejemplo);
	q.fill_matrix();
	q.print_matrix();
	return 0;
}

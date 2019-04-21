#include <iostream>
#include <conio.h>
#include "matrix.h"

using namespace std;



int main(){
	int ejemplo=0;
	cout<<"Elija un experimento: ";
	cin>>ejemplo;
	cout << endl;
	Matrix q= Matrix(ejemplo);
	q.fill_matrix();
	q.print_matrix();
	/* faltaria liberar la memoria del puntero al final del programa */
	return 0;
}

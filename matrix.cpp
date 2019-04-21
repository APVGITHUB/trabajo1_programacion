#include <iostream>
#include <conio.h>
#include <time.h>
#include "matrix.h"
#define DIM 10			/* dimension maxima del espacio reservado para la matriz */
#define x 9				/* distancia maxima entre puntos */
using namespace std;



Matrix::Matrix(int _exp){		/* constructor */
  exp=_exp;
  m_matrix=(int **)malloc(DIM*sizeof(int *));
	for(int i=0;i<DIM;i++){
		m_matrix[i]=(int *)malloc(DIM*sizeof(int));
	}
}


Matrix::~Matrix() {}			/* destructor */



void Matrix::set_dimension(int m){	/* dimension de la matriz */
	N=m;
}


void Matrix::print_matrix(){		/* imprime la matriz */
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout <<*(*(m_matrix+i)+j)<< " ";
        }
        cout << endl;
    }
    cout << endl << endl;
}



void Matrix::fill_matrix(){		/* llena la matriz segun el experimento */ 
	int m;
  int a[2][2]={{1,2},
               {3,4}};

  int b[3][3]={{1,2,3},
               {4,5,6},
               {7,8,9}};

	switch (exp){
		case 0: m=2;
			set_dimension(m);
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					m_matrix[i][j] =a[i][j];
				}
			}
			break;
		case 1: m=3;
			set_dimension(m);
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					m_matrix[i][j] =b[i][j];
				}
			}
			break;
		default:		/* experimento aleatorio -> genera matriz aleatoria */
			cout << "Numero de puntos: ";  /* dimension de la matriz */
			cin >> m;
			set_dimension(m);
			cout << endl;
			srand(time(NULL));
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++){
					if (i==j) 
						m_matrix[i][j] = 0;
					else 
						m_matrix[i][j] = rand()%(x+1);
				}
			}
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++){
					m_matrix[i][j] = m_matrix[j][i];
				}
			}
	}
}	
	

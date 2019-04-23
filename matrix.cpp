#include <iostream>
#include <time.h>	
#define DIM 10	/* dimension maxima del espacio reservado para la matriz */
#define x 9				/* distancia maxima entre puntos */
using namespace std;

int exp=0;
int m_matrix[DIM][DIM];
int m=DIM;


void print_matrix(){		/* imprime la matriz */
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout <<m_matrix[i][j]<< " ";
        }
        cout << endl;
    }
    cout << endl << endl;
}



void fill_matrix(){		/* llena la matriz segun el experimento */ 

  int a[2][2]={{1,2},
               {3,4}};

  int b[3][3]={{1,2,3},
               {4,5,6},
               {7,8,9}};

	switch (2){
		case 0: m=2;
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < m; j++) {
					m_matrix[i][j] =a[i][j];
				}
			}
			break;
		case 1: m=3;
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < m; j++) {
					m_matrix[i][j] =b[i][j];
				}
			}
			break;
		default:		/* experimento aleatorio -> genera matriz aleatoria */
			cout << endl;
			srand(time(NULL));
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < m; j++){
					if (i==j) 
						m_matrix[i][j] = 0;
					else 
						m_matrix[i][j] = rand()%(x+1);
				}
			}
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < m; j++){
					m_matrix[i][j] = m_matrix[j][i];
				}
			}
	}
}	
	

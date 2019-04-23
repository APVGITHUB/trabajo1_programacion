#include <iostream>
#include <time.h>
#define DIM 10	/* dimension maxima del espacio reservado para la matriz */
#define x 12			/* distancia maxima entre puntos */
using namespace std;

int m_matrix[DIM][DIM];
int m=DIM;
int path[100];
const int n=DIM;//sizeof(m_matrix)/sizeof(m_matrix[0]);
int i,k,minimo;

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
		/* experimento aleatorio -> genera matriz aleatoria */
			srand(time(NULL));
			int r;
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < m; j++){
					r=rand()%(x+1);
					if (i==j || r>9)
						m_matrix[i][j] = 0;
					else
						m_matrix[i][j] = r;
				}
			}
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < m; j++){
					m_matrix[i][j] = m_matrix[j][i];
				}
			}
	}

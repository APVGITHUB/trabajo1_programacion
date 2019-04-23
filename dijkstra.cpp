/* Algoritmo estándar de dijkstra en c++*/


#define INFINITO 1000000000 /* un número mayor que cualquier ruta máxima */

extern int m_matrix[DIM][DIM];/* m_matrix[i][j] es la distancia de i a j */

struct nodo { /* Indica el estado del nodo,la ruta y quien lo precede a dicho nodo */
	int predecesor=-1; /* nodo previo */
	int longitud=INFINITO; /* longitud del origen a este nodo */
	bool etiqueta=false;	/*verdadero para un nodo permanente y falso para nodo tentativo*/
} nodo[n];

void relajar(){
	for (int i = 0; i <n; i++){ /* este grafo tiene n nodos */
	        if (m_matrix[k][i] != 0 && nodo[i].etiqueta == false) {
		        if (nodo[k].longitud + m_matrix[k][i] < nodo[i].longitud) {
			        nodo[i].predecesor = k;
		                nodo[i].longitud = nodo[k].longitud + m_matrix[k][i];
		        }
                }
        }
}
void extraer_minimo(){ 	/* Encuentra los nodo etiquetados tentativamente y determina el menor entre estos nodos tentativos. */
	k = 0;
	minimo = INFINITO;
	for (i = 0; i < n; i++){
		if (nodo[i].etiqueta == false && nodo[i].longitud < minimo) {
			minimo = nodo[i].longitud;
			k = i;
		}
	}
}

void calcular_dij(int start, int end) {
	nodo[start].longitud = 0;
	nodo[start].etiqueta = true;
	k = start;
	do{
		relajar();
		extraer_minimo();
		nodo[k].etiqueta = true;
	} while (k != end);
	i = 0;
	k = end;
	do { /* Aqui se obtiene el vector que indica el camino correcto */
		path[i] = k;
		cout << k << " ";
		k = nodo[k].predecesor;
		i++;
	} while (k >= 0);
	cout << endl;
}

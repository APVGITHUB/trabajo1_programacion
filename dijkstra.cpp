#define MAX_NODOS 1024 /* número máximo de nodos */
#define INFINITO 1000000000 /* un número mayor que cualquier ruta máxima */
int n,i,k,minimo, dist[MAX_NODOS][MAX_NODOS]; /* dist[i][j] es la distancia de i a j */

struct nodo { /* Indica eL estado del nodo,la ruta y quien lo precede a dicho nodo */
	int predecesor; /* nodo previo */
	int longitud; /* longitud del origen a este nodo */
	bool etiqueta;	/*verdadero para un nodo permanente y falso para nodo tentativo*/
} nodo[MAX_NODOS];

void inicializacion(){
	for (p = &nodo[0]; p < &nodo[n]; p++) { /* estado de inicialización*/
	        p->predecesor = -1;
	        p->longitud = INFINITO;
	        p->etiqueta = false;
        }
}
void relajar(){
	for (int i = 0; i <n; i++){ /* este grafo tiene n nodos */
	        if (dist[k][i] != 0 && nodo[i].etiqueta == false) {
		        if (nodo[k].longitud + dist[k][i] < nodo[i].longitud) {
			        nodo[i].predecesor = k;
		                nodo[i].longitud = nodo[k].longitud + dist[k][i];
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

void camino_corto(int s, int t, int camino[]) {
	inicializacion();
	nodo[t].longitud = 0; nodo[t].etiqueta = true;
	k = t; /* k es el nodo de trabajo inicial */
	do{ /* ¿hay una ruta mejor desde k? */
		relajar();
		extraer_minimo();
		nodo[k].etiqueta = true;
	} while (k != s);
	/* Copia la ruta en el arreglo de salida y procede a ir imprimiendolo. */
	i = 0; k = s;
	cout<< "La ruta es: ";
	do {
		cout<< k<< " ";
		camino[i] = k;
		k = nodo[k].predecesor;
		i++;
	} while (k >= 0);
	cout <<"La ruta minima es: "<<minimo<<endl ;
}
int main(){
    int nodo_final,nodo_inicial,arista;
    //solicita o ingresa directamente los valores de nodo_final,nodo_inicial
    //Llenar de 0 la matriz
    for (int i=0; i<n; i++){
	    for( int j=0; j<n; j++){
	        dist[i][j]=0;
	    }
    }
    // Llenar la matriz dist[i][j]
    /*............................
    ............................*/
    //Por ultimo llamar a la función camino corto
       camino_corto(nodo_final,nodo_inicial,camino)
    return 0;
}

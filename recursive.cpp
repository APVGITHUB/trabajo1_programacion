// Implementacion de un algoritmo recursivo para la resolucion de un grafo
// Autor: Jaime de Castro y Peñaranda 14708
#define INF 1000000000


extern int m_matrix[DIM][DIM];

class node{
	private:
	 int length=-1;
	 int father=-1;
	public:
	 int number;
	 int get_father(){
	 	return father;
	 }
	 int get_length();
	 void set_length(int l){/*define el nodo de inicio*/
	  	length=l;
	 }
	 void set_father(int f){
                father=f;
         }
};

node node[n];

void find_shortest(int k){/*k es el nodo que se esta evaluando*/
  int curr_length=INF;
  int node_length;
  int distance;
  int t=0;
  for (t=0; t<DIM; t++){
	distance=m_matrix[k][t];
	if(distance&&(k!=t)){
		node_length=node[t].get_length();
		if((node_length+distance)<curr_length){
			curr_length=node_length+distance;
		}
	}
  }
  node[k].set_length(curr_length);
//  if ((t<=DIM-1)&&(t>=0))
  node[k].set_father(t);
}

int node::get_length(){
 	if(length==-1){/*esto es para no tener que recalcular la distancia en cada llamada al nodo*/
		length=8000;
		find_shortest(number);
	}
 return length;
}

void calcular_rec(){

	for(int r=0;r<DIM;r++){
	node[r].number=r;
	}
	node[0].set_length(0);/*Se inicializa el primer nodo*/

	find_shortest(DIM-1); /* Primera llamada a la funcion recursiva*/

	i=0;
	int k=DIM-1;
	cout << "Path: ";
	do { /* Aqui se obtiene el vector que indica el camino correcto */
		path[i]=k;
		cout << k << " ";
		k = node[k].get_father();
		i++;
	} while (k >= 0);
	cout << "Length: " << node[DIM-1].get_length();
}



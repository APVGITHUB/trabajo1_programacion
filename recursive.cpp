#include "matrix.cpp"
#define INF 1000000000


extern int m_matrix[][];/* m_matrix[i][j] es la distancia de i a j */
extern int path[];
const int n=sizeof(m_matrix)/sizeof(m_matrix[0]);
int i,temp=-1;

class node{
	private:
	 int length=-1;
	 int father=-1;
	public:
	 int number;
	 int get_length(){
	 	if(length!=-1){/*esto es para no tener que recalcular la distancia en cada llamada al nodo*/
		length=find_shortest(number);
		father=temp
		}
		return number;
	 }
	  int init(){/*define el nodo de inicio*/
	  	length=0;
	  }
};

node node[n];

void find_shortest(int k){/*k es el nodo que se esta evaluando*/
  int curr_length=INF;
  int node_length;
  int distance
  for (i=0; i<n; i++){
	if(distance=m_matrix[k][i]){ /*asumo que las posiciones de la diagonal estan vacias*/
		node_length=node[i].get_length();
		if(node_length+distance)<curr_length){
			curr_length=node_length+distance;
			temp=i;
		}
	}
}
void calcular_rec(){

	for(i=0;i<n;i++){
	node[i].number=i;
	}
	node[0].init;

	find_shortest(n); //calculo

	i=n;
	k=end;
	do { /* Aqui se obtiene el vector que indica el camino correcto */
		path[i]=k;
		k = node[k].father;
		i++;
	} while (k > 0);
}



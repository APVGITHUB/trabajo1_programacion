#define INF 1000000000


extern int m_matrix[][];
extern int path[];
const int n=sizeof(m_matrix)/sizeof(m_matrix[0]);
int i,temp=-1;

class node{
	private:
	 int length=-1;
	 int father=-1;
	public:
	 int number;
	 int get_father(){
	 	return father;
	 }
	 int get_length(){
	 	if(length!=-1){/*esto es para no tener que recalcular la distancia en cada llamada al nodo*/
		length=find_shortest(number);
		father=temp;
		}
		return number;
	 }
	 void init(){/*define el nodo de inicio*/
	  	length=0;
	  }
};

node node[n];

int find_shortest(int k){/*k es el nodo que se esta evaluando*/
  int curr_length=INF;
  int node_length;
  int distance;
  for (i=0; i<n; i++){
	if(distance=m_matrix[k][i]){ /*asumo que las posiciones de la diagonal estan vacias*/
		node_length=node[i].get_length();
		if((node_length+distance)<curr_length){
			curr_length=node_length+distance;
			temp=i;
		}
	}
  }
  return curr_lenght;
}
void calcular_rec(){

	for(i=0;i<n;i++){
	node[i].number=i;
	}
	node[0].init();

	int l=find_shortest(n); //calculo

	i=0;
	int k=n;
	do { /* Aqui se obtiene el vector que indica el camino correcto */
		path[i]=k;
		k = node[k].get_father();
		i++;
	} while (k > 0);
}



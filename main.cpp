#include <iostream>
#include "dijkstra.cpp"
#include <time.h>

using namespace std;
int main(){
	double time_taken=0;
	clock_t start,end;
	

	int ejemplo=0;
	cout<<"Elija un experimento: ";
	cin>>ejemplo;
	cout << endl;
	fill_matrix();
	print_matrix();
	start=clock();
	calcular_dij(0,9);
	end=clock();
	time_taken=end-start;	
	cout << time_taken << endl;
	return 0;
}

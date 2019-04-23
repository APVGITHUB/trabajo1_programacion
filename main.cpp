#include <iostream>
#include "dijkstra.cpp"
#include <time.h>
#include <chrono>
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
	auto start= chrono::steady_clock::now()
	calcular_dij(0,9);
	auto end= chrono::steady_clock::now()
	double elapsed_time = double(chrono::duration_cast<chrono::nanoseconds>(end-start).count());
	cout << elapsed_time << "nanoseconds " << endl;
	return 0;
}

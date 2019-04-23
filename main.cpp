#include <iostream>
#define DIM 256
#define x 20    /* cuanto más grande, más dispersa es la matriz */
#include "matrix.cpp"
#include "dijkstra.cpp"
#include "recursive.cpp"
#include <time.h>
#include <chrono>

using namespace std;

int main(){
        fill_matrix();
        print_matrix();
//test 1
        auto start= chrono::steady_clock::now();
        calcular_dij(0,DIM-1);
        auto end= chrono::steady_clock::now();
        double elapsed_time = double(chrono::duration_cast<chrono::nanoseconds>(end-start).count());
        cout << elapsed_time << " " << "nanoseconds in dijkstra test" << endl;

//test 2
        auto start2= chrono::steady_clock::now();
        calcular_rec();
        auto end2= chrono::steady_clock::now();
        double elapsed_time2 = double(chrono::duration_cast<chrono::nanoseconds>(end2-start2).count());
        cout << endl << elapsed_time2 << " " << "nanoseconds in recursive test" << endl;

        return 0;
}


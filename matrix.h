#include <stdio.h>
#include <stdlib.h>


class Matrix {
    public:
        Matrix(int);
        ~Matrix();
		 void fill_matrix();
		 void print_matrix();
		 void set_dimension(int);
		 
	private:
        int **m_matrix;
		int exp;
		int N;
};

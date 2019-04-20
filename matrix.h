#include <stdio.h>
#include <stdlib.h>


class Matrix {
    public:
        Matrix();
        ~Matrix();
		 void fill_matrix();
		 void copy_matrix(int);
		 void print_matrix();
		 void set_dimension(int);
		 
	private:
        int **m_matrix;
		int exp;
		int N;
};

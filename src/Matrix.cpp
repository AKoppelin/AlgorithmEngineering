#include "Matrix.h"


Matrix::Matrix(unsigned int numrows, unsigned int numcols)
{
	rows = numrows;
	cols = numcols;
	// fill matrix with zeros
	m = std::vector<std::vector<int> >(rows, std::vector<int>(cols, 0));
}

Matrix::Matrix(unsigned int numrows, unsigned int numcols, std::vector<std::vector<int> > data) {
	Matrix(numrows, numcols);
	// fill matrix with committed data
	m = data;
}

Matrix::~Matrix()
{
}

// Getter methods
unsigned int getRows() {
	return rows;
}
unsigned int getCols() { 
	return cols; 
}
unsigned int getElementAt(unsigned int row, unsigned int col) { 
	return m[row][col]; 
}

Matrix getIdentityMatrix(unsigned int numrows, unsigned int numcols) {
	Matrix identM = Matrix(numrows, numcols);

	unsigned int smalerDim = 0;
	if (numrows > numcols) smalerDim = numcols;
	else smalerDim = numrows;

	for (unsigned int i = 0; i < smalerDim; i++){
		identM.m[i][i] = 1;
	}

	return identM;
}
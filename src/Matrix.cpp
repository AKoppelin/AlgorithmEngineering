#include "Matrix.h"

Matrix::Matrix(unsigned int numrows, unsigned int numcols)
{
	this->rows = numrows;
	cols = numcols;
	// fill matrix with zeros
	m = std::vector<std::vector<int> >(rows, std::vector<int>(cols, 0));
}

Matrix::Matrix(unsigned int numrows, unsigned int numcols, std::vector<std::vector<int> > data) {
	//Matrix(numrows, numcols);
	rows = numrows;
	cols = numcols;
	// fill matrix with committed data
	m = data;
}

Matrix::~Matrix()
{
}

// Getter methods
unsigned int Matrix::getRows() {
	return rows;
}
unsigned int Matrix::getCols() { 
	return cols; 
}
unsigned int Matrix::getElementAt(unsigned int row, unsigned int col) { 
	return m[row][col]; 
}

Matrix Matrix::getIdentityMatrix(unsigned int numrows, unsigned int numcols) {
	Matrix identM = Matrix(numrows, numcols);

	unsigned int smalerDim = 0;
	if (numrows > numcols) smalerDim = numcols;
	else smalerDim = numrows;

	for (unsigned int i = 0; i < smalerDim; i++){
		identM.m[i][i] = 1;
	}

	return identM;
}

Matrix Matrix::exponentiationBySquaring(unsigned int n) {
	Matrix returnM = Matrix(rows, cols, m);
	if (n == 0) return getIdentityMatrix(rows, cols);
	if (n == 1) return returnM;
	if (n % 2 == 0) {
		returnM = returnM.multiply(returnM);
		returnM = returnM.exponentiationBySquaring(n / 2);
	}else{
		returnM = returnM.multiply(exponentiationBySquaring(n - 1));
	}
	return returnM;
}

Matrix Matrix::exponentiationBySquaringIterative(unsigned int n) {
	Matrix returnM = Matrix(rows, cols, m);
	if (n == 1) return returnM;
	Matrix oneM = Matrix(cols, rows, m);
	Matrix oddM = getIdentityMatrix(rows, cols);
	while (n > 1) {
		/*if (n == 1) {
			returnM = returnM.multiply(returnM);
			n--;
		}*/
		if (n % 2 == 0) {
			returnM = returnM.multiply(returnM);
			n = n / 2;
		}else{
			oddM = oddM.multiply(returnM);
			returnM = returnM.multiply(returnM);
			n = --n / 2;
		}
	}
	returnM = returnM.multiply(oddM);
	return returnM;
}

Matrix Matrix::multiply(Matrix rhs) {
	Matrix returnM = Matrix(rows, rhs.cols);

	for (unsigned int i = 0; i < rows; i++) {
		for (unsigned int j = 0; j < rhs.cols; j++) {
			for (unsigned int k = 0; k < cols; k++) {
				returnM.m[i][j] += m[i][k] * rhs.m[k][j];
			}
		}
	}
	return returnM;
}

bool Matrix::operator==(Matrix& rhs)
{
	 if (this->getRows() != rhs.getRows() || this->getCols() != rhs.getCols()) return false;
	 for (unsigned int i = 0; i < this->getRows(); i++) {
		 for (unsigned int j = 0; j < this->getCols(); j++) {
			 if (this->getElementAt(i, j) != rhs.getElementAt(i, j)) return false;
		 }
	 }
	 return true;
}

// Relational operators

bool Matrix::operator!=(Matrix& rhs) {
	return !((*this) == rhs);
}
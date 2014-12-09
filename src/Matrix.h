#ifndef _MATRIX_H
#define _MATRIX_H

#include <vector>
#include <stdint.h>

class Matrix {
private:
	std::vector<std::vector<uint64_t> > m;
	unsigned int rows;
	unsigned int cols;

public:
	/// Contructors
	///	-	for an empty matrix
	Matrix(unsigned int numrows, unsigned int numcols);
	///	-	for a matrix with data
	Matrix(unsigned int numrows, unsigned int numcols, std::vector<std::vector<uint64_t> > data);
	
	/// Destructor
	~Matrix();

	/// Getter methods
	unsigned int getRows();
	unsigned int getCols();
	uint64_t getElementAt(unsigned int row, unsigned int col);
	Matrix getIdentityMatrix(unsigned int numrows, unsigned int numcols);

	/// Methods for matrix operations
	Matrix exponentiationBySquaring(unsigned int n);
	Matrix exponentiationBySquaringIterative(unsigned int n);
	Matrix multiply(Matrix rhs);

	/// Relational operators
	bool operator==(Matrix& rhs);
	bool operator!=(Matrix& rhs);
};
#endif


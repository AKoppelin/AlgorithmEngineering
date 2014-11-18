#include <vector>

class Matrix {
private:
	std::vector<std::vector<int> > m;
	unsigned int rows;
	unsigned int cols;

public:
	/// Contructors
	///	-	for an empty matrix
	Matrix(unsigned int numrows, unsigned int numcols);
	///	-	for a matrix with data
	Matrix(unsigned int numrows, unsigned int numcols, std::vector<std::vector<int> > data);
	
	/// Destructor
	~Matrix();

	/// Getter methods
	unsigned int getRows();
	unsigned int getCols();
	unsigned int getElementAt(unsigned int row, unsigned int col);
	Matrix getIdentityMatrix(unsigned int numrows, unsigned int numcols);

	/// Methods for matrix operations
	Matrix exponentiationBySquaring(unsigned int n);
	Matrix multiply(Matrix rhs);
};

// Relational operators
bool operator==(Matrix& lhs, Matrix& rhs) {
	if (lhs.getRows() != rhs.getRows() || lhs.getCols() != rhs.getCols()) return false;
	for (unsigned int i = 0; i < lhs.getRows(); i++) {
		for (unsigned int j = 0; j < lhs.getCols(); j++) {
			if (lhs.getElementAt(i, j) != rhs.getElementAt(i, j)) return false;
		}
	}
	return true;
}

bool operator!=(Matrix& lhs, Matrix& rhs) {
	return !(lhs == rhs);
}
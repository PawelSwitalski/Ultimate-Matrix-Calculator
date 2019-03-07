#ifndef _Definicja_Klas_h_
#define _Definicja_Klas_h_

#include <vector>

class Regular_Matrix{
	private:
		unsigned int Size_x;
		unsigned int Size_y;
		std::vector<double>Matrix;
		int Det;
	public:
		Regular_Matrix(Size_x, Size_y);
		void create_matrix(unsigned Size_x,unsigned Size_y) const;
		void add_matrix() const;
		void subtract_matrix() const;
		void multiply_matrix() const;
		void calculate_det(int Det);
};




#endif 


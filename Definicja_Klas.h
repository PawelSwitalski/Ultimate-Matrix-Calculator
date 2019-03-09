#ifndef _Definicja_Klas_h_
#define _Definicja_Klas_h_

#include <vector>
#include <iostream>

//template <typename T> 

class Regular_Matrix{

	std::vector<std::vector<double>>VEC;

	public:
		Regular_Matrix(){}
		void Loop_Through(const std::vector<std::vector<double>> &vec)const;
		void Initialize_Matrix();
		~Regular_Matrix(){}
		

};

void Regular_Matrix::Initialize_Matrix(){

int Rows = 0;
int Columns = 0;
double Matrix_V = 0;
std::cout << "Rows -> ";
std::cin >> Rows;
std::cout << std::endl;
std::cout << "Columns -> ";
std::cin >> Columns;
std::cout << std::endl;

	for(int i=0; i<Rows; ++i){
		std::vector<double>temp;
			for(int j=0; j<Columns; ++j){
				std::cout << "Value of M -> ";
				std::cin >> Matrix_V;
				temp.push_back(Matrix_V);
			}
			VEC.push_back(temp);
}
}

int main(){

	Regular_Matrix Matrix_1;
	Matrix_1.Initialize_Matrix();

	return 0;
}

#endif 
//

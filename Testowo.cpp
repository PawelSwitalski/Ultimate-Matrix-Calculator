#ifndef _Definicja_Klas_h_
#define _Definicja_Klas_h_

#include <vector>
#include <iostream>

//template <typename T> 

class Regular_Matrix{

	std::vector<std::vector<double>>VEC;

	public:
		Regular_Matrix(){}
		void Display()const;
		void Initialize_Matrix();
		~Regular_Matrix(){}
		

};

void Regular_Matrix::Initialize_Matrix(){

int Rows = 0;
int Columns = 0;
double Matrix_V = 0;
std::cout << "Rows -> ";
std::cin >> Rows;
std::cout << "Columns -> ";
std::cin >> Columns;
std::cout << std::endl;
 
	for(int i=0; i<Rows; ++i){
		std::vector<double>temp;
			for(int j=0; j<Columns; ++j){
				std::cout << "Value of M" <<"["<< i << "," << j << "]" << " -> ";
				std::cin >> Matrix_V;
				temp.push_back(Matrix_V);
			}
			VEC.push_back(temp);
}
}

void Regular_Matrix::Display()const{
	for(int i = 0; i<VEC.size(); ++i){
		std::cout << "| ";  // Kosmetycznie, odpowiada za te paski przy wyswietlaniu
		for(int j=0; j<VEC[i].size(); ++j){
			std::cout << VEC[i][j] << " ";
		}
		std::cout << "|";   // Kosmetycznie, odpowiada za te paski przy wyswietlaniu
		std::cout << std::endl;
	}
}


int main(){

	Regular_Matrix Matrix_1;
	Matrix_1.Initialize_Matrix();
	Matrix_1.Display();

	return 0;
}

#endif 
//

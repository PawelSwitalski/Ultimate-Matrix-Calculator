#ifndef _Definicja_Klas_h_
#define _Definicja_Klas_h_

#include <vector>
#include <iostream>

//template <typename T> 
//g
class Regular_Matrix{

	std::vector<std::vector<double>>VEC;
	unsigned int rows;
	unsigned int columns;	

	public:
		Regular_Matrix(unsigned _rows, unsigned _columns) : rows(_rows), columns(_columns){}
		//int Menu(const std::string & message);
		void Display()const;
		void Initialize_Matrix(Regular_Matrix& Matrix_1);
		~Regular_Matrix(){}
		friend std::istream &operator>> (std::istream &input, Regular_Matrix &I){
			std::cout << "Rows -> ";
			input >> I.rows;
			std::cout << "Columns -> ";
			input >> I.columns;
			return input;
		}

};

void Regular_Matrix::Initialize_Matrix(Regular_Matrix& Matrix_1){

double Matrix_V = 0;
std::cin >> Matrix_1;

std::cout << "\n"; 
	for(int i=0; i<this->rows; ++i){
		std::vector<double>temp;
			for(int j=0; j<this->columns; ++j){
				std::cout << "Value of M" <<"["<< i+1 << "," << j+1 << "]" << " -> ";
				std::cin >> Matrix_V;
				temp.push_back(Matrix_V);
			}
			VEC.push_back(temp);
}
}

void Regular_Matrix::Display()const{
	std::cout << "\n";
	for(int i = 0; i<VEC.size(); ++i){
		std::cout << "| ";  // Kosmetycznie, odpowiada za te paski przy wyswietlaniu
		for(int j=0; j<VEC[i].size(); ++j){
			std::cout << VEC[i][j] << " ";
		}
		std::cout << "|";   // Kosmetycznie, odpowiada za te paski przy wyswietlaniu
		std::cout << "\n";
		}
	std::cout << "\n";
}

//int Regular_Matrix::Menu(const std::string & message){


	
//}

int main(){

	Regular_Matrix Matrix_1(0,0);
	

	std::cout << "Matrix nr 1 has been created.\n";
	//int choice = Matrix1.Menu(" Menu \n\n");
	
	Matrix_1.Initialize_Matrix(Matrix_1);
	Matrix_1.Display();



	return 0;
}

#endif 
//

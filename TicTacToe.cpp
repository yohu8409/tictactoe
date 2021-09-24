#include <iostream>
#include <string>

void DisplayBoard(std::string matrix[3][3]){
  for(int a = 0; a < 3; i++){
    for(int b = 0; b < 3; j++){
      std::cout<<matrix[a][b]<< " ";
    }
    std::cout<<std::endl;
  }
}

void CreateBoard(std::string matrix[3][3]){
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      matrix[i][j] = "_";
    }
  }
}

void DisplayBoard(string matrix[3][3]){
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      std::cout << matrix[i][j] << " ";
    }
    std::cout << std::endl;
  }
}

int main(){
  std::string matrix[3][3];
  CreateBoard(matrix);
  DisplayBoard(matrix);
}

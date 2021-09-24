#include <iostream>
#include <string>


void CreateBoard(std::string matrix[3][3]){
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      matrix[i][j] = "_";
    }
  }
}

void DisplayBoard(std::string matrix[3][3]){
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      std::cout << matrix[i][j] << " ";
    }
    std::cout << std::endl;
  }
  std::cout<<std::endl;
}

void PlaceMarker(std::string matrix[3][3], int location[2], std::string marker){
  matrix[location[0]][location[1]] = marker;
}

int main(){
  std::string matrix[3][3];
  CreateBoard(matrix);
  DisplayBoard(matrix);
  int place[2] = {1,2};
  PlaceMarker(matrix, place, "O");
  DisplayBoard(matrix);
}

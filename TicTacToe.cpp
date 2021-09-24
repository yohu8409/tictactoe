#include <iostream>
#include <string>
using namespace std;

void GetPlayerChoice(int arr[2]){
  std::cout << "Select the location (1 to 3 in row): " << std::endl;
  std::string s1;
  std::cin >> s1;
  std::cout << "Select the location (1 to 3 in col): " << std::endl;
  std::string s2;
  std::cin >> s2;
  
  int num1;
  int num2;
  if (s1 == "1"){
    num1 = 0;
  }
  else if(s1 == "2"){
    num1 = 1;
  }
  else if (s1 == "3"){
    num1 = 2;
  }
  if (s2 == "1"){
    num2 = 0;
  }
  else if(s2 == "2"){
    num2 = 1;
  }
  else if (s2 == "3"){
    num2 = 2;
  }
  arr[0] = num1;
  arr[1] = num2;
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
  int arr[2];
  std::string matrix[3][3];
  DisplayBoard(matrix);
}

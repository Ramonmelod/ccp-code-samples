#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

  const char* path = "/home/ramon/Projects/cpp-code-samples/reading-a-file/ramon.txt";
  ifstream file(path);
  string line; 

  if(!file.is_open()){
   cerr<< "erro ao abrir o arquivo: " << path <<endl;
   return 1;
  }

 while(std::getline(file, line)){

   cout<<line<<"\n";
     }
     
  return 0;
}

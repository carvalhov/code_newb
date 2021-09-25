#include<iostream>
using namespace std;

int main (){
int value1, value2; // Dois numeros inteiros
cin >> value1 >> value2; //Define os números inteiros 

if (value1 < value2){ // Se o valor 1 é menor que valor 2, segue para a reptição com valor1

while (value1 <= value2){
  cout << value1 << " "; 
  value1 = value1+1;
}
}else{ //Caso contrário ao anterior, logo, valor2 < valor1, segue com a repetição com base no valor 2

  while (value2 <= value1){
  cout << value2 << " "; 
  value2 = value2+1;
  
} //quando o código é executado será como esperado, onde temos uma sequência do menor para o maior valor
}
}

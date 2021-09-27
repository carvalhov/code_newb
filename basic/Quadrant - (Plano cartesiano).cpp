#include <iostream>
using namespace std;
int main()
{
int x, y;
cin >> x; //axys x (horizon)
cin >> y; // axys y (vertical)
/*Sabendo que os quadrantes estão dividos em quatro
podemos dividir em dois lados dividos pela horizontal e 
dois pela vertical, onde para vertical teremos y > 0 acima e y < 0 abaixo, para x > 0, a direita horizontal e para x < 0, a esquerda horizontal. 
*/
if (x > 0) {
  if(y > 0){
    cout << "Q1";   
  }
  if(y < 0){
    cout << "Q4";
  }
}
if (x < 0) {
  if(y > 0){
    cout << "Q2";   
  }
  if(y < 0){
    cout << "Q3";
  }
}
if (x == 0 or y ==0){
  cout << "eixos";
}
}

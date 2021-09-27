#include <iostream>

using namespace std;

int main() {
  int aposta[6], real[6];

  for (int i = 0; i < 6; i++) cin >> aposta[i];
  for (int j = 0; j < 6; j++) cin >> real[j];

  int cont = 0;

  for (int i = 0; i < 6; i++)
    for (int j = 0; j < 6; j++)
      if (aposta[i] == real[j])
	cont++;
    cout << "\n\n\n";
       if (cont < 3) {
           cout << "azar";
        }
       if (cont == 3){
           cout << "terno";
       }
        if (cont == 4){
           cout << "quadra";
       }
        if (cont == 5){
           cout << "quina";
       }
       if (cont == 6){
           cout << "sena";
       }
  return 0;
}

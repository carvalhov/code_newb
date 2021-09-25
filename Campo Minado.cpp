#include <iostream>
using namespace std;

int main() {
    
int n;
cin >> n;
int sequencia[50];
for (int i = 0; i < n; i++) {
    cin >> sequencia[i];
}
for (int i = 0; i < n; i++) {
  int cont = 0;
    cont = cont + sequencia[i];
    if(i > 0){
    cont = cont + sequencia[i-1];
    }
    if (i < n-1){
      cont = cont + sequencia [i+1] ;
    }
cout << "\n" << cont;
}
return 0;
}

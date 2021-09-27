#include <iostream> 
using namespace std;

int main () {
    int cont = 0;
    int N, i;
    string gab, alt;
    cin >> N;
    cin >> gab;
    cin >>  alt;
    for (int i = 0; i < N; i++) {
        if (alt[i] == gab[i]){
            cont = cont + 1; 
        }
    }
    cout << cont << endl;
  return 0;
}

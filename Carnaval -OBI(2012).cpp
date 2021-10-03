//https://neps.academy/br/exercise/321

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  const int SIZE = 5;
  float n[SIZE], soma = 0;
  float * max, * min;
  cout.precision(1);
  cout.setf(ios::fixed);
    for (int i=0; i < SIZE;i++){
      cin >> n[i];
    }
    max = max_element(begin(n), end(n));
    min = min_element(begin(n), end(n));
      cout << *max << endl;
      cout << *min << endl;
      for(int j=0; j<SIZE; j++){
        soma+=n[j];
      }
      cout << soma - (*max + *min) << endl;
}

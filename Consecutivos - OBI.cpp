//Esse código não é de minha autoria

#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

#define MAX 10005

int main(){
	int N, c[MAX];
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> c[i];
	int cont = 0;
	for (int i = 0; i < N; i++){
		int j = i;
		for (; j < N && c[i] == c[j]; j++);
		cont = max(cont, j-i);
	}
	cout << cont << endl;
	return 0;
}

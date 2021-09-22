#include <iostream>
#include <string>

using namespace std;
int main()

{
  string S;
  int n, cont = 0;
  cin >> n;
    for (int i = 0; i < n+1; i++)
    {
      getline(cin, S); 
    }
    
    for (int j = 0; j < n+1; j++)
    {
        if(S[j] == '{')
        {
          cont = cont+1;
        }
        if(S[j] == '}')
        {
          cont = cont-1;
        }
    }
    /*
    Código lê apenas a última linha sem espaços
    */
    cout << cont << endl;
    if(cont == 0){    cout << "S";
    }else{            cout << "N";}
}


//Necessário fazer correções 

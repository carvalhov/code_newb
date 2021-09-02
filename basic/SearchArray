#include <iostream>
using namespace std;

void Search(int valor[], int S){ 
// Função de procura, vai ter o array valor e o número inteiro S

  int cont=0; 
  // O valor cont é um dos mais importantes da função, já que ele quem vai definir os resultados 
  int n = 10; 
  // Esse é o SIZE do Array 
	  for (int i = 0; i < n; i++)
    { 
    // o For para fazer a leitura de todos os valores do array
    
    if(valor[i] == S){ 
    
    /*
    Na função, essa é a parte mais importante, veja que a o objetivo é saber se há ou não há um determinado valor no array
    para isso, iguala-se os valores do array que são repetidos pelo for, ao valor S, que é o valor procurado, se houver algum 
    valor no array que é igual a S, vai ter Cont ++ ou Cont + 1, assim, sabe-se que os valores de Cont = 0, vão indicar a 
    inexistência do valor buscado no array, mas se cont for maior que 0, o valor existe no array. 
    */
      cont ++;
    }
    }
if (cont > 0 ){ 
  cout << "SIM";
} else{
  cout << "NAO";
}
//Outro pergunta poderia ser quantos valores S tem no array, assim, seria o valor "cont" como resposta.
}

int main()
{
  const int SIZE = 10; //Valor fixo do array 
    int numbers[SIZE], x;
    for (int i = 0; i < SIZE; i++)
    {
    cin>>numbers[i];
    }
    cin>>x;
    Search(numbers, x);
return 0;
}

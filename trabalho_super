#include <iostream> 
#include <fstream>
 
using namespace std;

struct REGprodutos{
 int codigo; /*1, 2, 3, 4 e 5*/
 char nome[10];
 float preco;
 int quantidade;
 char dataf[10];
 char datav[10];
};
 
struct REGfuncionarios{
 char nome [50];
 char cargo[30];
 int idade;
 char sexo;
 float salario;
 char registro[20]; /*CPF*/
};
 
struct REGcaixa{
 float caixadisp;
 float venda;
 float saida;
 float lucro;
};
 
float caixadisp = 15000;
float custos = 0;
float vendas = 0;

int cadastrar(); 

 
int pessoal();
 
float caixa();
 
int main (void)
{
 int op = 0;

 while(op != 3){
 cout << "\n\n              SUPERMIXER - SORTIDOS\n\n"  << endl;
 cout << "Sistema de gerenciamento  - 2020" << endl;
 cout << "1 - Configuração Estoque de produtos " << endl;
 cout << "2 - Cadastrar funcionários" << endl;
 cout << "3 - Consultar saldos do caixa" << endl;
 cout << "4 - Sair" << endl;
 cin >> op;
 system("clear");
 
     switch(op){
       case 1: 
       int qtproduto;
       qtproduto = cadastrar(); 
       break;
 
       case 2:
       {
       int pessoa;
       pessoa = pessoal();

       break;
     }
       case 3:
       {
       float L = caixa();
       cout << "\n\ncaixa disponível: " << caixadisp;
       cout << "\n\nlucro: " << L << endl;
       caixadisp = caixadisp + L;
       cout << "Caixa disponível atualizado: " << caixadisp << endl;

       break;
       }
       default:
       cout << "Obrigado por usar nossos serviços" << endl;
       break;
     }
 }
 system ("pause");
 return 0;
}
 
int cadastrar() {
  system("clear");
REGprodutos produtos;
int op = 0;
cout << "1 - cadastro de produtos" << endl;
cout << "2 - saida de produtos" << endl;
cout << "3 - conferir o estoque de produtos" << endl;
cin >> op;
 switch (op){
 case 1:
 {
 std::ofstream escrita;
 escrita.open("Meusarquivos\\downloads\\programação\\mercado.txt", ios:: app);
 if (escrita.is_open()){
 cout << "Digite o código: ";
 cin >> produtos.codigo;
 escrita << produtos.codigo <<" ";
 cout << "nome: ";
 cin >> produtos.nome;
 escrita << produtos.nome <<" ";
 cout << "quantidade: ";
 cin >> produtos.quantidade;
 escrita << produtos.quantidade <<" ";
 cout << "Preço: ";  
 cin >> produtos.preco; 
 escrita << produtos.preco << " ";
 cout << "Data de Fabricação: ";
 cin >> produtos.dataf;
 escrita << produtos.dataf << " ";
 cout << "Data de validade: "; 
 cin >> produtos.datav;
 escrita << produtos.datav << " \n";
 caixadisp = caixadisp - produtos.preco*produtos.quantidade;
 cout << "Despesas: " << produtos.preco*produtos.quantidade << endl;
 cout << "caixa disponível: " << caixadisp;
 custos = produtos.preco*produtos.quantidade;

 }  else {
   cout << "Erro ao abrir" << endl;
 }
 escrita.close();
 break;
 }
 case 2:
 {
 ifstream leitura;
 leitura.open("Meusarquivos\\downloads\\programação\\mercado.txt");
 if (leitura.is_open()){
 cout << "Digite o codigo do produto: "; cin >> produtos.codigo;
 cout << produtos.nome; 
 cout << "Digite a quantidade de saída (-): "; cin >> produtos.quantidade;
 cout << "Preço: ";  
 cin >> produtos.preco; 
 cout << "Data de Fabricação: "; cin >> produtos.dataf;
 cout << "Data de validade: "; cin >> produtos.datav;
 caixadisp = caixadisp + (produtos.preco*produtos.quantidade);
 cout <<"Receita: " << produtos.preco*produtos.quantidade << endl;
 cout <<"Caixa disponível: " << caixadisp << endl;
 vendas = produtos.preco*produtos.quantidade ;
 
 } else {
   cout << "Erro ao abrir" << endl;
 }
leitura.close();
 break;
 }
 case 3:
 ifstream leitura;
 leitura.open("Meusarquivos\\downloads\\programação\\mercado.txt");
 if (leitura.is_open()){
 cout << "\nDigite o codigo do produto: ";
 cin >> produtos.codigo;
 cout << "\nNome: " ;
 leitura.getline(produtos.nome, 10);
 cout << "\nQantidade: " << produtos.quantidade;
 leitura >> produtos.quantidade;
 cout << "\nData de Fabricação: "; 
 leitura.getline(produtos.dataf, 10);
 cout << "\nData de validade: ";
 leitura.getline(produtos.dataf, 10);
 }else {
   cout << "Erro ao abrir" << endl;
 }
 leitura.close();
 break;
  }
  return 0;
}


int pessoal() {
  system("clear");
  REGfuncionarios funcionarios;
  std::ofstream escrita;
 escrita.open("Meusarquivos\\downloads\\programação\\Gestaodepessoas.txt", ios:: app);
 if (escrita.is_open()){

  cout << "CADASTRAR FUNCIONARIOS: \n" << endl;
  cout << "Nome do funcionario: \n" ; cin >> funcionarios.nome;
  cin.getline(funcionarios.nome, 50);
  escrita << funcionarios.nome << " ";
  cout << "Cargo: " << endl; cin >> funcionarios.cargo;
  cin.getline(funcionarios.cargo, 30);
  escrita << funcionarios.cargo << " "; 
  cout << "Idade: \n" ; cin >> funcionarios.idade;
  escrita << funcionarios.idade << " "; 
  cout << "Qual o gênero(M OU F): " << endl;
  cin >> funcionarios.sexo;
  escrita << funcionarios.sexo << " " ;
  cout << "Defina o salario: \n" ; cin >>  funcionarios.salario;
  escrita << funcionarios.salario << " ";
  cout << "Número do cadatro pessoal: " << endl;
  cin >> funcionarios.registro;
  escrita << funcionarios.registro << " \n";
  
  } else {
  cout << "Erro ao abrir" << endl;
  }
  escrita.close();
  return 0;
}

float caixa()
{
    float L;
    REGcaixa caixa;
    cout << "Caixa disponível: " << caixadisp << endl;
    cout << " Outras Receitas: " << endl; cin >> caixa.venda;
    cout << "Outras Despesas: " << endl; cin >> caixa.saida;
    caixa.lucro =  caixa.venda - caixa.saida;
    caixa.venda = vendas;
    caixa.saida = custos;
    L = caixa.lucro;
    cout << "Lucro Financeiro = "<< caixa.lucro << endl; 
    caixadisp = caixadisp + L;
    /*Caso seja negativo é prejuízo*/
    return L;
    }

/**
* @file main.cpp
* @author Vinícius Ribeiro Bulcão
* @brief criação de um programa no qual imprime os números ordenados e não repetidos
* @since 27/05/2018
* @date 28/05/2018
*/
#include <iostream>
/** @brief chamada da STL set para a criação de um vetor no qual não permite repetições */
#include <set>
/** @brief a STL algorithm é utilizada para a introdução de funções genéricas no programa */
#include <algorithm>


using std::binary_search;
using std:: max_element;
using std::set;
using namespace std;

/** @brief Template TContainer print_elements criando const TContainer& collection recebendo o vetor, const char* label recebendo um oustream, cont char recebendo o que irá separar os parâmetros */
template<typename TContainer>void print_elements(const TContainer& collection, const char* label="", const char separator=' ')
{
/**
	@brief criação de dois parâmetros int 
	@param i criado para ajudar no laço para implementação do num 
	@param aux criado a atribuição do número do vetor
*/
	int qtd, temp;
/**
	@brief criação de um set numeros do tipo inteiro
*/
set<int> numeros;
cout << "Quantos números deseja implementar: " << endl;
cin >> qtd;
cout << "Digite os números: " << endl;
/** @brief inserindo com numeros.insert(temp) os elementos em set */
while(qtd > 0){
	cin >> temp;
	numeros.insert(temp);
	qtd--;
}
/** @brief criação de um iterator set para inteiros co vetor */
set<int>::iterator it;
cout << "Set: "; 
/** @brief criação de um laço indo de it=numeros.begin() ao it!=numeros.end(), sempre mudando a para onde it aponta com it++*/
for ( it=numeros.begin() ; it != numeros.end(); it++ )
		cout << *it << " ";
	cout << endl;
	cout << label;
/** @brief criação de um laço indo de it=numeros.begin() ao it!=numeros.end(), sempre mudando a para onde it aponta com it++*/
for ( it=numeros.begin() ; it != numeros.end(); it++ ){
		cout << *it << " ";
		cin.ignore(0,';');
		
		cout << separator << " ";
	}
	cout << endl;
}



int main(int argc, char const *argv[])
{
/**
	@brief criação de um set numeros com seus elementos inteiros
*/
	set<int> numeros;

/**
	@brief chamada do template print_elements, no qual recebe os parâmetros numeros, o ostream CSV Set e a ';' como separador
*/
	print_elements(numeros, "CSV Set: ", ';');
	return 0;
}
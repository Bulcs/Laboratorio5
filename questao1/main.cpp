/**
* @file main.cpp
* @author Vinícius Ribeiro Bulcão
* @brief criaçao de um programa para imprimir o número seguinte mais próximo da média
* @since 27/05/2018
* @date 28/05/2018
*/
#include <iostream>
using namespace std;
/** 
	@brief Inclusão da Standart Library Vector
 */
#include <vector>
using std::vector;

/** @brief Template InputIterator closest2mean criando um InputIterator first e InputIterator last */
template<typename InputInterator> InputInterator closest2mean (InputInterator first, InputInterator last){
/** @brief parâmetro float */
/** @param media que representa a média dos valores inseridos no vetor v */
	float media=0;
/** @brief criação do vetor com o iterator i apontando pros parâmetros inteiros */
	vector<int>::iterator i;
/** @brief criação de um laço indo de i=first ao i!=last, sempre acrescentando 1 em i */
	for(i = first;i!=last;++i){
/** @brief soma do numero contido naquela memória apontada por i a média */
		media +=(*i);
	}
	cout << endl;
/** @brief dividindo o parâmetro média por 6 */
	media/=6;
/** @brief criação de uma precisão de um número após a vírgula no float */
	cout.precision(2);
	cout << "Média: " << media << endl;
/** @brief criação de um laço indo de i=first ao i!=last, sempre acrescentando 1 em i */
	for(i = first;i!=last;++i){
/** @brief criação de uma condicional para a atribuição  */
		if(media < *i){
			cout << "Número seguinte a média é: " << *i << endl;
			exit(0);
		}
	}
}

int main(){
/**  
	@brief criação de dois parâmetros int 
	@param i criado para ajudar no laço para implementação do num 
	@param aux criado a atribuição do número do vetor
*/
	int i,aux;
/**
	@brief criação de um vetor v com os parâmetros do vetor do tipo inteiro
*/
	vector<int> v;
	
	cout << "Digite os 6 números do vetor: " << endl;
/**
	@brief criação de um laço
	@details laço indo de i=0 à i<6, para que o usuário digite os números para dar push_back(aux) no vetor v
*/
	for(i = 0; i< 6;i++){
	cin >> aux;
	v.push_back(aux);
	}
/**
	@brief chamada do template closest2mean, no qual recebe os parâmetros v.begin() e v.end()
*/
	closest2mean(v.begin(),v.end());

	
	return 0;
}
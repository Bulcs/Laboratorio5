/**
* @file main.cpp
* @author Vinícius Ribeiro Bulcão
* @brief criação de um programa em que imprime todos os números primos entre 1 e o número digitado
* @since 27/05/2018
* @date 28/05/2018
*/

#include <iostream>
/** @brief a STL algorithm é utilizada para a introdução de funções genéricas no programa */
#include <algorithm>
/** @brief Inclusão da Standart Library Vector */
#include <vector>

using namespace std;
using std::vector;


/** @brief criação do template typename Primos print_primos */
template<typename Primos> void print_primos(Primos max_num)
{
/**
	@brief criação de cinco parâmetros int 
	@param temp vai estar recebendo o número máximo 
	@param num que vai fazer a contagem de 1 ao temp
	@param i um parâmetro de controle
	@param contador_resto vai controlar a quantidade de restos
	@param resto é simplesmente o resto da divisão
*/
	int temp,num,i,contador_resto=0,resto=0;
	cout << "Digite o número máximo: " << endl;
	cin >> temp;
/** @brief criação de um vector v com elementos int */
	vector<int> v;
/** @brief criação de um laço indo de num=1 ao num<=temp, sempre somando 1 a num */
	for(num= 1; num<=temp;num++){
		contador_resto=0;
/**
 	@brief criação de uma condicional para num =1 
	@details dando push_back ao numero primo   
*/
		if(num == 1){
			cout << "Numeros primos [1-"<<temp<<"]: " << num << " ";
			v.push_back(num);
		}
/** 
	@brief criação de um laço indo de i=1 ao i<=temp, sempre somando 1 a i 
	@details fazendo a contagem da quantidade de restos, se resto = 0 e a contador_resto > 2, o número não é primo
*/
		for(i =1;i<=temp;i++){
			resto=num%i;
			if(resto==0)
				contador_resto= contador_resto +1;
		}
/**
 	@brief criação de uma condicional para contador_resto =2 
	@details se contador_resto =2, o número é primo, logo após dando push_back ao numero primo   
*/
		if(contador_resto ==2)
			cout << num << " ";
			v.push_back(num);
	}
	cout << endl;
}

int main(int argc, char const *argv[])
{
/**
	@brief criação do vector v para elementos int
*/
	vector<int> v;
/**
	@brief chamada de print_numeros()
*/
	print_primos(0);

	return 0;
}
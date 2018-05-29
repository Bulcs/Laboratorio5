#include <iostream>
using std::cout;
using std::endl;
/** BACK INSERT É USADO PARA IMPLEMENTAÇÃO DE ALGUMA VARIÁVEL NO INÍCIO DA STL */
#include <iterator>
using std::back_inserter;
/** UMA CRIAÇÃO BÁSICA DE UM VETOR STL */
#include <vector>
using std::vector;
/** A STANDART LIBRARY ALGORITHM É UTILIZADA PARA A INTRODUÇÃO DE FUNÇÕES GENÉRICAS ADICIONAIS NO PROGRAMA */
#include <algorithm>
/** NESTE CASO, USOU-SE TRANSFORM, EM QUE SERVIU PARA A INSERÇÃO DE TODOS OS DADOS DE COL ELEVADOS AO QUADRADO EM COL2 */
using std::transform;

int square(int val){
	return val * val;
}

int main(int argc, char const *argv[])
{
	/** CRIAÇÃO DE DOIS VETORES DO TIPO INTEIRO */
	vector<int> col;
	vector<int> col2;
	/** CRIAÇÃO DE UM LAÇO SÍMPLES PARA IMPLEMENTAÇÃO DE ELEMENTOS DE 1 A 9 NO VETOR COL */
	for(int i=1;i<=9;++i){
		/** PUSH_BACK() É UM MÉTODO PERTENCENTE A BIBLIOTECA VECTOR, EM QUE IMPLEMENTA O ELEMENTO DENTRO DO PARÊNTESE NO VETOR */
		col.push_back(i);
	}
	/** PEGA OS VALORES DO COMEÇO AO FIM DE COL, INSERE NA FUNÇÃO SQUARE E RETORNA O NÚMERO AO QUADRADO AO COMEÇO DE COL2 COM O BACK_INSERTER() */
	transform(col.begin(),col.end(),back_inserter(col2),square);

	/** FOI CRIADO UM ITERATOR(PONTEIRO) NO QUAL APONTA PARA O INÍCIO DO VETOR COL2 E VAI ATÉ O FIM DE COL2 SOMANDO MAIS 1 A CADA PASSO */
	for(vector<int>::iterator it=col2.begin();it !=col2.end();++it){
		cout << (*it) << " ";
	}
	cout << endl;
	return 0;
}
# exercicio-02-tabela-hash-André Guerra
## Topico: Hash
=================
## Submissão: 13/03/2019
=====================
## Algoritmo
* famoso no com ponteiro pro proximo da lista linkada
* primeiro e ultimo elemento da lista ligada
* estrutura contendo a lista, inclue um no inicial com que aponta para 
* * o primeiro e um no que aponta para o ultimo da lista ligada
* * No primeiro contem o ponteiro para o proximo
* declarar a estrutura lista e variaveis q serao usadas
* zera o primeiro e ultimo no
* recebe o vetor(estrutura contendo os elementos) de nos, o indice(posicao calculado pelo hash h(x)= x mod m) de nos, e o valor do novo no
* aloca espaco para que aux exista na memoria fora da funçao
* aux recebe o valor inserido pelo usuario
* faz que valor "prox" de aux seja vazio, ja que esta sendo adicionado ao final da lista
* caso a lista esteja vazia, sem um primeiro elemento, inicializa aux como o primeiro elemento da lista
* faz com que o ultimo elemento da lista, tenha o ponteiro interno apontando pra aux
* por fim adiciona aux no final da lista, como o novo ultimo elemento.
* recebe o primeiro elemento, que aponta pros outros e o indice("posicao na memoria de endereços base")
* imprime a posicao no endereco base e um "->"
* imprime o conteudo daquele endereço base, o valor do primeiro elemento caso exista
* imprime uma barra quando o elemento nao existe quando a posicao esta vazia
* formata|pula linha
* vetor com valor maximo possivel de casos teste 
* recebe a qtd de casos testes
* executa uma vez cada caso teste
* recebe a qtd de enderesso-base e a qtd de valores a ser inseridos na tabela
* esvazia a lista, caso haja algo nela anteriormente
* executa uma vez para cada valor a ser inserido na tabela
* pega o valor a ser inserido e guarda em uma var 'e'
* insere/cria um novo no com o valor armazenado em 'e'
* executa uma vez para cada enderesso-base na memoria
* chama a funcao pra o primeiro elemento no endereço-base de indice "i", e sua posicao na lista

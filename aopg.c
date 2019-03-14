#include <stdio.h>
#include <stdlib.h>

typedef struct node {

    //famoso no com ponteiro pro proximo da lista linkada
    int value;
    struct node* next;
} Node;

typedef struct {

    // estrutura contendo a lista, inclue um no inicial com que aponta para
    // o primeiro e um no que aponta para o ultimo da lista ligada
    // No primeiro contem o ponteiro para o proximo

    Node *first, *last;
} Linked; // endereço-base/base-adress(BA)

void init(Linked *list, int n) {

    for(int i = 0; i < n; i++) {
        list[i].first = NULL;
        list[i].last = NULL;
    }
}

void insert(Linked *list, int pos, int value) {

    Node *aux = (Node *)malloc(sizeof(Node));

    aux->value = value;
    aux->next = NULL;
    if (list[pos].first == NULL) {

        // printf("Iniciado na pos %d com valor %d\n", pos, value);
        list[pos].first = aux;

    } else {

        // printf("linkado ao endereco %d com valor %d\n", pos, value);
        list[pos].first->next = aux;

    }
    list[pos].last = aux; 
}

void show(Node *first, int pos) {

    Node *temp = first;
    printf("%d -> ", pos);
    // if (temp == NULL) printf (" Empty mem ");
    while (temp != NULL) // executa enquanto existir um proximo
    {
        printf("%d -> ", temp->value); // imprime o conteudo daquele endereço-base
        temp = temp->next;

    }
    printf("\\\n"); //imprime '\\ quando vazio e pula linha

}

int main()
{
    Linked list[100]; // declara a lista
    int k, n, nval, aux; // declara sem inicilizar as variaveis
    int *pk = &k, *pn = &n, *pnval = &nval, *paux =  &aux; // ponteiros para endereços das var

    scanf("%d", pn);

    for (int i = 0; i < n; i++) {

        scanf("%d %d", pk, pnval);
        init(list, k);

        for (int j = 0; j < nval; j++) { // insercao dos valores

            scanf("%d", paux);
            insert(list, aux% k, aux);
            if (list[aux%k].first == NULL) return 1; // trata falha de inicializaçao
            // caso a inserçao falhe termina o programa e rotorna status falhas

        }
        for (int j = 0; j < k; j++) { // para cada endereço-base executa uma vez
            
            show(list[j].first, j);
        }
        if (i + 1 > n) printf("\n");
    }



    return 0;
}

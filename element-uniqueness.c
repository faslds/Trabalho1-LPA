#include<stdio.h>
#include<stdlib.h> //para malloc

void bubble(int vet[], int n) //funcao para ordenar o vetor
{
	int a, j, i; 
	for(j=0; j<n-j; j++) //percorre o vetor 
	{
		for (i=0; i<n-j-1;i++) /*percorre o vetor e compara cada elemento com o do seu lado direito (vet[i+1]).
		Se o elemento da direita for menor, troca os dois de lugar*/
		{
			if (vet[i+1]<vet[i])
			{
			a=vet[i+1];
			vet[i+1]=vet[i];
			vet[i]=a; //feita a troca
			}
		}
	}
}

int eleunique(int vet[], int n) //funcao para checar quais elementos sao unicos, numa lista ordenada
{
	int i, a=0;
	printf("\nO(s) elemento(s) unico(s) eh(sao):");
	if (vet[0] != vet[1]) //checa se o primeiro eh unico (porque voce nao vai poder comparar com vet[-1])
	{
	printf("\n%d", vet[0]);
	a++; /* "a" eh usada para rastrear a existencia elementos unicos. Se nenhuma das trocas for feita,
	a nao sera incrementada e sera igual a 0, fazendo a mensagem "Nao exsite um elemento unico" ser impressa */
	}
	for (i=1; i<n-1; i++)
	{
		if (vet[i] != vet[i-1] && vet[i] != vet[i+1]) //checa se os elementos do meio do vetor sao unicos
		{
		printf("\n%d", vet[i]); //imprime os elementos unicos
		a++;
		}
	}
	if (vet[n-1] != vet[n-2] && n>1) //checa se o ultimo eh unico
	{
	printf("\n%d", vet[n-1]);
	a++;
	}
	if (a == 0)
	{
	printf("\nNao exsite um elemento unico");
	}
	return 0;
}

int main()
{
	int i, n=3, *vet; /*decara os inteiros necessarios e tambem um ponteiro *vet para inteiros,
	que sera apontado posteriormente para o enderaco alocado com o malloc */
	printf("Quantos numeros voce quer? "); //pergunta quantos numeros serao necessarios armazenar
	scanf("%d", &n);	
	while (n<1)
	{
		printf("Favor digitar um numero maior que 0.\n");//para que nao seja digitado um numero que de erro no programa
		scanf("%d", &n);
	}
	vet=(int *)malloc(n*sizeof(int)); //aloca dinamicamente somente a memoria necessaria
	printf("entre com seus numeros:\n");
	for (i=0; i<n; i++)
	{
		scanf("%d", &vet[i]); //armazena os numeros no vetor criado
	}
	bubble(vet, n); //ordena o vetor
	eleunique(vet, n); //chama a funcao que checa a existencia de numeros unicos
	free(vet); //libera a memoria alocada
}


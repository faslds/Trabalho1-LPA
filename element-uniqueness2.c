#include<stdio.h>
#include<stdlib.h> //para malloc

int eleunique(int vet[], int n) //fun��o para checar quais elemntos s�o �nicos
{
	int i, a=0;
	printf("\nO(s) elemento(s) unico(s) eh(sao):");
	if (vet[0] != vet[1]) //checa se o primeiro � unico (porque voce nao vai poder comparar com vet[-1]
	{
	printf("\n%d (posicao 0)", vet[0]);
	a++; //"a" � usada para rastrear a existencia elemntos unicos. Se nenhuma das trocas for feita, a nao sera incrementada e ser� igual a 0, fazendo a mensagem "Nao exsite um elemento unico" ser impressa 
	}
	if (vet[n-1] != vet[n-2]) //checa se o �ltimo � unico
	{
	printf("\n%d (posicao 1)", vet[n-1]);
	a++;
	}
	for (i=1; i<n-1; i++)
	{
		if (vet[i] != vet[i-1] && vet[i] != vet[i+1]) //checa se os elementos do meio do vetor s�o unicos
		{
		printf("\n%d (posicao %d)", vet[i], i); //imprime os elementos unicos
		a++;
		}
	}
	if (a == 0)
	{
	printf("\nNao exsite um elemento unico");
	}
	return 0;
}

void bubble(int vet[], int n) //fun��o para ordenar o vetor
{
	int a, j, i; 
	for(j=0; j<n-j; j++) //percorre o vetor 
	{
		for (i=0; i<n-j-1;i++) //percorre o vetor e compara cada elemento com o do seu lado direito (vet[i+1]). Se o elemento da direita for menor, troca os dois de lugar
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


int main()
{
	int i, n, *vet; //decara os inteiros necess�rios e tambem um ponteiro *vet para inteiros, que ser� apontado posteriormente para o endera�o alocado com o malloc
	printf("Quanto numeros voce quer? "); //pergunta quantos numeros serao necess�rios armazenar
	scanf("%d", &n);
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


#include<stdio.h>
#include<stdlib.h>

void bubble(int vet[], int n) //funcao para ordenar o vetor
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

/*closestpair(int vet[], int n) //funcao para encontrar os dois pares com a menor diferenca
{
	int a, b, c, i, j, menor;
	
	if (vet[0] > vet[1]) //os 3 "if's" sao usados para evitar que a variavel menor seja negativa. Eles sao usados abaixo pelo mesmo motivo
	{
		menor = vet[0] - vet[1];
	}
	if (vet[0] < vet[1])
	{
		menor = vet[1] - vet[0];
	}
	if (vet[0]==vet[1])
	{
		menor = 0; //eh feito esse preimeiro teste para ja inicializar esta variavel com algum valor, e depois ser possivel a comparacao.
	}
	

	for (i=0; i<n; i++)
	{
		for (j=i+1; j<n; j++) // 2 "fors" usados para percorrer e comparar os vetores
		{
			if (vet[i] > vet[j])
			{
				c = vet[i] - vet[j];
			}
			if (vet[i] < vet[j])
			{
				c = vet[j] - vet[i]; // testa se vet[i] é maior ou menor que vet [j] para que c nao seja negativo
			}
			if (vet[i]==vet[j])
			{
				c=0;
			}
			
			if (c<=menor)
			{
				menor = c; //se a nova diferença é menor que a anterior, a variável "menor" recebe o valor de c 
				a = i;
				b = j; //para poder identificar quais elementos depois
			//	printf("%d e %d, nas posicoes %d e %d respectivamente. Sua diferenca eh %d.\n", vet[a], vet[b], a, b, menor);
			}
		}
	}
	printf("%d e %d, nas posicoes %d e %d respectivamente. Sua diferenca eh %d.\n", vet[a], vet[b], a, b, menor);
}*/

closestpair(int vet[], int n)
{
	int i, posicao=0, dif, c;
	dif=vet[posicao + 1] - vet[posicao]; //dif eh inicializada com a diferenca entre os dois primeiros elementos.
	for (i=1; i<n-1; i++)
	{
		c=vet[i+1] - vet[i]; //a partir do elemnto na posicao 1, cada par eh comparado
		if (c < dif)
		{
			dif = c;//encontra diferencas menores que a dos dois pimeiros
			posicao = i;//armazena tambem a posicao dos numeros com a menor diferenca
		}
	}
	printf("%d e %d, nas posicoes %d e %d respectivamente. Sua diferenca eh %d.", vet[posicao], vet[posicao + 1], posicao, posicao +1, dif);
}

int main()
{
	int i, n, *vet;//declara o ponteiro que sera apontado para o endereco que malloc ira retornar
	printf("Quantos numeros serao entrados?\n");
	scanf("%d", &n);
	vet=(int*)malloc(n*sizeof(int));
	printf("Digite os numeros: ");
	for (i=0; i<n; i++)//esse for preenche o vetor
		scanf("%d", &vet[i]);
	bubble(vet, n); //ordena o vetor
	printf("\nOs dois elementos com a menor diferenca sao:\n");
	closestpair(vet, n);//chama a funcao que imprime os dois numeros com a menor diferenca
	free(vet);//libera a memoria alocada
}

#include<stdio.h>
#include<stdlib.h>
//#define T 5

closestpair(int vet[], int n) //funcao para encontrar os dois pares com a menor diferenca
{
	int a, b, c, i, j, menor;//, a, b;//, m=n;
	
	if (vet[0] > vet[1]) //os 3 "if's" sao usados para evitar que a variavel menor seja negativa. Eles sao usados abaixo pelo mesmo motiva
	{
		menor = vet[0] - vet[1];
	}
	if (vet[0] < vet[1])
	{
		menor = vet[1] - vet[0];
	}
	if (vet[0]==vet[1])
	{
		menor = 0; //é feito esse preimeiro teste para ja inicializar esta variavel com algum valor, e depois ser possivel a comparacao.
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
}

int main()
{
	int i, n, *vet;
	printf("Quantos numeros serao entrados?\n");
	scanf("%d", &n);
	vet=(int*)malloc(n*sizeof(int));
	printf("Digite os numeros: ");
	for (i=0; i<n; i++)
		scanf("%d", &vet[i]);
	printf("\nOs dois elementos com a menor diferenca sao:\n");
	closestpair(vet, n);
	free(vet);
}

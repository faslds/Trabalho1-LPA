#include<stdio.h>
#include<stdlib.h>
#include<math.h>

closestpair(int vet[], int n) //funcao para encontrar os dois pares com a menor diferenca
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
	printf("\nOs dois elementos com a menor diferenca sao:\n");
	closestpair(vet, n);//chama a funcao que imprime os dois numeros com a menor diferenca
	free(vet);//libera a memoria alocada
}

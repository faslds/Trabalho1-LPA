#include<stdio.h>
#include<stdlib.h>
#define N 10

freqcount(int vet[], int freq[], int n) //cria um vetor freq armazenando as frequencias dos numeros de vet
{
	int i, j, f;//, aux;
	for (i=0; i<n; i++)
	{
		f=1;
		//aux=vet[i];
		for (j=i+1; j<n; j++)
		{
			if (vet[j]==vet[i])
			{
				f++; //f sera o contador de frequencia
				freq[j] = -1; //marca as posicoes do vetor freq com -1 quando a posicao se repete, para que possa armazenar a frequencia de cada numero apenas uma vez. 
			}
			
		}
		freq[i]=f;
	}
}

freqscan(int vet[], int freq[], int n)//encontra o maior elemento de freq[] e depois o compara com o proprio vetor freq, para que se hajam numeros diferentes com uma mesma frequencia (e elas sejam maximas), esses numeors sejam encontrados e impressos
{
	int i, j, m=0;//m sera o valor comparado para achar o maior valor de freq[]
	for (i=0; i<n; i++)
	{
		if (freq[i]>m)
		{
			m=freq[i];
		}
	}
	for (i=0; i<n; i++)
	{
		if (freq[i] == m)
		{
			printf("\n%d, com frequencia %d", vet[i], m);
		}
	}
		
}

int main()
{
	int k, vet[N], freq[N];
	printf("Digite os numeros: ");
	for (k=0; k<N; k++)
	scanf("%d", &vet[k]);
	freqcount(vet, freq, N);
	printf("O(s) elemnto(s) com a maior frequencia eh(sao):");
	freqscan(vet, freq, N);
}

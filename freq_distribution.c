#include<stdio.h>
#include<stdlib.h> //para usar o malloc

freqcount(int vet[], int freq[], int n) //cria um vetor freq armazenando as frequencias dos numeros de vet (vetor onde sera gravado os numeros entrados)
{
	int i, j, f;//, aux;
	for (i=0; i<n; i++)
	{
		f=1; //f ja eh inicializado com 1 pois se o numero ja foi entrado, sua frequencia eh no minimo 1
		//aux=vet[i];
		for (j=i+1; j<n; j++)
		{
			if (vet[j]==vet[i])
			{
				f++; //f sera o contador de frequencia
				freq[j] = -1; /*marca as posicoes do vetor freq com -1 quando a posicao se repete, 
para que possa armazenar a frequencia de cada numero apenas uma vez, e depois poder acha-las mais facilmente */
			}
			
		}
		freq[i]=f;
	}
}

/*a funcao freqscan encontra o maior elemento de freq[] e depois o compara com o proprio vetor freq, 
para que se hajam numeros diferentes com uma mesma frequencia (e elas sejam maximas), 
esses numeros sejam encontrados e impressos */
freqscan(int vet[], int freq[], int n)
{
	int i, j, m=0;//m sera o valor comparado para achar o maior valor de freq[]
	for (i=0; i<n; i++)
	{
		if (freq[i]>m)
		{
			m=freq[i]; //primeiro acha o maior valor de freq
		}
	}
	for (i=0; i<n; i++) 
	{
		if (freq[i] == m)
		{
			printf("\n%d, com frequencia %d", vet[i], m);//depois compara com o prorpio vetor freq e acha os numeros de maior frequencia
		}
	}
		
}

int main()
{
	int n, k, *vet, *freq;//declara ponteiros que posteriormente serao apontados para os enderecos que a fucao malloc vai retornar
	printf("Quantos numeros serao entrados?");
	scanf("%d", &n);
	vet=(int*)malloc(n*sizeof(int));//chama malloc uma vez para o vetor vet e outra para o vetor freq
	freq=(int*)malloc(n*sizeof(int));//cria dois vetores diferentes do mesmo tamanho
	printf("Digite os numeros: ");
	for (k=0; k<n; k++) //preenche o vetor
	scanf("%d", &vet[k]);
	freqcount(vet, freq, n);
	printf("O(s) elemnto(s) com a maior frequencia eh(sao):");
	freqscan(vet, freq, n);
	free(vet);
	free(freq);//libera a memoria alocada
}

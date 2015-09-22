#include<stdio.h>
#include<math.h>
/*a ideia eh fazer uma matriz mat[n][2] que vai armazenar as coordenadas.
Depois, fazer analise dos angulos entre os pontos*/

startpoint( , int n)
{
	int x, y, c
	c= //valor de um dos y's que for entrar
	for (i=0; i<n; i++)
	{
		if (mat[1][i] < c)
		c=mat[1][i];
		d=mat[0][i];
	}
	for (i=0; i<n; i++)
	{
		if(mat[1][i]==c)
		{
			if(mat[0][i]>d)
			{
				d=mat[0][i];
			}
		}
	}
	
	//ponto extremo agora eh (d,c)
	
	
}

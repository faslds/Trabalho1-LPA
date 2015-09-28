# Trabalho1-LPA
Primeiro Trabalho - Disciplina linguagens de programação e aplicações

README, com instruções de como executar o programa junto com seu funcionamento (e.g ambiente de desenvolvimento, 
compilador usado, parâmetros de compilação, plataforma de compilação da versão binária, etc.). 


Este repósitório contém os exercícios do primeiro trabalho da disciplina SSC0300 - Linguagens de programação e aplicações.
Descrição dos exercícios e como o programa os resolve:

1- Closest Pairs: O usuário entra com um conjunto de n inteiros. O programa acha o par de números com a menor diferença 
entre eles, ordenando a lista (com o método bubble sort) e encontrando a diferença de cada elemento com seu anterior,
e depois compara cada uma destas diferenças para encontrar a menor, para que possa ser encontrado o par de números que se
encaixa na descrição. INSTRUÇÕES DE USO: Ao abrir o programa, será exibida a mensagem "Quantos números serão entrados?". 
O usuário deve digitar quantos números ele quer analisar e apertar a tecla "Enter". Enquanto um númeoro maior ou igual a 2 não for digitado, o 
programa irá pedir que o usuário entre novamente com a quantidade de números. Após isso, devem ser digitados os n números 
desejados, separando-os com um espaço ou a tecla "Enter" (ATENÇÃO: Se os números forem separados por espaço, teclar "Enter" 
após a última entrada. Se forem entrados mais do que n números, o programa analisará apenas as n primeiras entradas). Após
isso, o programa retornará o par mais próximo, suas posições e sua diferença. OBSERVAÇÃO: A posição impressa é em relação ao 
vetor ordenado, não em relação à ordem entrada.

2- Element Uniqueness: O usuário entra novamente com n inteiros, e o programa encontra quais desses inteiros são únicos 
na lista. O programa também encontrará o caso em que não existe um elemento único (por exemplo, numa entrada de 5 inteiros,
que sejam 2 2 3 3 3). Para fazer isso, a lista é ordenada novamente por meio do bubble sort, e o programa compara cada número
com seus dois "vizinhos". Se eles forem diferentes, e como a lista está ordenada, esse elemento do meio é único. No caso dos 
extremos da lista (primeira e última posição), o elemento é apenas comparado com o seu sucessor (no caso da primeira posição) ou com 
seu antecessor (no caso do último da lista). Toda vez que ele encontra um elemento único, ele o imprime. Se não existe um 
elemento único, um contador é incrementado e usado para imprimir uma mensagem de que não existe um elemento único.
INSTRUÇÕES DE USO: Após abrir o programa, será exibida a mensagem "Quantos numeros voce quer?". O usuário deve então digitar
a quantidade n de números que ele deseja entrar, e então teclar "Enter". Enquanto um número maior ou igual a 1 não for digitado, o 
programa irá pedir que o usuário entre novamente com a quantidade de números. Após isso, devem ser digitados os n números 
desejados, separando-os com um espaço ou a tecla "Enter" (ATENÇÃO: Se os números forem separados por espaço, teclar "Enter" 
após a última entrada. Se forem entrados mais do que n números, o programa analisará apenas as n primeiras entradas). Após
isso, o programa retornará os elementos únicos, ou a mensagem "Nao exsite um elemento unico" caso não exista um elemento único.

3- Frequency Distribution: novamente são entrados n inteiros, e o programa encontra quais destes números aparece mais vezes, 
ou seja, têm a maior frequência. Este programa não precisa ordenar a lista, ele utiliza dois vetores de mesmo tamanho, um 
deles para armazenar as n entradas, e outro para armazenar a frequência de cada elemento entrado. Ele armazena a frequencia do
primeiro elemento na primeira posição do vetor de frequencias, por exemplo. Assim, ao encontrar a maior frequência, que é o 
maior número deste vetor, pode-se encontrar o valor no vetor das entradas, pois ambos estão na mesma posição.
Se houver mais do que 1 número com a maior frequência, todos eles serão detectados e imprimidos.INSTRUÇÕES DE USO: Após abrir o programa,
será exibida a mensagem "Quantos numeros serao entrados". O usuário deve então digitar a quantidade n de números que ele deseja entrar, 
e então teclar "Enter". Enquanto um númeoro maior ou igual a 1 não for digitado, o programa irá pedir que o usuário entre novamente 
com a quantidade de números. Após isso, devem ser digitados os n números desejados, separando-os com um espaço ou a tecla "Enter" 
(ATENÇÃO: Se os números forem separados por espaço, teclar "Enter" após a última entrada. Se forem entrados mais do que n números, 
o programa analisará apenas as n primeiras entradas). Após isso, o programa retornará os elementos com a maior frequência, ou seja, 
quais elementos foram entrados mais vezes, e sua respectiva frequência. 

Os programas foram desenvolvidos no Windows 7 64 bits, no programa Dev C++. O compilador utilizado foi o default do Dev C++, 
nas configurações TDM-GCC 4.8.1 64-bit Release.
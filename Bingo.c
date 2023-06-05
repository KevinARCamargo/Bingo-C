/*
Bacharelado em Ciência da Computação - IFSULDEMINAS
Algoritmos I - Prof. Hiran
Trabalho Prático 01 - Grupo 24

Nome do Estudante: Ângelo Fávero Pereira Júnior 
Nome do Estudante: Davi Miranda Vaz
Nome do Estudante: Kevin Augusto Reis de Camargo

*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h> //Uso da biblioteca na função time utilizada na geração dos números das cartelas

//Funções 
void gerarCartelas(int *c, int tam){
	int i, j, num;
	//Comandos para gerar as cartelas
	srand (time(NULL)); //comando que gera uma "semente" diferente a cada execução usando como parâmetro o tempo do relógio
				
	//Cartela 
	for(i=0;i<24;i++){ 
		num = 1 + rand() % 98; //gerar um número de 1 a 99
		for(j=0;j<24;j++){ 
			if(num == c[j]){ 
				num = 1 + rand() % 98;
				j = -1; 
			}//fim do if	
		}//fim do for(j)
		c[i] = num; //Preenche o vetor pós verificação	
	}//fim do for(i)
				
	//Organizar a cartela em ordem crescente
	for(i=0;i<24;i++){
		for(j=0;j<24;j++){
			if(c[i] < c[j]){
				num =  c[i]; 
				c[i] =  c[j];
				c[j] = num; 
			}//fim do if
		}//fim do for(j)
	}//fim do for(i)
	//Fim da cartela 		
}

void imprimirCartela(int *c, int tam){
	int i, j;
	for(i=0;i<5;i++){
		if(c[i]<10){
			printf(" 0%i ", c[i]);
		}else{
			printf(" %i ", c[i]);
		}
	}
	printf("\n\n");
	for(i=5;i<10;i++){
		if(c[i]<10){
			printf(" 0%i ", c[i]);
		}else{
			printf(" %i ", c[i]);
		}
	}
	printf("\n\n");
	for(i=10;i<12;i++){
		printf(" %i ", c[i]);
	}
	printf(" XD ");
	for(i=12;i<14;i++){
		printf(" %i ", c[i]);
	}
	printf("\n\n");
	for(i=14;i<19;i++){
		printf(" %i ", c[i]);
	}
	printf("\n\n");
	for(i=19;i<24;i++){
		printf(" %i ", c[i]);
	}
	printf("\n\n\n\n");
}

int main( ){
	
	//Variáveis
	int op, cont; 
	
	//Cartelas
	int c1[24], c2[24], c3[24], c4[24], c5[24], c6[24], c7[24], c8[24], c9[24], c10[24];
	int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0, a9 = 0, a10 = 0;
	int sorteados[99];			
				
				
				
				
				
	int i, j, y; // Variáveis contadoras
	int num, num1, num2, num3[98], ca[10][23],ca1[10]; // Variáveis auxiliares operacionais
	
	gerarCartelas(c1, 24);
	gerarCartelas(c2, 24);
	gerarCartelas(c3, 24);
	gerarCartelas(c4, 24);
	gerarCartelas(c5, 24);
	gerarCartelas(c6, 24);
	gerarCartelas(c7, 24);
	gerarCartelas(c8, 24);
	gerarCartelas(c9, 24);
	gerarCartelas(c10, 24);
	
	//Menu
	do{
		system("cls");
		printf("********** MENU **********\n");
		printf("\n1-Imprimir Cartelas");
		printf("\n2-Simulacao automatica");
		printf("\n4-Sorteio Numero a Numero");
		printf("\n0-Sair");
		printf("\n\nDigite a opcao desejada:");
		scanf("%i", &op);
		//Todos os comandos e funções devem estar escritas entre esse ponto e o final do while 
		system ("cls"); //Limpa a tela
		
		switch(op){
			
			case 1:
				//Comandos para imprimir as cartelas
					system("cls");//Limpando a tela
					//Imprimindo a cartela 01
					printf("**** Cartela 01 ****\n\n");
					imprimirCartela(c1, 24);
					printf("**** Cartela 02 ****\n\n");
					imprimirCartela(c2, 24);
					printf("**** Cartela 03 ****\n\n");
					imprimirCartela(c3, 24);
					printf("**** Cartela 04 ****\n\n");
					imprimirCartela(c4, 24);
					printf("**** Cartela 05 ****\n\n");
					imprimirCartela(c5, 24);
					printf("**** Cartela 06 ****\n\n");
					imprimirCartela(c6, 24);
					printf("**** Cartela 07 ****\n\n");
					imprimirCartela(c7, 24);
					printf("**** Cartela 08 ****\n\n");
					imprimirCartela(c8, 24);
					printf("**** Cartela 09 ****\n\n");
					imprimirCartela(c9, 24);
					printf("**** Cartela 10 ****\n\n");
					imprimirCartela(c10, 24);
					system("pause");
				break;
				
			case 2:
				
				srand(time(NULL));
				printf("Numeros sorteados:\n\n");
				//executa até uma ou mais cartelas completarem 24 pontos
				while(a1<24 && a2<24 &&  a3 < 24 &&  a4 < 24 &&  a5 < 24 &&  a6 < 24 &&  a7 < 24 &&  a8 < 24 &&  a9 < 24 &&  a10 < 24){
					num = 1 + rand() % 98;
					//garante a não repetição de sorteios
					for(i=0;i<j;i++){
						if(num == sorteados[i]){
							num = 1 + rand() % 98;
							i = -1;
						}
						sorteados[i] = num;
					}
					
					//Comparação de variáveis
					for(i=0;i<24;i++){
						if(num == c1[i]){
							c1[i] == 00;
							a1 ++;
						}
						if(num == c2[i]){
							c2[i] == 00;
							a2 ++;
						}
						if(num == c3[i]){
							c3[i] == 00;
							a3 ++;
						}
						if(num == c4[i]){
							c4[i] == 00;
							a4 ++;
						}
						if(num == c5[i]){
							c5[i] == 00;
							a5 ++;
						}
						if(num == c6[i]){
							c6[i] == 00;
							a6 ++;
						}
						if(num == c7[i]){
							c7[i] == 00;
							a7 ++;
						}
						if(num == c8[i]){
							c8[i] == 00;
							a8 ++;
						}
						if(num == c9[i]){
							c9[i] == 00;
							a9 ++;
						}
						if(num == c10[i]){
							c10[i] == 00;
							a10 ++;
						}
					}
					//Impressão dos números sorteados já formatados
					if(num < 10){
						printf(" 0%i ", num);
					}else{
						printf(" %i ", num);
					}
					cont ++;
					if(cont == 25){
						printf("\n");	
						cont =  0;
					}
					
			}//FIM DO WHILE
			printf("\n\n");
			//As cartelas vencedoras terão o if executadas
			if(a1 == 24){
				printf("Bingo! A cartela vencedora foi a 01!\n\n");
				imprimirCartela(c1, 24);
				a1=0;
				a2=0;
				a3=0;
				a4=0;
				a5=0;
				a6=0;
				a7=0;
				a8=0;
				a9=0;
				a10=0;
			}
			if(a2 == 24){
				printf("Bingo! A cartela vencedora foi a 02!\n\n");
				imprimirCartela(c2, 24);
				a1=0;
				a2=0;
				a3=0;
				a4=0;
				a5=0;
				a6=0;
				a7=0;
				a8=0;
				a9=0;
				a10=0;
			}
			if(a3 == 24){
				printf("Bingo! A cartela vencedora foi a 03!\n\n");
				imprimirCartela(c3, 24);
				a1=0;
				a2=0;
				a3=0;
				a4=0;
				a5=0;
				a6=0;
				a7=0;
				a8=0;
				a9=0;
				a10=0;
			}
			if(a4 == 24){
				printf("Bingo! A cartela vencedora foi a 04!\n\n");
				imprimirCartela(c4, 24);
				a1=0;
				a2=0;
				a3=0;
				a4=0;
				a5=0;
				a6=0;
				a7=0;
				a8=0;
				a9=0;
				a10=0;
			}
			if(a5 == 24){
				printf("Bingo! A cartela vencedora foi a 05!\n\n");
				imprimirCartela(c5, 24);
				a1=0;
				a2=0;
				a3=0;
				a4=0;
				a5=0;
				a6=0;
				a7=0;
				a8=0;
				a9=0;
				a10=0;
			}
			if(a6 == 24){
				printf("Bingo! A cartela vencedora foi a 06!\n\n");
				imprimirCartela(c6, 24);
				a1=0;
				a2=0;
				a3=0;
				a4=0;
				a5=0;
				a6=0;
				a7=0;
				a8=0;
				a9=0;
				a10=0;
			}
			if(a7 == 24){
				printf("Bingo! A cartela vencedora foi a 07!\n\n");
				imprimirCartela(c7, 24);
				a1=0;
				a2=0;
				a3=0;
				a4=0;
				a5=0;
				a6=0;
				a7=0;
				a8=0;
				a9=0;
				a10=0;
			}
			if(a8 == 24){
				printf("Bingo! A cartela vencedora foi a 08!\n\n");
				imprimirCartela(c8, 24);
				a1=0;
				a2=0;
				a3=0;
				a4=0;
				a5=0;
				a6=0;
				a7=0;
				a8=0;
				a9=0;
				a10=0;
			}
			if(a9 == 24){
				printf("Bingo! A cartela vencedora foi a 09!\n\n");
				imprimirCartela(c9, 24);
				a1=0;
				a2=0;
				a3=0;
				a4=0;
				a5=0;
				a6=0;
				a7=0;
				a8=0;
				a9=0;
				a10=0;
			}
			if(a10 == 24){
				printf("Bingo! A cartela vencedora foi a 10!\n\n");
				imprimirCartela(c10, 24);
				a1=0;
				a2=0;
				a3=0;
				a4=0;
				a5=0;
				a6=0;
				a7=0;
				a8=0;
				a9=0;
				a10=0;
			}
			system("pause");
			break;
			case 4://Comandos para o sorteio número a número
					srand(time(NULL));
					for(i=0;i<=97;i++){   // Gera um vetor com 98 numeros aleatorios distintos
						num = 1 + rand() % 98; 
						for(y=0;y<=98;y++){
							if(num == num3[y]){
								num = 1 + rand() % 98; 
								y = -1; 
							}	
						}
						num3[i] = num;
					} // fim do vetor
					
					for(j = 0; j <= 97; j++){ //contador que vai comparar cada número com as cartelas e analisar número a número caso cada uma ganhe 
						printf("O numero sorteado foi %i\n", num3[j]); // mostra qual o número sorteado
						num1 = 0;
						for(i = 0; i <= 23; i++){ //compara o número sorteado com cada número de cada cartela e mostra qual a cartela e a posição do número quando a cartela o tem 
							if(num3[j] == c1[i]){
								num1 = 1;
								printf("O numero que esta na posicao %i da primeira cartela foi sorteado\n", i+1);
								ca[0][i] = 1;
							}
						}
						for(i = 0; i <= 23; i++){ //compara o número sorteado com cada número de cada cartela e mostra qual a cartela e a posição do número quando a cartela o tem 
							if(num3[j] == c2[i]){
								num1 = 1;
								printf("O numero que esta na posicao %i da segunda cartela foi sorteado\n", i+1);
								ca[1][i] = 1;
							}
						}
						for(i = 0; i <= 23; i++){ //compara o número sorteado com cada número de cada cartela e mostra qual a cartela e a posição do número quando a cartela o tem 
							if(num3[j] == c3[i]){
								num1 = 1;
								printf("O numero que esta na posicao %i da terceira cartela foi sorteado\n", i+1);
								ca[2][i] = 1;
							}
						}
						for(i = 0; i <= 23; i++){ //compara o número sorteado com cada número de cada cartela e mostra qual a cartela e a posição do número quando a cartela o tem 
							if(num3[j] == c4[i]){
								num1 = 1;
								printf("O numero que esta na posicao %i da quarta cartela foi sorteado\n", i+1);
								ca[3][i] = 1;
							}
						}
						for(i = 0; i <= 23; i++){ //compara o número sorteado com cada número de cada cartela e mostra qual a cartela e a posição do número quando a cartela o tem 
							if(num3[j] == c5[i]){
								num1 = 1;
								printf("O numero que esta na posicao %i da quinta cartela foi sorteado\n", i+1);
								ca[4][i] = 1;
							}
						}
						for(i = 0; i <= 23; i++){ //compara o número sorteado com cada número de cada cartela e mostra qual a cartela e a posição do número quando a cartela o tem 
							if(num3[j] == c6[i]){
								num1 = 1;
								printf("O numero que esta na posicao %i da sexta cartela foi sorteado\n", i+1);
								ca[5][i] = 1;
							}
						}
						for(i = 0; i <= 23; i++){ //compara o número sorteado com cada número de cada cartela e mostra qual a cartela e a posição do número quando a cartela o tem 
							if(num3[j] == c7[i]){
								num1 = 1;
								printf("O numero que esta na posicao %i da setima cartela foi sorteado\n", i+1);
								ca[6][i] = 1;
							}
						}
						for(i = 0; i <= 23; i++){ //compara o número sorteado com cada número de cada cartela e mostra qual a cartela e a posição do número quando a cartela o tem 
							if(num3[j] == c8[i]){
								num1 = 1;
								printf("O numero que esta na posicao %i da oitava cartela foi sorteado\n", i+1);
								ca[7][i] = 1;
							}
						}
						for(i = 0; i <= 23; i++){ //compara o número sorteado com cada número de cada cartela e mostra qual a cartela e a posição do número quando a cartela o tem 
							if(num3[j] == c9[i]){
								num1 = 1;
								printf("O numero que esta na posicao %i da nona cartela foi sorteado\n", i+1);
								ca[8][i] = 1;
							}
						}
						for(i = 0; i <= 23; i++){ //compara o número sorteado com cada número de cada cartela e mostra qual a cartela e a posição do número quando a cartela o tem 
							if(num3[j] == c10[i]){
								num1 = 1;
								printf("O numero que esta na posicao %i da decima cartela foi sorteado\n", i+1);
								ca[9][i] = 1;
							}
						}
						if(num1 != 1)printf("Nenhuma cartela tem este numero!\n"); // caso o número sorteado não estiver presente em nenhuma cartela está mensagem aparecera
						for(i=0;i<=9;i++){ // adiciona 1 cada vez que o numero de uma cartela é sorteado a uma posição de um vetor com 10 casas
							for(y=0;y<=23;y++){
								if(ca[i][y] == 1){
									ca1[i] += 1;
									ca[i][y] = 0;
								}else{
									continue;
								}
							}
						}
						for(i=0;i<=9;i++){ // quando aguma casa do vetor atingir 24 números sorteados aparecera uma mensagem mostrando qual cartela ganhou
							if(ca1[i] == 24){
								printf("A Cartela %i Ganhou!!\n", i+1);
								j = 98;
								break;
							}else{
								continue;
							}
						}
						
						
						
						
						
						system("pause");
						}
						system("pause");
							
							
						
						
						
				break;
			case 0:
				//Comandos para sair (pronto)
				break;
			default:
				//Comandos para opções invalidas (pronto)
				printf("\nOpcao Invalida tente novamente\n");
				break;			
		}
		
	//Final do while
	}while (op != 0);

	system("pause");
	return 0;
}

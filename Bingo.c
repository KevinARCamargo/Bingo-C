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
	//Variáveis
	int i, j, num;
				
	//Cartela 
	for(i=0;i<24;i++){ //Percorre a cartela
		num = 1 + rand() % 99; //Gera um número de 1 a 99
		for(j=0;j<24;j++){ //Garante a não repetição de valores
			if(num == c[j]){ 
				num = 1 + rand() % 99;
				j = -1; //Reseta o for
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
	//Cada for imprime uma linha formatando a cartela
	for(i=0;i<5;i++){
		if(c[i]<10){
			printf(" 0%i ", c[i]);//Atribui um 0 a frente de numeros menores que 10
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
	int op, cont, num, c, i, j; 
	int c1[24], c2[24], c3[24], c4[24], c5[24], c6[24], c7[24], c8[24], c9[24], c10[24];
	int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0, a9 = 0, a10 = 0;
	int sorteados[99];			
					
	srand (time(NULL)); //Gera uma semente única levando em consideração o relógio 
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
		system("cls"); //Limpa a tela
		printf("********** MENU **********\n");
		printf("\n1- Imprimir Cartelas");
		printf("\n2- Sorteador");
		printf("\n3- Simulacao automatica");
		printf("\n0- Sair");
		printf("\n\n Digite a opcao desejada: ");
		scanf("%i", &op);
		
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
					//comandos para sortear números
					for(i = 0; i < 99; i++){
						system("cls");
						cont = 0;
						num = 1 + rand() % 99;
						//garante a não repetição de sorteios
						for(j=0; j<i; j++){
							if(num == sorteados[j]){
								num = 1 + rand() % 99;
								j = -1;
							}//fim do if
						}//fim do for(j)
						sorteados[i] = num;
						printf(" Numero sorteado: %i", sorteados[i]);
						printf("\n\n\n Numeros sorteados anteriormente \n\n\n");
						for(j=0; j<i; j++){
							if(sorteados[j] < 10){
								printf(" 0%i ", sorteados[j]);
								cont ++;
							}
							else{
								printf(" %i ", sorteados[j]);
								cont ++;	
							}
							if(cont == 25){
								printf("\n");
								cont = 0;
							}
						}	
						printf("\n\n");
						system("pause");
					}//fim do for (i)
					system("pause");
					break;
					
			case 3:
				system("cls");
				printf("Numeros sorteados:\n\n");
				//executa até uma ou mais cartelas completarem 24 pontos
				while(a1<24 && a2<24 &&  a3 < 24 &&  a4 < 24 &&  a5 < 24 &&  a6 < 24 &&  a7 < 24 &&  a8 < 24 &&  a9 < 24 &&  a10 < 24){
					num = 1 + rand() % 99;
					//garante a não repetição de sorteios
					for(i=0;i<c;i++){
						if(num == sorteados[i]){
							num = 1 + rand() % 99;
							i = -1;
						}
					}
					sorteados[i] = num;
					c++;
					
					//Comparação de variáveis
					for(i=0;i<24;i++){
						if(num == c1[i]){
							a1 ++;
						}
						if(num == c2[i]){
							a2 ++;
						}
						if(num == c3[i]){
							a3 ++;
						}
						if(num == c4[i]){
							a4 ++;
						}
						if(num == c5[i]){
							a5 ++;
						}
						if(num == c6[i]){
							a6 ++;
						}
						if(num == c7[i]){
							a7 ++;
						}
						if(num == c8[i]){
							a8 ++;
						}
						if(num == c9[i]){
							a9 ++;
						}
						if(num == c10[i]){
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
			}
			if(a2 == 24){
				printf("Bingo! A cartela vencedora foi a 02!\n\n");
				imprimirCartela(c2, 24);
			}
			if(a3 == 24){
				printf("Bingo! A cartela vencedora foi a 03!\n\n");
				imprimirCartela(c3, 24);
			}
			if(a4 == 24){
				printf("Bingo! A cartela vencedora foi a 04!\n\n");
				imprimirCartela(c4, 24);
			}
			if(a5 == 24){
				printf("Bingo! A cartela vencedora foi a 05!\n\n");
				imprimirCartela(c5, 24);
			}
			if(a6 == 24){
				printf("Bingo! A cartela vencedora foi a 06!\n\n");
				imprimirCartela(c6, 24);
			}
			if(a7 == 24){
				printf("Bingo! A cartela vencedora foi a 07!\n\n");
				imprimirCartela(c7, 24);
			}
			if(a8 == 24){
				printf("Bingo! A cartela vencedora foi a 08!\n\n");
				imprimirCartela(c8, 24);
			}
			if(a9 == 24){
				printf("Bingo! A cartela vencedora foi a 09!\n\n");
				imprimirCartela(c9, 24);
			}
			if(a10 == 24){
				printf("Bingo! A cartela vencedora foi a 10!\n\n");
				imprimirCartela(c10, 24);
			}
			cont = 0;
			c = 0;
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
			printf("\n\n");
			system("pause");
			break;
			
			case 0:
				break;
			default:
				printf("\nOpcao Invalida tente novamente\n");
				break;			
		}
		
	//Final do while
	}while (op != 0);

	system("pause");
	return 0;
}

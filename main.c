#include <stdio.h>
#include <stdlib.h>

//FUNÇÃO: 2x / (x² + 1) 

float recebeA(float valor)
{
	return valor;
}
float recebeB(float valor)
{
	return valor;
}
float recebeN(float valor)
{
	return valor;
}
float calculaH(float a, float b, float n)
{
	return (b-a)/n;
}
/*
float calculaXM(float x1, float x2)
{
	return (x1+x2)/2;
}*/
float calculaFX(float x)
{
	float resultado = (2*x)/(x*x+1);	
	return resultado;
}
float calculacoefFX(int i, int k, float fx)
{
	float resultado;
		
	resultado = fx;

	return resultado;
}
/*
float calcula_area_particao(int h, float Fxm)
{
	return h * Fxm;
}*/

void fluxo(float a, float b, int n, float h)
{
	float x=0, Fx=0, coefFX=0, soma=0, integral=0;
	int contador=0;
	
	float i = a;
		
	do
	{
		x = i;
		Fx = calculaFX(x);
		coefFX = calculacoefFX(contador, n, Fx);
		soma = soma + coefFX;
		
		i +=h;
		contador++;
	}while(x<b);
	
	integral = (h) * soma;
	
	printf("Iniciando cálculo...\n");
	
    //printf("Valor atual de i: %.2f", i);
    //printf("Valor atual de h: %.2f", h);
    printf("Valor atual de x: %.2f", x);
    
	printf("Cálculo concluído em %d interações.\n\n", contador-1);
	printf("SOMA: %.4f\n", soma);
	printf("INTEGRAL: %.4f\n", integral);
}

void menu()
{
	int op;
	float a, b, n;
	//float soma=0, integral = 0;
	
	/*Testando funções isoladamente.
	float r1= calculaH(1, 101, 10);
	float r2= calculaXM(1, 11);
	float r3= calculaFXM(5);
	//float r4= r1 * r3;*/
				
	while(1)
	{
		printf("MÉTODO DO TRAPEZIO.\n\n");
		printf("A função é 2x/x²+1.\n\n");
	
		printf("Escolha:\n");
		printf("1- Executar código:\n");
		printf("2- Limpar tela:\n");
		printf("3- Sair.\n");
		scanf("%d", &op);
		switch(op)
		{
			case 1:
				/*
				printf("TESTANDO:\n\n");
				float r1= calculaFX(0.1);
				float r2= calculacoefFX(1, 10, 0.1980);
				printf("FX de 0.1: \n%.4f", r1);
				printf("coefFX de 0.1: \n%.4f", r2);
				0.7921
				*/		
				printf("Digite o limite inferior:\n");
				scanf("%f", &a);
				printf("Digite o limite superior:\n");
				scanf("%f", &b);
				printf("Digite o número de partições:\n");
				scanf("%f", &n);
		
				float altura = calculaH(a, b, n);
				printf("O valor da altura de cada retangulo é:%.4f \n", altura);
				
				fluxo(a, b, n, altura);
				/*
				printf("Iniciando cálculo...\n");
				fluxo(a, b, n, altura, &soma, &integral);
				printf("Cálculo concluído.\n\n");
				printf("SOMA: %.4f\n", soma);
				printf("INTEGRAL: %.4f\n", integral);
				*/
				break;
			case 2:
				system("cls");
				//printf("Resultados para:\nCalcula H:%.4f\nCalcula XM:%.4f\nCalcula FXM:%.4f\n", r1, r2, r3);
				break;
				
			case 3:

				printf("Saindo...\n");
				exit(0);
				break;
			default:
				printf("Escolha entre 1 e 3!\n");
				
	}
		
	}
}

int main(int argc, char *argv[]) {
	menu();
}

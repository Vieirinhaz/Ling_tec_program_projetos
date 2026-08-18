#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
/*	int n, sucessor, antecessor;
	printf ("entre com o valor de N");
	scanf("%d", &n);
	sucessor = n+1;
	antecessor = n-1;
	printf("o numero %, seu antecessor %d e seu sucessor %d", n, antecessor, sucessor);*/
	
	int n;
	printf ("entre o valor de N");
	scanf("%d", &n);
	printf("o numero %d, seu antecessor %d e seu sucessor %d" , n, n-1, n+1);
	
	int a,b,c, maiorTemp, maior ;
	printf("insira tres valores para indentificar o maior: ");
	scanf("%d %d %d", &a,&b,&c);
	
	maiorTemp = ((a+b+abs(a-b))/2);
	
	printf("o maior entre |%d|,|%d|,|%d| - %d" a, b, c maior);
	return 0;
}


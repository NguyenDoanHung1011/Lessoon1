#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=1;
	int b=2;
	int bcd=23;
	int ef=25;
	int abdef=8;
	int x = a*a*a*a*a*a+bcd+ef;
	int y = a*a*a*b*b + abdef;
	printf("%d %d", x, y);
	return 0;
}

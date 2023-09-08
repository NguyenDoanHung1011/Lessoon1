#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str1[60]="===================================";
	char str2[60]="|STT |Ho Ten        |Tuoi     |Gioi Tinh      |";
	char str3[60]="|01  |Nguyen A      |20       |Nam            |";
	char str4[60]="|02  |Nguyen B      |22       |Nam            |";
	char str5[60]="|0   |Nguyen C      |26       |Nam            |";
	
	printf("%s%\n%s%\n%s%\n%s%\n%s%", str1,str2,str3,str4,str5);
	return 0;
}

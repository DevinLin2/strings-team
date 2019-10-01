#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"headers.h"

int main() {
	//strings to be tested
	char str0[10] = "StuyPulse";
	char str1[20] = "Sharing is Caring";
	char mystr0[10] = "StuyPulse";
	char mystr1[20] = "Sharing is Caring";

	//print out strings
	printf("str0: [%s]\nstr1: [%s]\n", str0, str1);
	printf("mystr0: [%s]\nmystr1: [%s]\n", mystr0, mystr1);


	//test strlen
	printf("\nTesting strlen(str0):\nstandard: %d\nmine: %d\n", strlen(str0), mystrlen(str0));

	//test strcpy
	printf("\nstrcpy(str1, str0):\nstandard: [%s]\nmine: [%s]\n", strcpy(str1, str0), mystrcpy(mystr1, mystr0));

	//test strncat
	printf("\nstrncat(str1, str0, 4)\nstandard: [%s]\nmine: [%s]\n", strncat(str1, str0, 4), mystrncat(mystr1, mystr0, 4));
}

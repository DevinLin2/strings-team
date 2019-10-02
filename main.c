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
	char comp_str0[6] = "Hello";
	char comp_str1[6] = "hello";
	char comp_str2[6] = "henlo";
	char comp_str3[6] = "henlo";
	char comp_str4[4] = "abc";
	char comp_str5[3] = "ab";
	char ch_str0[5] = "abcd";
	char ch = 'c';

	//print out strings
	printf("str0: [%s]\nstr1: [%s]\n", str0, str1);
	printf("mystr0: [%s]\nmystr1: [%s]\n", mystr0, mystr1);

	printf("comp_str0: [%s]\ncomp_str1: [%s]\n", comp_str0, comp_str1);
	printf("comp_str2: [%s]\ncomp_str3: [%s]\n", comp_str2, comp_str3);
	printf("comp_str4: [%s]\ncomp_str5: [%s]\n", comp_str4, comp_str5);

	printf("ch_str0: [%s]\nch: [%c]\n", ch_str0, ch);

	//test strlen
	printf("\nTesting strlen(str0):\nstandard: %d\nmine: %d\n", strlen(str0), mystrlen(str0));

	//test strcpy
	printf("\nstrcpy(str1, str0):\nstandard: [%s]\nmine: [%s]\n", strcpy(str1, str0), mystrcpy(mystr1, mystr0));

	//test strncat
	printf("\nstrncat(str1, str0, 4)\nstandard: [%s]\nmine: [%s]\n", strncat(str1, str0, 4), mystrncat(mystr1, mystr0, 4));

	//test strcmp
	printf("\nTesting strcmp(comp_str0,comp_str1): \nstandard: %d\nmine: %d\n", strcmp(comp_str0,comp_str1), mystrcmp(comp_str0,comp_str1));
	printf("\n Testing strcmp(comp_str2,comp_str3): \nstandard: %d\nmine: %d\n", strcmp(comp_str2,comp_str3), mystrcmp(comp_str2,comp_str3));
	printf("\n Testing strcmp(comp_str4,comp_str5): \nstandard: %d\nmine: %d\n", strcmp(comp_str4,comp_str5), mystrcmp(comp_str4,comp_str5));

	//test strch
	printf("\nTesting strchr(ch_str0,ch):\nstandard: %d\nmine: %d\n", strchr(ch_str0,ch), mystrchr(ch_str0,ch));
}

#include<stdlib.h>
#include<stdio.h>
#include"headers.h"

int main() {
	//strings to be tested
	char str0[10] = "StuyPulse";
	char str1[20] = "Sharing is Caring";
	char str2[15] = "Let it Rip";
	char str3[5];
	char *strings[3] = {str0, str1, str2};
	
	//print out strings
	int i;
	for(i = 0; i < 3; i++) {
		printf("str%d: [%s]\n", i, strings[i]);
	}

	//test strlen
	printf("\n\nTesting strlen:\n");
	for(i = 0; i < 3; i++) {
		printf("\nstrlen(str%d):\n[standard]: %d\n[mine]: %d\n", i, strlen(strings[i]), mystrlen(strings[i]));
	}

	//test strcpy
	printf("\n\nTesting strcpy:\n");
	for(i = 0; i < 3; i++) {
		printf("\nstrlen(str3, str%d):\n[standard]: [%s]\n[mine]: [%s]\n", i, strcpy(str3, strings[i]), mystrcpy(str3, strings[i]));
	}
}

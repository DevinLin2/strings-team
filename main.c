#include<stdlib.h>
#include<stdio.h>
#include"headers.h"

int main() {
	//strings to be tested
	char str0[10] = "StuyPulse";
	char str1[20] = "Sharing is Caring";
	char str2[10] = "Let it Rip";
	char *strings[3] = {str0, str1, str2};
	
	//print out strings
	int i;
	for(i = 0; i < 3; i++) {
		printf("str%d: [%s]\n", i, strings[i]);
	}

	//test strlen
	printf("\n\nTesting strlen:\n");
	for(i = 0; i < 3; i++) {
		printf("\nstrlen(str%d):\n[standard]: %d\n[mine]: %d\n", i, strlen(strings[i]), lenstr(strings[i]));
	}
}

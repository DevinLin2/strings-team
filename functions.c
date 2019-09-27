#include<stdlib.h>
#include<stdio.h>

int lenstr( char *s ) {
	int i = 0;
	int len = 0;
	int item;
	while (1) {
		item = s[i];
		if (item == NULL) {
			break;
		}
		len++;
		i++;
	}
	return len;
}

char * strcp( char *dest, char *source ){
	
}

char * strnct( char *dest, char *source, int n){
}

int strcmp( char *s1, char *s2 ){
}

char * strichr( char *s, char c ){
}

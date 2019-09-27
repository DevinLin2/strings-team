#include<stdlib.h>
#include<stdio.h>

int mystrlen( char *s ) {
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

char * mystrcpy( char *dest, char *source ){
	
}

char * mystrncat( char *dest, char *source, int n){
}

int mystrcmp( char *s1, char *s2 ){
}

char * mystrchr( char *s, char c ){
}

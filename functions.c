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
	int i = 0;
	char item;
	while (1) {
		item = source[i];
		dest[i] = item;
		if (item == NULL) {
			break;
		}
		i++;
	}
	return dest;
}

char * mystrncat( char *dest, char *source, int n){
	int i = 0;
	int j = 0;
	while (1) {
		if (dest[j] == NULL) {
			break;
		}else {
			j++;
		}
	}
	while (i < n) {
		dest[j + i] = source[i];
		i++;
	}
	dest[j + i] = NULL;
	return dest;
}

int mystrcmp( char *s1, char *s2 ){
	int i,count = 0;
	while (1) {
		if (s1[i] == NULL || s2[i] == NULL) {
			if(s1[i] == s2[i]){
				return 0;
			} else if(s1[i] == NULL){
				return -1;
			} else{
				return 1;
			}
		}else {
			if(s1[i] > s2[i]){
				return 1;
			} else if(s1[i] > s2[i]){
				return -1;
			}
			i++;
		}
	}
}

char * mystrchr( char *s, char c ){
	int i = 0;
	while (1) {
		if (s[i] == NULL) {
			break;
		}else {
			if(s[i] == c){
				char *p = &s[i];
				return p;
			}
			i++;
		}
	}

}

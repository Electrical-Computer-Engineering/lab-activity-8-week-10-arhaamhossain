//Arhaam Hossain SBU ID: 115170294

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int my_isalpha(char c){
	if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z'){
		return 1;
	}
	return 0;
}

int my_isdigit(char d){
	if(d >= '0' && d <= '9'){
		return 1;
	}
	return 0;
}

int my_is_upper(char u){
	if(u >= 'A' && u <= 'Z'){
		return 1;
	}
	return 0;
}

char my_to_upper(char l){
	if(l >= 'a' && l <= 'z'){
		return l-'a'+'A';
	}
	return l;
}

int main(){
	char k = 'A';
	printf("Is alphabet %c - %d\n", k, my_isalpha(k));

	int m = '7';
	printf("Is number %c - %d\n", m, my_isdigit(m));

	char n = 'B'; 
	printf("Is upper %c - %d\n", n, my_is_upper(n));

	char p = 'a';
	printf("To upper %c - %c\n", p, my_to_upper(p));
	
	char w = '1';
	printf("Is alphabet %c - %d\n", w, my_isalpha(w));

	int x = 'A';
	printf("Is number %c - %d\n", x, my_isdigit(x));

	char y = 'b'; 
	printf("Is upper %c - %d\n", y, my_is_upper(y));

	char z = 'A';
	printf("To upper %c - %c\n", z, my_to_upper(z));
		
	return 0;

}


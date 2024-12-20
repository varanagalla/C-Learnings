#include <stdio.h>

int main() {
	long bl = 0;
	long tabs = 0;
	long nl = 0;
	int c;

	for(;(c = getchar()) != EOF;){
		if(c == ' '){
			++bl;
		}else if(c == '\t') {
			++tabs;
		}else if(c == '\n') {
			++nl;
		}
	}
	printf("blanks = %ld, tabs = %ld, newlines = %ld\n", bl, tabs, nl); 
}


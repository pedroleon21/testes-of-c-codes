#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	int i;
	char a;
	for(i=0;i<200;i++){
		a=i;
		printf("    %c %d %d\n",i,i,isalnum(a));
		
	}
	return 0;
}

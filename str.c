#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char *str,num[8];
	int i=0,j,k,len;
	str = (char*)malloc(sizeof(char)*128);
	fgets(str,128,stdin);
	len = strlen(str);
	while(i<len && str[i] != ','){
		num[j]=str[i];
		i++;
		j++;
	}
	k=0;
	num[j]= '\0';
	j = atoi(num);
	i++;
	while(i<len){
		num[k]=str[i];
		i++;
		k++;
	}
	nunk[39] = '\0';
	k = atoi(num);
	if(j>k){
		i=j;
		j=k;
		k=i;
	}
	printf("\nj: %d k: %d",j,k);
	return 0;
}

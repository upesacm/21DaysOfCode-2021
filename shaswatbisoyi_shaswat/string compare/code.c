#include<stdio.h>
#include<string.h>

int main(){
	
	char string1[]="shaswat",string2[]="bisoyi";
	int i,j,k;
	i=strcmp(string1, string2);
	j=strcmp(string2, "bisoyi");
	k=strcmp(string1, "shaname");

	printf("%d %d %d\n",i,j,k);
	return 0;
}

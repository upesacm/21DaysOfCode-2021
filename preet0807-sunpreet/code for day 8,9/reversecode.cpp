//reverse the string 
 #include<stdio.h>
int main()
{
	int j,i,count=0;
	char str[1000],rev[1000];
	scanf("%s",str);
	printf("%s\n",str);
	 while (str[count] != '\0')
  {
    count++;
  }
  j = count - 1;

  //reversing the string by swapping
  for (i = 0; i < count; i++)
  {
    rev[i] = str[j];
    j--;
  }

  printf("%s", rev);
}
	
	


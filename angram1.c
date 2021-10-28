#include <stdio.h>
#include <string.h>
int main()
{
	int n=0,n1=0;
	char s1[10];
	char s2[10];
	char temp;
	printf("enter 1st word: ");
	scanf("%s",s1);
	printf("enter 2nd word: ");
	scanf("%s",s2);
	int i,j;
	while(s1[n]!='\0')
	    n++;
	while(s2[n1]!='\0')
	    n1++;
	if(n != n1)
  {
		printf("\n%s and %s are not anagram! \n",s1,s2);
		return 0;
	}
	printf("both strings are anagram");
	return 0;
}

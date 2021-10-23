#include <stdio.h>
int main(){
	int i=0,c=0,d=0,e,f;
	char a[100],b[100];
	printf("enter two words to check anagram : ");
    scanf("%s %s",a,b);
    while(a[c]!='\0'){
    	c++;
	}
	while(b[d]!='\0'){
		d++;
	}
    for(i=0;i<c;i++){
    	while(b[e]==a[i]){
    		e=e+1;
		}
		printf("it is a anagram");
	}
	return 0;
}

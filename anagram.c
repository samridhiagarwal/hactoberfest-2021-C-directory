#include <stdio.h>  
int get_anagrm (char [],char []);  
int main ()  
{    
    char a1[50], a2[50];  
    int count;  
    printf (" Enter the first string: \n ");  
    scanf (" %s", a1); 
    printf (" Enter the second string: \n ");  
    scanf (" %s", a2);  
    count = get_anagrm (a1, a2);        
    if (count == 1)  
    {  
        printf (" %s and %s.\n These Strings Are An Anagram Of Each Other.\n", a1, a2);  
    }  
    else  
    {  
        printf (" %s and %s.\n These Strings Are Not An Anagram Of Each Other. \n", a1, a2);  
    }  
    return 0;  
}   
int get_anagrm (char a1[], char a2[])  
{  
    int num1[20] = {0}, num2[20] = {0}, i = 0;  
    while (a1[i] != '\0')  
    {  
        num1[a1[i] -'a']++;  
        i++;  
    }  
    i = 0;   
    while (a2[i] != '\0')  
    {  
        num2[a2[i] -'a']++;  
        i++;  
    }  
    for ( i = 0;i <20; i++)  
    {  
        if ( num1[i] != num2[i])  
        return 0;  
    }  
    return 1;  
}  

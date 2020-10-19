#include <stdio.h>
#include <string.h>
int main()
{	char s[1000], s1[100],s2[100];
	fflush(stdin);
	gets(s);
	strlwr(s);
	char *token = strtok(s," ");
    int dem=0;
    while (token != NULL)
    {   s1[dem]=token[0];
    	strcpy(s2,token);
    	dem++;
		token = strtok(NULL," ");
    }
    s1[dem-1]='\0';
    printf("%s%s@ptit.edu.vn",s2,s1);
}

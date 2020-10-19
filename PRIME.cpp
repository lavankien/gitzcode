#include <iostream>
using namespace std;
#include <string>
#include <cstring>
main()
{
	string s;
	fflush(stdin);
	getline(cin,s);
	strlwr(s);
	char *token=strtok(s," ");
	while (token!=NULL)
	{
		strcpy(cuoi,token);
		strcat(kqua,token[0]);
		token=strtok(s,NULL);
	}
	cout<<cuoi;
}

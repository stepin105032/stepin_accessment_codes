#include "substrings.h"
#include<stdio.h>
#include<string.h>
///@file substring.c
char* substrings(char* name)///@param[in] string seperated by underscore.
	{

	int j=0,i;
	char ind[1000],*p;




	for(i=0;i<strlen(name);i++)
	{
		if((name[i]=='_'))
		{ind[j++]=' ';
			ind[j]='\0';
		}
		else  {
			ind[j++]=name[i];
			ind[j]='\0';

		}
	}
  printf(" ");
p=ind;

	return p;///@return strings seperated by space.
}

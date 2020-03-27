/*
Write a function about string copy, the strcpy prototype "char* strcpy (char* strDest, const char* strSrc);". Here strDest is destination string, strSrc is source string.
 */


#include <stdio.h>
#include <string.h>

char* strcpy(char* strDest, const char* strSrc)
{
	int i;
	for (i=0; strSrc[i] != '\0'; ++i)
		strDest[i] = strSrc[i];
	strDest[i]='\0';
	return strDest;
}


/**
 * ÌâÄ¿1490£º×Ö·û´®Á´½Ó.cpp
 *
 * Time : 2013-10-26 23:03
 *
 * Created with C-free 
 *
 * Copyright 2013 zhiliang
 */
 #include <cstdio>

char *mystrcat(char *DesStr, char *SrcStr);

int main(void)
{
	char ch1[101];
	char ch2[102];
	while (~scanf("%s%s", ch1, ch2))
	{	
		char *str = mystrcat(ch1, ch2);

		puts(str);
	}
	return 0;
}

char *mystrcat(char *DesStr, char *SrcStr)
{
	
	char *pt = DesStr;  
	while(*DesStr!='\0') DesStr++;  
    while(*SrcStr!='\0') *DesStr++ = *SrcStr++;  
	
	*DesStr = '\0';
	return pt;
}
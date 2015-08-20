/**
 * ÌâÄ¿1054£º×Ö·û´®ÄÚÅÅĞò.cpp
 *
 * Time : 2013-10-18 8:26
 *
 * Created with Dev¡ªCPP 
 *
 * Copyright 2013 zhiliang
 */
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

int main(int argc, char** argv) 
{
	char ch[201];
	while (gets(ch))
	{
		sort(ch, ch + strlen(ch));
		puts(ch);
	}
	
	return 0;
}


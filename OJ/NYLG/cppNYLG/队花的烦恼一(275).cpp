/**
 * 队花的烦恼一(275).cpp
 *
 * Time : 2013-8-26 11:33
 *
 * Created with DEVCPP
 *
 * Copyright 2013 zhiliang 
 */
#include <cstdio>

char *digitToAlpha (int val, char *buf, unsigned radix);
char ch[20];
int main()
{
    int n;
    while (~scanf("%d", &n))
    {
    	digitToAlpha (n, ch, 2);
    	puts(ch);
    }
    return 0;
}

char *digitToAlpha (int val, char *buf, unsigned radix) 
{ 
    char *p; /* pointer to traverse string */ 
    char *firstdig;/* pointer to first digit */ 
    char temp; /* temp char */ 
    unsigned digval; /* value of digit */ 
    p = buf; 
    if(val<0)
    { 
        /* negative, so output '-' and negate */ 
        *p++= '-'; 
        val = (unsigned long)(-(long)val); 
    } 
    firstdig = p;/* save pointer to first digit */ 
    do { 
        digval = (unsigned)(val%radix); 
        val /=radix; /* get next digit */ 
        /* convert to ascii and store */ 
        if (digval > 9) 
            *p++ = (char) (digval - 10 + 'a'); /* a letter */ 
        else 
            *p++ = (char) (digval + '0'); /* a digit */ 
    } while(val > 0); 
    /* We now have the digit of the number in the buffer, but in reverse 
    order. Thus we reverse them now. */ 
    *p-- = '\0'; /* terminate string; p points to last digit */ 
    do 
    { 
        temp = *p; 
        *p =*firstdig; 
        *firstdig= temp; /* swap *p and *firstdig */ 
        --p; 
        ++firstdig;     /* advance to next two digits */ 
    } while (firstdig < p); /* repeat until halfway */ 
    return buf; 
}

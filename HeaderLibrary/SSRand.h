/*Including Header*/
#ifndef sreyas_h
#define sreyas_h
#endif
/*Inclusion of stdlib.h*/
#ifndef stdlib_h
#include<stdlib.h>
#endif

/*Hooking*/
#define s_random random
#define strcmp scp



int s_random(int a,int b)
{
if(a>b)
return random(a-b+1)+b;
else
return random(b-a+1)+a;
}

float s_random(float a,float b)
{
if(a>b)
return random((float)a-(float)b+1)+(float)b;
else
return random((float)b-(float)a+1)+(float)a;
}

char s_random(char a,char b)
{
if(a>b)
return random(a-b+1)+b;
else
return random(b-a+1)+a;
}

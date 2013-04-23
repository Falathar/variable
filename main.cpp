#include <iostream>

float calcul(float &a , float b)
{
    float c = 0;
    a=a/2;
    c=b-2;
    b=a*5;
    return (a+b+c);
}

int main(int argc, const char * argv[])
{
    float a=0,b=0,c=0;
    b=2;
    c=calcul(b,3);
    a=calcul(b,c);
    printf("a=%f,b=%f,c=%f",a,b,c);
    return 0;
}

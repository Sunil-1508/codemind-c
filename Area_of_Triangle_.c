#include <stdio.h>
#include <stdlib.h>
 #include<math.h>
float findArea(float a, float b, float c)
{
    float s = (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%.2f", findArea(a, b, c));
    return 0;
}
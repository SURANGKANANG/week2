#include <stdio.h>
float maximum(float,float,float);
int main(){
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    printf("Maximum is %.2f\n",maximum(a,b,c));
}
float maximum(float a,float b,float c)
   {
    float max = a;
    if(b>max)
        max=b;
    if(c>max)
        max=c;
        return max ;
    }

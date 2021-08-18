#include <stdio.h>
int main(){
    float number[3];
    printf("Input number : ");
    scanf("%f%f%f",&number[0],&number[1],&number[2]);
    float max = number[0] ;
    for(int i=0;i<3;i++){
        if(number[i]>max){
           max= number[i] ;
        }
        
    }
 printf("max = %.2f",max);
}
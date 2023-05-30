#include<stdio.h>
int factorial (int);

int main() {
     int n;
    scanf("%d",&n);
    int a;
    int i;
    float s=0;
    for(i=1;i<=n;i++){
    a=factorial(i);
    s=s+1.0/a;
    }
   printf("%f",s);
 
}
int factorial (int i){
     int f=1;
    int j=1;
    for(j=1;j<=i;j++)
    {
        f=f*j;
    }
    return f;
    
}

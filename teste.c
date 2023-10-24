#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double pi(int n);

int main(){
    int x;
    scanf(" %d", &x);

    printf("%lf\n", pi(x));

    return 0;
}


double pi(int n){
    double s = 0;
    
    for(int i=0;i<=n;i++){
        s+=(pow(-1,i)/(float)(2*i + 1));
    }
        return 4*s;
}
#include <stdio.h>
#include <math.h>
int main(){
    long int i, n;
    double sum=0.0, term, pi;

    n = 16;

    for(i=0; i<n; i++){
        term = pow(-1, i) / (2 * i + 1);
        sum += term;
        }
    pi = 4 * sum;
    
    printf("\nPI = %.6lf", pi);
    
    return 0;
}

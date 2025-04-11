#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <stdio.h>

#define PI 3.1415

float pdf(double mu,double sigma, double x);

float pdf(double mu,double sigma, double x){

return 1/(sigma * sqrt(2*PI)) * exp(-(pow((x-mu),2))/pow((2*sigma),2));

}

/**
Probability Density Function

f\left(x\right)=\frac{1}{\sigma\cdot\sqrt{2\pi}}\cdot e^{\left(-\frac{\left(x-\mu\right)^{2}}{\left(2\cdot\sigma\right)^{2}}\right)}
E^-(x-\[Mu])^2/(2 \[Sigma]^2)/(Sqrt[2 \[Pi]] \[Sigma])
**/


int main(){

    double sigma, mu;
    sigma = 0.2;
    mu = 0.6;

    double x[1024];
    for(int i = 0; i < 1024;++i)
        x[i] = 0.1 + (double)i/10;


    for(int i = 0; i < 1024;++i)
        printf("%f\n",x[i]);

    double pdfResult = pdf(mu,sigma,x[0]);
    printf("%f\n",pdfResult);




    return EXIT_SUCCESS;
}

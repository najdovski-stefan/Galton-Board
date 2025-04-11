#include <stdlib.h>
#include <stdio.h>
#include "utils.h"

int main(int argc, char *argv[]){

    (void) argc;
    (void) argv;

    double sigma, mu;
    sigma = 1;
    mu = 0;
    double x = 0;

    double pdfResult = pdf(mu,sigma,x);

    printf("%f\n",pdfResult);

    return EXIT_SUCCESS;
}

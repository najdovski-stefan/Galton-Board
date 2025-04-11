#include "utils.h"

//#define PI 3.1415


float pdf(double mu, double sigma, double x) {
    return 1 / (sigma * sqrt(2*M_PI)) * exp(-(pow((x-mu),2))/pow((2*sigma),2));
}

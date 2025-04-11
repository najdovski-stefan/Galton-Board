#ifndef _UTILS_H
#define _UTILS_H

#include <math.h>


/**

Probability Density Function

// Tested on https://www.desmos.com/calculator

f\left(x\right)=\frac{1}{\sigma\cdot\sqrt{2\pi}}\cdot e^{\left(-\frac{\left(x-\mu\right)^{2}}{\left(2\cdot\sigma\right)^{2}}\right)}

E^-(x-\[Mu])^2/(2 \[Sigma]^2)/(Sqrt[2 \[Pi]] \[Sigma])

**/


float pdf(double mu,double sigma, double x);



#endif //_UTILS_H

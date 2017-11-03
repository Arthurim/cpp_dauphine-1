#ifndef DISCOUNT_FACTOR.HPP
#define DISCOUNT_FACTOR.HPP

#include <vector>
#include <iostream>
#include <iomanip>
#include <cmath>


double discount_factor(double rate, double maturity);
std::vector<double> discount_factor(const std::vector<double> r, const std::vector<double> m);

#endif
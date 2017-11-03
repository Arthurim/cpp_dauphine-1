
#include <iostream>
#include <iomanip>
#include <cmath>

#ifndef DISCOUNT_FACTOR.HPP
#define DISCOUNT_FACTOR.HPP

double discount_factor(double rate, double maturity);
std::vector<double> discount_factor(const std::vector<double> r, const std::vector<double> m);
void print_discount_factor(double rate, double maturity=1.2);

#endif
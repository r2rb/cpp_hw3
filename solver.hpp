//
// Created by owner on 4/30/2020.
//

#ifndef SOLVERA_SOLVER_HPP
#define SOLVERA_SOLVER_HPP
#include <iostream>
#include <complex>
using namespace std;

namespace solver{

    class RealVariable{
    private:
        double real;
    public:
        RealVariable(): real(){};
        RealVariable &operator^(int x);
        RealVariable &operator-(double x);
        RealVariable &operator-(const RealVariable &y);
        RealVariable &operator/(double x);
        RealVariable &operator/(const RealVariable &y);
        RealVariable &operator+(double x);
        RealVariable &operator+(const RealVariable &y);
        friend RealVariable &operator+(double x, const RealVariable &y);
        RealVariable &operator*(double x);
        RealVariable &operator*(const RealVariable &y);
        friend RealVariable &operator*(double x, const RealVariable &y);
        RealVariable &operator==(double x);
        RealVariable &operator==(const RealVariable &y);
        friend RealVariable &operator==(double x, const RealVariable &y);
    };
    double solve(RealVariable &y);

    class ComplexVariable{
    private:
        double real;
        double imag;
    public:
        ComplexVariable(): real(),imag(){};
        ComplexVariable &operator^(int x);
        ComplexVariable &operator-(const ComplexVariable &z);
        ComplexVariable &operator-(double x);
        ComplexVariable &operator-(std::complex<double> z);
        ComplexVariable &operator+(const ComplexVariable &z);
        ComplexVariable &operator+(double x);
        ComplexVariable &operator+(std::complex<double> z);
        friend ComplexVariable &operator+(double y, const ComplexVariable &z);
        ComplexVariable &operator*(const ComplexVariable &z);
        ComplexVariable &operator*(double x);
        ComplexVariable &operator*(std::complex<double> z);
        friend ComplexVariable &operator*(double x, const ComplexVariable &z);
        friend ComplexVariable &operator*(std::complex<double>y,const ComplexVariable &z);
        ComplexVariable &operator/(const ComplexVariable &z);
        ComplexVariable &operator/(double x);
        ComplexVariable &operator/(std::complex<double> z);
        ComplexVariable &operator==(const ComplexVariable &z);
        ComplexVariable &operator==(double x);
        ComplexVariable &operator==(std::complex<double> z);
    };
    std::complex<double> solve(ComplexVariable &y);
}
#endif //SOLVERA_SOLVER_HPP

//
// Created by owner on 4/30/2020.
//
#include <iostream>
#include <complex>
#include "solver.hpp"
using namespace std;
using solver::solve,solver::RealVariable, solver::ComplexVariable;

RealVariable &RealVariable::operator^(int x){
    return *this;
}

RealVariable &RealVariable::operator-(double x){
    return *this;
}

RealVariable &RealVariable::operator-(const RealVariable &y){
    return *this;
}

RealVariable &RealVariable::operator/(double x){
    return *this;
}

RealVariable &RealVariable::operator/(const RealVariable &y){
    return *this;
}

RealVariable &RealVariable::operator+(double x){
    return *this;
}

RealVariable &RealVariable::operator+(const RealVariable &y){
    return *this;
}

RealVariable &solver::operator+(double x, const RealVariable &y){
    RealVariable *ans= new RealVariable();
    return *ans;
}

RealVariable &RealVariable::operator*(double x){
    return *this;
}

RealVariable &RealVariable::operator*(const RealVariable &y){
    return *this;
}

RealVariable &solver::operator*(double x, const RealVariable &y){
    RealVariable *ans= new RealVariable();
    return *ans;
}

RealVariable &RealVariable::operator==(double x){
    return *this;
}

RealVariable &RealVariable::operator==(const RealVariable &y){
    return *this;
}

RealVariable &solver::operator==(double x, const RealVariable &y){
    RealVariable *ans= new RealVariable();
    return *ans;
}

double solver::solve(RealVariable &x){
    return 0;
}

ComplexVariable &ComplexVariable::operator^(int x){
    return *this;
}

ComplexVariable &ComplexVariable::operator-(const ComplexVariable &z){
    return *this;
}

ComplexVariable &ComplexVariable::operator-(double x){
    return *this;
}

ComplexVariable &ComplexVariable::operator-(std::complex<double>z){
    return *this;
}

ComplexVariable &ComplexVariable::operator+(const ComplexVariable &z){
    return *this;
}

ComplexVariable &ComplexVariable::operator+(double x){
    return *this;
}

ComplexVariable &ComplexVariable::operator+(std::complex<double>z){
    return *this;
}

ComplexVariable &solver::operator+(double y, const ComplexVariable &z){
    ComplexVariable *ans=new ComplexVariable();
    return *ans;
}

ComplexVariable &ComplexVariable::operator*(const ComplexVariable &z){
    return *this;
}

ComplexVariable &ComplexVariable::operator*(double x){
    return *this;
}

ComplexVariable &ComplexVariable::operator*(std::complex<double>z){
    return *this;
}

ComplexVariable &solver::operator*(double y, const ComplexVariable &z){
    ComplexVariable *ans=new ComplexVariable();
    return *ans;
}

ComplexVariable &solver::operator*(std::complex<double> y, const ComplexVariable &z){
    ComplexVariable *ans=new ComplexVariable();
    return *ans;
}

ComplexVariable &ComplexVariable::operator/(const ComplexVariable &z){
    return *this;
}

ComplexVariable &ComplexVariable::operator/(double x){
    return *this;
}

ComplexVariable &ComplexVariable::operator/(std::complex<double>z){
    return *this;
}

ComplexVariable &ComplexVariable::operator==(const ComplexVariable &z){
    return *this;
}

ComplexVariable &ComplexVariable::operator==(double x){
    return *this;
}

ComplexVariable &ComplexVariable::operator==(std::complex<double>z){
    return *this;
}

std::complex<double> solver::solve(ComplexVariable &y) {
    std::complex<double> ans;
    return ans;
}
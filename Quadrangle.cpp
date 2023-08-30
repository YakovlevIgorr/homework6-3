//
// Created by Macbook on 30.08.2023.
//
#include <iostream>
#include "Quadrangle.h"

    ///    Четырёхугольник:->параллелограмм




    Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D){
        this->a = a, this->b = b, this->c = c, this->d = d;
        this->A = A, this->B = B, this->C = C, this->D = D;
        set_data("Четырёхугольник:", 4);
    }
    bool Quadrangle::check(){
        if(sides == 4){
            if(A + B + C + D == 360) return true;
        }
        return false;
    }

    void Quadrangle::print_info() {
        Figure::print_info();
        std::cout << "Стороны: a=" <<  a << " b=" << b << " c=" <<  c << " d=" << d << "\n";
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n\n";
    }


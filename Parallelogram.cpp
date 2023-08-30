//
// Created by Macbook on 30.08.2023.
//

#include "Parallelogram.h"

///    Параллелограмм:->четырехугольник->прямоугольник


    Parallelogram::Parallelogram(int a, int b, int A, int B):
            Quadrangle(a,b,a,b,A,B,A,B){
        set_data("Параллелограмм:", 4);
    }
    bool Parallelogram::check(){
        if(Quadrangle::check()){
            if(a == c && b == d && A == C && B == D) return true;
        }
        return false;
    }
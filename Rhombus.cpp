//
// Created by Macbook on 30.08.2023.
//

#include "Rhombus.h"

///    Ромб:->параллелограмм->квадрат


    Rhombus::Rhombus(int a, int A, int B):Parallelogram(a, a, A, B){
        set_data("Ромб:", 4);
    }
    bool Rhombus::check( ) {
        if(Quadrangle::check()){
            if(a == b && b == c && c == d && A == C && B == D) return true;
        }
        return false;
    }

//
// Created by Macbook on 30.08.2023.
//

#include "Square.h"

///   Квадрат:->ромб


    Square::Square(int a, int A): Rhombus(a, A, A){
        set_data("Квадрат:", 4);
    }
    bool Square::check() {
        if(Quadrangle::check()){
            if(a == b && b == c && c == d && A == 90 && B == 90 && C == 90 && D == 90) return true;
        }
        return false;
    }
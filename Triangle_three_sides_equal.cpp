//
// Created by Macbook on 30.08.2023.
//

#include "Triangle_three_sides_equal.h"

///    Равносторонний треугольник:->Равнобедренный треугольник


    Triangle_three_sides_equal::Triangle_three_sides_equal(int a):
            Triangle_two_sides_equal(a, a, 60, 60, 60){
        set_data("Равносторонний треугольник:", 3);
    }
    bool Triangle_three_sides_equal::check() {
        if(Triangle::check()){
            if(a == b && a == b && A == 60 && B == 60 && C == 60)return true;
        }
        return false;
    }

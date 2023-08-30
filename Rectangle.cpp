//
// Created by Macbook on 30.08.2023.
//

#include "Rectangle.h"

///Прямоугольник:параллелограмм


    Rectangle::Rectangle(int a, int b, int A): Parallelogram(a, b, A, A){
        set_data("Прямоугольник:", 4);
    }
    bool Rectangle::check(){
        if(Quadrangle::check()){
            if(a == c && b == d && A == 90 && B == 90 && C == 90 && D == 90) return true;
        }
        return false;
    }


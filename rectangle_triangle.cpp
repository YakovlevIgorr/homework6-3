//
// Created by Macbook on 29.08.2023.
//

#include "rectangle_triangle.h"

/////    Прямоугольный треугольник:-> Треугольник

    Rectangle_triangle::Rectangle_triangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90) {
        set_data("Прямоугольный треугольник:", 3);
    }

    bool Rectangle_triangle::check(){
        if(Triangle::check()) {
            if(C == 90) {
                return true;
            }
        }

        return false;
    }

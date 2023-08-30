//
// Created by Macbook on 29.08.2023.
//

#pragma once
#include "Triangle.h"
//#include "Triangle.h"
//#include "figure.h"
//#include <iostream>

class Rectangle_triangle: public Triangle{
public:
    Rectangle_triangle(int a, int b, int c, int A, int B);//: Triangle(a, b, c, A, B, 90){};
    bool check() override;

};

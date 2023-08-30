//
// Created by Macbook on 30.08.2023.
//

#pragma once
#include "Rectangle.h"
class Rhombus:public Parallelogram{
public:
    Rhombus(int a, int A, int B);
    bool check() override;
};

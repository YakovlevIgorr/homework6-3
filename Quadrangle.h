//
// Created by Macbook on 30.08.2023.
//

#pragma once
#include "figure.h"
class Quadrangle:public Figure{
protected:
    int a, b, c, d;
    int A, B, C, D;
public:
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
    bool check() override;
    void print_info() override;
};

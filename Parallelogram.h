//
// Created by Macbook on 30.08.2023.
//

#pragma once
#include "Quadrangle.h"
class Parallelogram:public Quadrangle{
public:
    Parallelogram(int a, int b, int A, int B);
    bool check() override;
};

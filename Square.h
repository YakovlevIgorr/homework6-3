//
// Created by Macbook on 30.08.2023.
//

#pragma once
#include "Rhombus.h"
class Square:public Rhombus{
public:
    Square(int a, int A);
    bool check()override;
};

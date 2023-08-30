#include <iostream>
#include "Triangle_three_sides_equal.h"
#include "Square.h"

void print(Figure& figure){
    figure.print_info();

}

int main() {
    Figure figure;
    print(figure);

    Triangle obj_triangle(10,20,30,50,60,70);
    print(obj_triangle);

    Rectangle_triangle obj_rectangle_triangle(10, 20, 30, 50, 60);
    print(obj_rectangle_triangle);
//
    Rectangle_triangle obj_rectangle_triangle1(10,20,30,50,40);
    print(obj_rectangle_triangle1);
//
    Triangle_two_sides_equal triangleTwoSidesEqual(10,20,50,60,50);
    print(triangleTwoSidesEqual);
//
    Triangle_three_sides_equal triangleThreeSidesEqual(30);
    print(triangleThreeSidesEqual);

//
//
    Quadrangle quadrangle(10,20,30,40,50,60,70,80);
    print(quadrangle);
//
    Parallelogram parallelogram(20,30,30,40);
    print(parallelogram);

    Rectangle rectangle(10,20,90);
    print(rectangle);
//
    Rhombus rhombus(30,30,40);
    print(rhombus);

    Square square(20,90);
    print(square);


    return 0;
}


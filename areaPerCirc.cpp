// Copyright (c) 2025 Xiaohan All rights reserved.
//
// Created by: Xiaohan
// Date: Mar, 05, 2025
// This program is created to calculate the perimeter and the area of the circle

#include <cmath>
#include <iostream>
int main() {
    float radius, area, circumference;
    std::cout << "Enter the radius of the circle (cm): ";
    std::cin >> radius;
    area = M_PI * pow(radius , 2);
    circumference = 2 * M_PI * radius;
    std::cout << "\n";
    std::cout << "The area of the circle is: "
    << area << "cm^2" << std::endl;
    std::cout << "The circumference of the circle is: "
    << circumference << "cm" << std::endl;
}

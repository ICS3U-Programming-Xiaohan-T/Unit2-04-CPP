// Copyright (c) 2025 Xiaohan All rights reserved.
//
// Created by: Xiaohan
// Date: Mar, 05, 2025
// This program is created to calculate the perimeter and the area of the circle

#include <cmath>
#include <iostream>
int main() {
    // declare the variables
    float radius, area, circumference;
    // asking the radius from users
    std::cout << "Enter the radius of the circle (cm): ";
    // store the data under the variable of radius
    std::cin >> radius;
    // use following equation to process
    area = M_PI * pow(radius , 2);
    circumference = 2 * M_PI * radius;
    std::cout << "\n";
    // output the area and circumference
    std::cout << "The area of the circle is: "
    << area << "cm^2" << std::endl;
    std::cout << "The circumference of the circle is: "
    << circumference << "cm" << std::endl;
}

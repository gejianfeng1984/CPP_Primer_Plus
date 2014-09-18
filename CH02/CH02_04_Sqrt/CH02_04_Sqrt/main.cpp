//
//  main.cpp
//  CH02_04_Sqrt
//
//  Created by Ge Jian Feng on 14-9-19.
//  Copyright (c) 2014年 Ge Jian Feng. All rights reserved.
//

#include <iostream>
#include <cmath>

int main(int argc, const char * argv[])
{
    using namespace std;
    
    double area;
    
    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "That's the equivalent of a square " << side
         << " feet to the side." << endl;
    cout << "How fascinating!" << endl;
    
    return 0;
}


//
//  main.cpp
//  CH03_08_FloatNum
//
//  Created by Ge Jian Feng on 14-9-20.
//  Copyright (c) 2014年 Ge Jian Feng. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    using namespace std;
    
    cout.setf(ios_base::fixed, ios_base::floatfield);
    
    float tub = 10.0 / 3.0;
    double mint = 10.0 / 3.0;
    const float million = 1.0e6;
    
    cout << "tub = " << tub;
    cout << ", a million tubs = " << million * tub;
    cout << ",\nand then million tubs = ";
    cout << 10 * million * tub << endl;
    
    cout << "mint = " << mint << " and a million mints = ";
    cout << million * mint << endl;
    
    return 0;
}


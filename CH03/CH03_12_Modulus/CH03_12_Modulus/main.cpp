//
//  main.cpp
//  CH03_12_Modulus
//
//  Created by Ge Jian Feng on 14-9-20.
//  Copyright (c) 2014年 Ge Jian Feng. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    using namespace std;
    
    const int Lbs_per_stn = 14;
    int lbs;
    
    cout << "Enter your weight in pounds: ";
    cin >> lbs;
    
    int stone = lbs / Lbs_per_stn;
    int pounds = lbs % Lbs_per_stn;
    
    cout << lbs << " pounds are " << stone << " stone, " << pounds << " pound(s).\n";
    
    return 0;
}


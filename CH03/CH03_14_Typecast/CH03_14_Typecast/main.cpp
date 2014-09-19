//
//  main.cpp
//  CH03_14_Typecast
//
//  Created by Ge Jian Feng on 14-9-20.
//  Copyright (c) 2014年 Ge Jian Feng. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    using namespace std;
    
    int auks, bats, coots;
    
    auks = 19.99 + 11.99;
    
    bats = (int)19.99 + (int)11.99;
    coots = int(19.99) + int(11.99);
    
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coots = " << coots << endl;
    
    char ch = 'Z';
    cout << "The code for " << ch << " is ";
    cout << int(ch) << endl;
    cout << "Yes, the code is ";
    cout << static_cast<int>(ch) << endl;
    
    return 0;
}


//
//  main.cpp
//  CH02_03_GetInfo
//
//  Created by Ge Jian Feng on 14-9-19.
//  Copyright (c) 2014年 Ge Jian Feng. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    using namespace std;
    
    int carrots;
    
    cout << "How many carrots do you have?" << endl;
    cin >> carrots;
    carrots = carrots + 2;
    cout << "Now you have " << carrots << " carrots." << endl;
    
    return 0;
}


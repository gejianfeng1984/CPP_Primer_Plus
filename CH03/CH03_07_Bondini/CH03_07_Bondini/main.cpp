//
//  main.cpp
//  CH03_07_Bondini
//
//  Created by Ge Jian Feng on 14-9-20.
//  Copyright (c) 2014年 Ge Jian Feng. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    using namespace std;
    
    cout << "\aOperation \"HyperHype\" is now activated!\n";
    cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
    
    long code;
    
    cin >> code;
    
    cout << "\aYou enterd " << code << "...\n";
    cout << "\aCode verified! Proceed with Plan Z3!\n";
    
    return 0;
}


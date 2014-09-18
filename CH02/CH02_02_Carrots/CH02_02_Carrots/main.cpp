//
//  main.cpp
//  CH02_02_Carrots
//
//  Created by Ge Jian Feng on 14-9-19.
//  Copyright (c) 2014年 Ge Jian Feng. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    using namespace std;
    
    int carrots;
    
    carrots = 25;
    
    cout << "I have ";
    cout << carrots;
    cout << " carrots.";
    cout << endl;
    
    carrots = carrots - 1;
    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
    
    return 0;
}


//
//  main.cpp
//  CH02_06_Convert
//
//  Created by Ge Jian Feng on 14-9-19.
//  Copyright (c) 2014年 Ge Jian Feng. All rights reserved.
//

#include <iostream>

int stonetolb(int);

int main(int argc, const char * argv[])
{
    using namespace std;
    
    int stone;
    
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;
    
    return 0;
}

int stonetolb(int sts)
{
    return 14 * sts;
}
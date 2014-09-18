//
//  main.cpp
//  CH02_05_OurFunc
//
//  Created by Ge Jian Feng on 14-9-19.
//  Copyright (c) 2014年 Ge Jian Feng. All rights reserved.
//

#include <iostream>

void simon(int);

int main(int argc, const char * argv[])
{
    using namespace std;
    
    simon(3);
    
    cout << "Pick an integer: ";
    int count;
    cin >> count;
    simon(count);
    cout << "Done!" << endl;
    
    return 0;
}

void simon(int n)
{
    using namespace std;
    
    cout << "Simon says touch your toes " << n << " times." << endl;
}
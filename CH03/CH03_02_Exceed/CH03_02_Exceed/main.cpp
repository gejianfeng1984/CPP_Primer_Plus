//
//  main.cpp
//  CH03_02_Exceed
//
//  Created by Ge Jian Feng on 14-9-20.
//  Copyright (c) 2014年 Ge Jian Feng. All rights reserved.
//

#include <iostream>
#include <climits>

#define ZERO        0

int main(int argc, const char * argv[])
{
    using namespace std;
    
    short sam = SHRT_MAX;
    unsigned short sue = sam;
    
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl
         << "Add $1 to each account." << endl << "Now ";
    
    sam = sam + 1;
    sue = sue + 1;
    
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited.\nPoor Sam!" << endl;
    
    sam = ZERO;
    sue = ZERO;
    
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl;
    cout << "Take $1 from each account." << endl << "Now ";
    
    sam = sam - 1;
    sue = sue - 1;
    
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl << "Lucky Sue!" << endl;
    
    return 0;
}


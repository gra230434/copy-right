//
//  main.cpp
//  string
//
//  Created by WeiKevin on 2015/11/10.
//  Copyright © 2015年 WeiKevin. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
using namespace::std;


int main(int argc, const char * argv[]) {
    // insert code here...
    const int buffer=101;
    char stringA[buffer]={'0'},stringB[buffer]={'0'};
    
    
    while (cin>>stringA>>stringB) {
        if (strcmp(stringA, stringB)==0){
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }
    
    return 0;
}
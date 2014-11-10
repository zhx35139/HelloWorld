//
//  main.cpp
//  HelloWorld
//
//  Created by Lacus on 14-11-9.
//  Copyright (c) 2014年 Lacus. All rights reserved.
//

#include <iostream>
using namespace std;
int f(int x){
    if(x<0){
        return 0;
    }else if(x==0){
        return 1;
    }else{
        return x*f(x-1);
    }
}
int main() {
    int n = f(6);
    cout << "n="<<n<<endl;
    return 0;
}

//
//  defauleValue.cpp
//  HelloWorld
//
//  Created by Lacus on 14-11-10.
//  Copyright (c) 2014年 Lacus. All rights reserved.
//

#include <iostream>
#include <string.h>
using namespace std;
void hano(int n,char from,char temp,char to);


int main(){
    hano(3, 'A', 'B', 'C');
}
void hano(int n,char from,char temp,char to){
    if(1==n){
        cout<<from<<"=>"<<to<<endl;
    }else{
        hano(n-1, from, to, temp);
        hano(1,from,temp,to);
        hano(n-1, temp, from, to);
    }
}
//
//  main.cpp
//  mub
//
//  Created by 20141105047 on 15/11/25.
//  Copyright (c) 2015年 20141105047. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    double temp;
    
    cout << "请输入一个数：" << endl;
    
    cin >> temp;
    
    int i=1;
    
    int j=0;
    
    while (temp / i > 1)
    {
        j++;
        
        i = i * 10;
    }
    
    cout << "这个数整数部分有" << j << "位。" << endl;
}
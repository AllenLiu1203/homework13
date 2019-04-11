//
//  main.cpp
//  homework13
//
//  Created by 劉世翔 on 2019/3/29.
//  Copyright © 2019年 劉世翔. All rights reserved.
//

#include <iostream>
using namespace std ;

int main (int argc,char** argv)
{
    int gender,age;
    cout<<"輸入你的性別年齡: 男生為1，女生為2"<< endl;
    cout<<"性別:";
    cin>>gender;
    cout<<"年齡:";
    cin>>age;
    if(gender==1||age<18)
    {
        cout<<"已成年，可以結婚"<<endl;
    }
    else if (gender==1||age>=18)
    {
        cout<<"未成年，不可結婚"<<endl;
    }
    else if (gender==2||age<16)
    {
        cout<<"已成年，可以結婚"<<endl;
    }
    else if (gender==2||age>=16)
    {
        cout<<"未成年，不可結婚"<<endl;
    }
    system("pause");
    return 0;
}

//
//  main.cpp
//  beyond
//
//  Created by shandan on 15/12/1.
//  Copyright (c) 2015年 shandan. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    int a[3]={1,2,3};
    printf("%d  %d  %d \n",a[0],a[1],a[2]);
    int b[5];
    int i;
    for(i=0;i<100;i++)
    {
        b[i]=i;
    }
    printf("%d  %d  %d \n",a[0],a[1],a[2]);
    printf("%x    %x \n",a,b);
    return 0;
}

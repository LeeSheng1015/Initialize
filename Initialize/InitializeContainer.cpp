//
//  InitializeContainer.cpp
//  Initialize
//
//  Created by Lee Sheng on 2020/7/23.
//  Copyright © 2020 Lee Sheng. All rights reserved.
//

#include <stdio.h>
#include <cstdio>
struct TaxOn {
    TaxOn(){
        printf("(no argument)\n");
    }
    TaxOn(int a){
        printf("int:%d\n", a);
    }
    TaxOn(char b){
        printf("char:%c\n", b);
    }
    TaxOn(float c){
        printf("float:%f\n", c);
    }
};
int main(){
    TaxOn t1;
    TaxOn t2{'c'};
    TaxOn t3{65537};
    TaxOn t4{6.02e23f};
    TaxOn t5('f');
    TaxOn t6={'l'};
    TaxOn t7{};
    return 0;
}

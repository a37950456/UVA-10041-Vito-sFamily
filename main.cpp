//
//  main.cpp
//  UVA10041_Vito's family  取中位數
//
//  Created by Tina Tsai on 2017/12/3.
//  Copyright © 2017年 Tina Tsai. All rights reserved.
/*Sample Input
2
2 2 4
3 2 4 6
Sample Output
2 4
 */
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>    //使用內建的sort涵式
using namespace std;
int main(int argc, const char * argv[]) {
    int n_cases;
    int r;
    int s[505];   //儲存門牌的陣列 最多500
    int house ,d;
    
    while( scanf( "%d", &n_cases ) != EOF ){
        for( int i = 0 ; i < n_cases ; i++ ){
            scanf("%d",&r);
            for(int j = 0 ; j < r; j++){
                scanf("%d",&s[j]);   //存值
            }
            sort(s,s+r);
                
            d=0;
            house = s[r/2];  //取中位數
            for(int j = 0 ; j < r; j++){
                d +=abs(house-s[j]);  //累加（中位數-門牌號）題目所求
            }
            printf("%d\n",d);
        }
    }
    return 0;
}

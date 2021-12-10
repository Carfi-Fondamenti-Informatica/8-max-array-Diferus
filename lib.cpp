#include "lib.h"
float max_num(const float num[],int d){
    num[d];
    float max=num[0];
    for (int i = 0; i < d; i++) {
        if(num[i]>max){
            max=num[i];
        }
    }
    return max;
}



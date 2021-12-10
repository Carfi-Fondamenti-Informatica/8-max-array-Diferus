#include <iostream>
#include "Lib.h"
using namespace std;

int main() {
    int dim=0;
    cin >> dim;
    if (dim <=0){
        return 0;
    }else{
    float num[dim];
    for (int i = 0; i < dim; i++) {
        cin >> num[i];
        }
        max_num(num,dim);
       cout << max_num(num,dim) <<endl;
    return 0;
    }
}

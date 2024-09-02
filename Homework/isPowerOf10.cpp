#include <iostream>
#include <cmath>

bool ispowerof10(int n){
    if(n<=0) return false;
    double res=log10(n);
    return (res==floor(res));
}

#include "func.hpp"
#include "layer.hpp"
#include <iostream>


func::func(dual input) {
    
}

dual f(dual x, dual y, dual z) {
    return x*y*z + exp_d(x*z);
}

int main() {
    dual a(3, 0);
    dual b(2, 0);
    dual c(0, 0);
    dual epsilon(0, 1);
    cout<<((a+epsilon)*b).real<<"\n";
    cout<<((a+epsilon)*b).im<<"\n";
    cout<<f(a+epsilon,b,c).real<<"\n";
    cout<<f(a+epsilon,b,c).im<<"\n";
    //sigmoid s;
    return 0;
}
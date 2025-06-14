#include "func.hpp"
#include <iostream>

func::func(dual input) {
    
}

int main() {
    dual a(3, 0);
    dual b(2, 0);
    dual epsilon(0, 1);
    cout<<((a+epsilon)*b).real<<"\n";
    cout<<((a+epsilon)*b).im<<"\n";
    return 0;
}
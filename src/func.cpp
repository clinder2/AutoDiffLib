#include "func.hpp"

func::func(int n, ...) {
    va_list arglist;
    va_start(arglist, n);
}
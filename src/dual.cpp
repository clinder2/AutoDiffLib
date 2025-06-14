#include "dual.hpp"

dual sin_d(dual x) {
    dual d;
    d.real=sin(x.real);
    d.im = x.im*cos(x.real);
    return d;
}

dual cos_d(dual x) {
    dual d;
    d.real=cos(x.real);
    d.im = -x.im*sin(x.real);
    return d;
}

dual exp_d(dual x) {
    dual d;
    d.real=exp(x.real);
    d.im = x.im*exp(x.real);
    return d;
}

dual log_d(dual x) {
    dual d;
    d.real=log(x.real);
    d.im = x.real/x.im;
    return d;
}

dual pow_d(dual x, int n) {
    dual d;
    d.real=pow(x.real, n);
    d.im = x.im*n*pow(x.real, n-1);
    return d;
}
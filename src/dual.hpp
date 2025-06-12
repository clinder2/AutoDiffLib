#include <math.h>

struct dual {
    float real;
    float im;
    dual(float _real, float _im) {
        real = _real;
        im=_im;
    }
    dual operator+(dual a) {
        return dual(real+a.real, im+a.im);
    }
    dual operator*(dual a) {
        return dual(real*a.real, im*a.real+real*a.im);
    }
};
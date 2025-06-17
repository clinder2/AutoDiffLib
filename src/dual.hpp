#include <math.h>
#include <vector>
#include <unsupported/Eigen/CXX11/Tensor>

using namespace std;

struct dual {
    float real;
    float im;
    dual() {
        real=1;
        im=0;
    }
    dual(float _real, float _im) {
        real = _real;
        im=_im;
    }
    dual operator+(dual a) {
        return dual(real+a.real, im+a.im);
    }
    dual operator-(dual a) {
        return dual(real-a.real, im-a.im);
    }
    dual operator*(dual a) {
        return dual(real*a.real, im*a.real+real*a.im);
    }
    dual operator/(dual a) {
        return dual(real/a.real, (im*a.real-real*a.im)/(a.real*a.real));
    }
};

/* namespace Eigen {
    template<>
    struct NumTraits<dual> {

    };
} */

// format: implementing existing functions with _d to indicate dual arithmetic

dual sin_d(dual x);

dual cos_d(dual x);

dual exp_d(dual x);

dual log_d(dual x);

dual pow_d(dual x, int n);

// composite function with dual inputs will compute output and first-order
// derivative
#include "layer.hpp"

float sigmoid::forward(Eigen::Tensor<dual, 2> x) {
    return x(0,0).real;
}
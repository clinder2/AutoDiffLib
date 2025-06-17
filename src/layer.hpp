#ifndef dual
#define dual
#include "dual.hpp"
#endif
#include <Eigen/Core>
//#include <unsupported/Eigen/CXX11/Tensor>
#include <variant>

/* struct tensor {
    vector<int> dims; //num inputs, x_1, x_2,...
    variant<Eigen::Tensor<dual, 2>, Eigen::Tensor<dual, 3>, Eigen::Tensor<dual, 4> > data;
    tensor(vector<int>& _dims, variant<Eigen::Tensor<dual, 2>, Eigen::Tensor<dual, 3>, Eigen::Tensor<dual, 4> > _data) {
        dims=_dims;
        switch (dims.size()) {
            case 2: //1D feature tensor
                data=_data;
                break;
            case 3: //2D feature tensor
                data=_data;
                break;
            case 4: //3D feature tensor
                data=_data;
                break;
        }
    }
}; */

class layer {
    public:
        int in;
        int out;
        dual state;
        virtual ~layer()=0;
        float forward(Eigen::Tensor<dual, 2> x); //1d feature vector
        float forward(Eigen::Tensor<dual, 3> x); //2d feature vector
        float forward(Eigen::Tensor<dual, 4> x); //3d feature vector
};

class sigmoid : public layer {
    public:
        float forward(Eigen::Tensor<dual, 2> x);
        float forward(Eigen::Tensor<dual, 3> x);
        float forward(Eigen::Tensor<dual, 4> x);
};
#include "func.hpp"
#include <Eigen/Core>
//#include <unsupported/Eigen/CXX11/Tensor>
#include <variant>

struct tensor {
    vector<int> dims; //num inputs, x_1, x_2,...
    variant<Eigen::Tensor<float, 2>, Eigen::Tensor<float, 3>, Eigen::Tensor<float, 4> > data;
    tensor(vector<int>& _dims, variant<Eigen::Tensor<float, 2>, Eigen::Tensor<float, 3>, Eigen::Tensor<float, 4> > _data) {
        dims=_dims;
        switch (dims.size()) {
            case 2: //1D feature tensor
                //data = Eigen::Tensor<float, 2>();
                data=_data;
                break;
            case 3: //2D feature tensor
                //data = Eigen::Tensor<float, 3>();
                data=_data;
                break;
            case 4: //3D feature tensor
                //data = Eigen::Tensor<float, 4>();
                data=_data;
                break;
        }
    }
};

class layer {
    public:
        int in;
        int out;
        dual state;
        virtual ~layer()=0;
        float forward();
};

class sigmoid : public layer {
    public:
        float forward();
};
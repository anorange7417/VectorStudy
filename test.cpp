#include <Eigen/Dense>
#include <iostream>

using std::cout;
using std::endl;

using mat3d = Eigen::Matrix<double, 3, 3>;

#ifndef I3
#define I3 Eigen::MatrixXd::Identity(3,3);
#endif

int main(){
    mat3d i3 = I3;

    Eigen::Matrix<double, 5, 5> i5 = Eigen::MatrixXd::Identity(5,5);


    cout<<"I3 = "<<endl<<i3<<endl;

    cout<<endl<<"I5 = "<<endl<<i5<<endl;
    return 0;
}
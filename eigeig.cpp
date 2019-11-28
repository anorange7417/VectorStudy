#include <iostream>
#include <Eigen/Dense>
#ifndef I3
#define I3 Eigen::MatrixXd::Identity(3,3)
#endif

using mat3 = Eigen::Matrix<double,3,3>;

using v3 = Eigen::Vector3d;

v3 doubleVec(v3 in);
void doubleVec(Eigen::Ref<Eigen::Vector3d> out,
 const Eigen::Ref<const Eigen::Vector3d> in);
int main(){
    Eigen::Matrix<double, 5,1> woojung;
    woojung<<1,2,3,4,5;

    Eigen::Matrix<double,15,1> vec15d;

    for(int i=0;i<15;i++){
        vec15d(i) = i;
    }

    std::cout<<"15d vec:\n" << vec15d.transpose()<<std::endl;

    vec15d.segment(3,6).setZero();

    std::cout<<"sement operation:\n"<<vec15d.transpose()<<std::endl;

    Eigen::Matrix<double,5,5> diag = Eigen::MatrixXd::Identity(5,5);

    diag.block(2,0,3,3).setIdentity();

    Eigen::Matrix<double, 3,3> sub;

    sub<<1,2,3,
    4,5,6,
    7,8,9;

    diag.block(0,2,3,3) = sub;

    mat3 another = I3;

    another(0,0) = 2;
    another(2,2) +=4;
    std::cout<<another.inverse()<<std::endl;

    v3 dum;
    dum<<1,2,3;
    std::cout<<doubleVec(dum).transpose()<<std::endl;

    v3 dumout;
    doubleVec(dumout,dum);
    std::cout<<"doubled!\n"<<dumout.transpose()<<std::endl;
    return 0;
}

v3 doubleVec(v3 in){
    v3 out;
    out = 2*in;
    return out;
}

void doubleVec(Eigen::Ref<Eigen::Vector3d> out,
 const Eigen::Ref<const Eigen::Vector3d> in){
     //this is better!
     out = 2*in;
     
 }
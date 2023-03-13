#include <pybind11/pybind11.h>
#include <iostream>
#include <Eigen/Dense>
namespace py = pybind11;

int add(int i, int j) {
    return i + j;
}

int sub(int i, int j) {
    return i - j;
}

void matrix()
{
  Eigen::MatrixXd m(2,2);
  m(0,0) = 3;
  m(1,0) = 2.5;
  m(0,1) = -1;
  m(1,1) = m(1,0) + m(0,1);
  std::cout << m << std::endl;
}

PYBIND11_MODULE(function, m) {
    m.doc() = "pybind11 example plugin";

    m.def("add", &add, "A function that add two numbers");

    m.def("sub", &sub, "A function that sub two numbers");

    m.def("matrix", &matrix, "matrix function");
}
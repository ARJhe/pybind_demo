#include <pybind11/pybind11.h>
#include "functions.h"

namespace py = pybind11;

PYBIND11_MODULE(functions, m){
    m.doc() = "Simple Class";
    m.def("greet", greet, "Welcome");
    py::class_<Functions>(m, "Functions")
        .def(py::init())
        .def("add", &Functions::add);
}
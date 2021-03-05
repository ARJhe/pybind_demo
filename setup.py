from setuptools import setup, Extension

functions_module = Extension(
    name='functions',
    sources=['functions_wrapper.cpp'],
    include_dirs=[r'pybind11-master\include']
)

setup(ext_modules=[functions_module])
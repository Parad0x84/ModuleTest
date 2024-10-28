cmake_minimum_required(VERSION 3.29)


project(ModuleTest)
    add_executable(ModuleTest)
    target_sources(ModuleTest
    PRIVATE
        src/main.cpp
        src/other_test.cpp
    PRIVATE
        FILE_SET my_modules
        TYPE CXX_MODULES
        FILES src/test.ixx)

    target_compile_features(ModuleTest PUBLIC cxx_std_23)


    # These two are probably just some noise, but they were present in original project. So I'll leave them here
    set_property(TARGET ModuleTest PROPERTY INTERPROCEDURAL_OPTIMIZATION_RELEASE TRUE)
    set_property(TARGET ModuleTest PROPERTY MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

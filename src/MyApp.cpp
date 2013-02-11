#include "MyApp.h"


#include <iostream> // for std::cout, std::endl;

namespace mynamespace
{

MyApp::MyApp()
:
    active_(true)
{
}

int MyApp::Run(int argc, char** argv)
{
    std::cout << "Hello, world." << std::endl;
    return 0;
}

MyApp::~MyApp()
{
    // destructor, do clean-up actions
}

}; // namespace

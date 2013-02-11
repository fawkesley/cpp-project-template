#include "logging.h"
LOG_INIT("MyApp");

#include "MyApp.h"


namespace mynamespace
{

MyApp::MyApp()
:
    active_(true)
{
}

int MyApp::Run(int argc, char** argv)
{
    LOG_DEBUG("Hello, world");
    return 0;
}

MyApp::~MyApp()
{
    // destructor, do clean-up actions
}

}; // namespace

#pragma once

namespace mynamespace
{

class MyApp
{
public:
    MyApp();
    ~MyApp();
    int Run(int argc, char** argv);

private:
    bool      active_;
};

}; // namespace

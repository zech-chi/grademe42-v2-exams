#pragma once

#include <string>
#include <iostream>
#include <map>
#include "ATarget.hpp"

using namespace std;

class TargetGenerator
{
    private:
        map<string, ATarget*> store;
    public:
        TargetGenerator();
        ~TargetGenerator();
        void learnTargetType(ATarget *target);
        void forgetTargetType(string const &type);
        ATarget* createTarget(string const &type);
};
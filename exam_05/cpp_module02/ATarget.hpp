#pragma once
#include "ASpell.hpp"
#include <iostream>
#include <string>
using namespace std;
class ASpell;

class ATarget
{
    protected:
        string  type;
    
    public:
        ATarget(string const &type);
        virtual ~ATarget() {};
        string const &getType() const;
        void    setType(string const &type);
        virtual ATarget *clone() const = 0;
        void getHitBySpell(ASpell const &spell) const;
};

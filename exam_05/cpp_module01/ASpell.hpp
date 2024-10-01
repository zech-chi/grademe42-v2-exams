#pragma once
#include "ATarget.hpp"
#include <iostream>
#include <string>
using namespace std;
class ATarget;

class ASpell
{
    protected:
        string  name;
        string  effects;
    
    public:
        ASpell(string const &name, string const &effects);
        virtual ~ASpell() {};
        string const &getName() const;
        string const &getEffects() const;
        virtual ASpell *clone() const = 0;
        void    launch(ATarget const &target) const;
};
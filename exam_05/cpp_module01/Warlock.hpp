#pragma once

#include <string>
#include <iostream>
#include "ASpell.hpp"
#include <map>
using namespace std;

class Warlock
{
    private:
        string  name;
        string  title;
        map<string, ASpell*> store;
    
    public:
        Warlock(string const &name, string const &title);
        ~Warlock();
        string const &getName() const;
        string const &getTitle() const;
        void setTitle(string const &title);
        void introduce() const;

        void    learnSpell(ASpell *spell);
        void    forgetSpell(string name);
        void    launchSpell(string name, ATarget const &target);
};

#pragma once
#include <string>
#include <iostream>
#include <map>
#include "ASpell.hpp"

using namespace std;

class SpellBook
{
    private:
        map<string, ASpell*> store;

    public:
        SpellBook() {};
        ~SpellBook() {};

        void learnSpell(ASpell *spell);
        void forgetSpell(string const &name);
        ASpell* createSpell(string const &name);
};
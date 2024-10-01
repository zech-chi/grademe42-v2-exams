#pragma once

#include <string>
#include <iostream>

using namespace std;

class Warlock
{
    private:
        string  name;
        string  title;
    
    public:
        Warlock(string const &name, string const &title);
        ~Warlock();
        string const &getName() const;
        string const &getTitle() const;
        void setTitle(string const &title);
        void introduce() const;
};

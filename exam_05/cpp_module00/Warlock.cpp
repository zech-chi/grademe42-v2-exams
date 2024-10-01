#include "Warlock.hpp"

Warlock::Warlock(string const &name, string const &title) : name(name), title(title) {
    cout << name << ": This looks like another boring day.\n";
}

Warlock::~Warlock() {
    cout << name << ": My job here is done!\n";
}

string const &Warlock::getName() const {return (name);}

string const &Warlock::getTitle() const {return (title);}

void Warlock::setTitle(string const &title) {this->title = title;}

void Warlock::introduce() const {
    cout << name << ": I am " << name << ", " << title << "!\n";
}

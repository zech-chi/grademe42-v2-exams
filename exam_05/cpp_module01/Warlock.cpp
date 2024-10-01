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

void    Warlock::learnSpell(ASpell *spell)
{
    if (spell) {
        store[spell->getName()] = spell->clone();
    }
}

void    Warlock::forgetSpell(string name) {
    map<string, ASpell*>::iterator  it = store.find(name);
    if (it != store.end()) {
        delete it->second;
        store.erase(it->first);
    }
}

void    Warlock::launchSpell(string name, ATarget const &target) {
    map<string, ASpell*>::iterator  it = store.find(name);
    if (it != store.end()) {
        it->second->launch(target);
    }
}
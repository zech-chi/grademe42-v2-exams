#include "SpellBook.hpp"

void SpellBook::learnSpell(ASpell *spell) {
    if (spell)
        store[spell->getName()] = spell->clone();
}


void SpellBook::forgetSpell(string const &name) {
    map<string, ASpell*>::iterator it = store.find(name);
    if (it != store.end()) {
        delete it->second;
        store.erase(it->first);
    }
}

ASpell* SpellBook::createSpell(string const &name) {
    map<string, ASpell*>::iterator it = store.find(name);
    if (it != store.end()) {
        return (it->second->clone());
    }
    return (NULL);
}

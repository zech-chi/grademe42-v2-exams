#include "ASpell.hpp"

ASpell::ASpell(string const &name, string const &effects) : name(name), effects(effects) {}

string const &ASpell::getName() const {return (name);}

string const &ASpell::getEffects() const {return (effects);}

void    ASpell::launch(ATarget const &target) const {target.getHitBySpell(*this);}

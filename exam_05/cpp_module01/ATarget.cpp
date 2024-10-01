#include "ATarget.hpp"

ATarget::ATarget(string const &type) : type(type) {}

string const &ATarget::getType() const {return (type);}

void ATarget::getHitBySpell(ASpell const &spell) const {
    cout << type << " has been " << spell.getEffects() << "!\n";
}

void    ATarget::setType( string const & type ) { this->type = type; }

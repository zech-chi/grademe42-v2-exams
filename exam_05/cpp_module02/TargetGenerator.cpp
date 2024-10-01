#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator () {}
TargetGenerator::~TargetGenerator () {}

void TargetGenerator::learnTargetType(ATarget *target) {
    if (target)
        store[target->getType()] = target->clone();
}

void TargetGenerator::forgetTargetType(string const &type) {
    map<string, ATarget*>::iterator it = store.find(type);
    if (it != store.end()) {
        // delete it->second;
        store.erase(it->first);
    }
}

ATarget* TargetGenerator::createTarget(string const &type) {
    map<string, ATarget*>::iterator it = store.find(type);
    if (it != store.end()) {
        return (it->second->clone());
    }
    return (NULL);
}
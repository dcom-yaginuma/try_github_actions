#include "../include/calc.h"

calc::calc() : value(0) {}

calc::calc(int value) : value(value) {}

calc::~calc() {}

int calc::add(int value) { 
    return (this->value += value); }

int calc::minus(int value) { return (this->value -= value); }

int calc::multiple(int value) { return (this->value *= value); }

int calc::division(int value) { return (this->value /= value); }

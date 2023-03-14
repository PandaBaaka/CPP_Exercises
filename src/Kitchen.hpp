#pragma once

#include "../lib/Unit.hpp"

#include <algorithm>
#include <list>
#include <string>

class Kitchen
{
public:
    const Unit& register_unit(Unit unit);
    const Unit* find_unit(const std::string& unit);

private:
    std::list<Unit> _units;
};

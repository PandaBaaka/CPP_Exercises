#include "Kitchen.hpp"

const Unit& Kitchen::register_unit(Unit unit)
{
    auto it = _units.emplace(_units.end(), unit);
    return *it;
}

const Unit* Kitchen::find_unit(const std::string& unit)
{
    // const auto it = std::find(_units.begin(), _units.end(), unit);
    // return it != _units.end() ? &(*it) : nullptr;
    return nullptr;
}
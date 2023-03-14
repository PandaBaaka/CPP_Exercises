#include "Kitchen.hpp"

const Unit& Kitchen::register_unit(Unit unit)
{
    _units.push_back(unit);
    return _units.back();
}

const Unit* Kitchen::find_unit(const std::string& unit)
{
    // for (auto it = _units.begin(); it != _units.end(); ++it)
    // {
    //     if (it->name == unit)
    //     {
    //         return &(*it);
    //     }
    // }
    // return nullptr;

    auto it = std::find_if(_units.begin(), _units.end(), [unit](const Unit& u) { return u.name == unit; });
    if (it != _units.end())
    {
        return &(*it);
    }
    return nullptr;
}
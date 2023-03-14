#include "Kitchen.hpp"

const Unit& Kitchen::register_unit(Unit unit)
{
    _units.push_back(unit);
    return _units.back();
}

const Unit* Kitchen::find_unit(const std::string& unit) const
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

const Ingredient& Kitchen::register_ingredient(Ingredient ingredient)
{
    _ingredients.push_back(ingredient);
    return _ingredients.back();
}

const Ingredient* Kitchen::find_ingredient(const std::string& ingredient) const
{
    auto it =
        std::find_if(_ingredients.begin(), _ingredients.end(),
                     [ingredient](const Ingredient& i)
                     {
                         return i.name.size() == ingredient.size() &&
                                std::equal(i.name.begin(), i.name.end(), ingredient.begin(),
                                           [](auto a, auto b) { return std::tolower(a) == std::tolower(b); });
                     });
    if (it != _ingredients.end())
    {
        return &(*it);
    }
    return nullptr;
}
#pragma once

#include "../lib/Ingredient.hpp"
#include "../lib/Unit.hpp"

#include <algorithm>
#include <list>
#include <string>

class Kitchen
{
public:
    const Unit& register_unit(Unit unit);
    const Unit* find_unit(const std::string& unit) const;

    const Ingredient& register_ingredient(Ingredient ingredient);
    const Ingredient* find_ingredient(const std::string& ingredient) const;

private:
    std::list<Unit>       _units;
    std::list<Ingredient> _ingredients;
};

#pragma once

#include "Card.hpp"

#include <string>

enum class SpellType
{
    Normal,
    Equip,
    Continuous,
    QuickPlay,
    Field
};

std::string to_string(SpellType type)
{
    switch (type)
    {
    case SpellType::Normal:
        return "Normal";
    case SpellType::Equip:
        return "Equip";
    case SpellType::Continuous:
        return "Continuous";
    case SpellType::QuickPlay:
        return "Quick-Play";
    case SpellType::Field:
        return "Field";
    }
}

class Spell : public Card
{
public:
    Spell(std::string id, std::string name, SpellType spell_type)
        : Card(id, CardType::Spell),
          _spell_type{spell_type}
    {
        set_name(name);
    };

    SpellType get_spell_type() const { return _spell_type; }
    CardType get_type() const { return Card::get_type(); }

private:
    SpellType _spell_type = {};
};
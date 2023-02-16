#pragma once

#include "Card.hpp"

#include <string>

enum class Attribute
{
    Dark,
    Divine,
    Earth,
    Fire,
    Light,
    Water,
    Wind
};

std::string to_symbol(Attribute attribute)
{
    switch (attribute)
    {
    case Attribute::Dark:
        return u8"闇";
    case Attribute::Divine:
        return u8"神";
    case Attribute::Earth:
        return u8"地";
    case Attribute::Fire:
        return u8"炎";
    case Attribute::Light:
        return u8"光";
    case Attribute::Water:
        return u8"水";
    case Attribute::Wind:
        return u8"風";
    }
}

class Monster : public Card
{
public:
    Monster(std::string id, std::string name, Attribute attribute, std::string description, int atk, int def)
        : Card{id, CardType::Monster},
          _attribute{attribute},
          _atk{atk},
          _def{def}
    {
        set_name(name);
        set_description(description);
    };

    Attribute get_attribute() const { return _attribute; }
    int get_atk() const { return _atk; }
    int get_def() const { return _def; }

private:
    Attribute _attribute = {};
    int _atk = 0;
    int _def = 0;
};
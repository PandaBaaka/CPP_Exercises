#pragma once

#include "Card.hpp"

#include <string>

enum class TrapType
{
    Normal,
    Continuous,
    Counter
};

std::string to_string(TrapType type)
{
    switch (type)
    {
    case TrapType::Normal:
        return "Normal";
    case TrapType::Continuous:
        return "Continuous";
    case TrapType::Counter:
        return "Counter";
    }
}

class Trap : public Card
{
public:
    Trap(std::string id, std::string name, TrapType trap_type)
        : Card(id, CardType::Trap),
          _trap_type{trap_type}
    {
        set_name(name);
        _symbol = u8"罠";
    };

    TrapType get_trap_type() const { return _trap_type; }

private:
    TrapType _trap_type = {};
};
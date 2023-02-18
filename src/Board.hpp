#pragma once

#include "Card.hpp"

#include <vector>

class Board
{
public:
    bool put(Card card)
    {
        _board.push_back(card);
        return true;
    }

private:
    std::vector<Card> _board;
    int _monsters = 0;
    int _traps_or_spells = 0;
};
#pragma once

#include "Card.hpp"

#include <vector>

class Board
{
public:
    bool put(Card card) { return true; }

private:
    std::vector<Card> _board;
};
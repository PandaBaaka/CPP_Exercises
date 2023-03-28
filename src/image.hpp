#pragma once

#include "../lib/lib.hpp"
#include "pixels.hpp"

#include <array>
#include <cstddef>
#include <functional>
#include <iostream>
#include <stdint.h>
#include <string>

template <typename P, size_t W, size_t H>
class Image
{
public:
    Image<P, W, H>(const std::function<P(const size_t i, const size_t j)>& functor)
    {
        // todo
    }
};
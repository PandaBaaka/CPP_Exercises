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
struct Image
{
public:
    Image() = default;

    Image(const P& pix)
    {
        for (size_t j = 0; j < H; ++j)
        {
            for (size_t i = 0; i < W; ++i)
            {
                _pixels[j][i] = pix;
            }
        }
    }

    Image(const std::function<P(const size_t, const size_t)>& functor)
    {
        for (size_t j = 0; j < H; ++j)
        {
            for (size_t i = 0; i < W; ++i)
            {
                (*this)(i, j) = functor(i, j);
            }
        }
    }

    P& operator()(const size_t i, const size_t j) { return _pixels[j][i]; }

    const P& operator()(const size_t i, const size_t j) const { return _pixels[j][i]; }

private:
    std::array<std::array<P, W>, H> _pixels;
};

template <typename P, size_t W, size_t H>
Image<P, W, H> operator+(const Image<P, W, H>& img1, const Image<P, W, H>& img2)
{
    Image<P, W, H> out = {};

    for (unsigned long j = 0; j < H; ++j)
    {
        for (unsigned long i = 0; i < W; ++i)
        {
            out(i, j) = img1(i, j) + img2(i, j);
        }
    }

    return out;
}
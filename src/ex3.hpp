#pragma once

#include <type_traits>

template <unsigned int i>
constexpr unsigned int fibonacci()
{
    if constexpr (i < 2)
        return 1;
    else
        return fibonacci<i - 1>() + fibonacci<i - 2>();
}

template <typename T1, typename T2>
constexpr bool content_of_same_type()
{
    return std::is_same<typename T1::value_type, typename T2::value_type>::value;
}
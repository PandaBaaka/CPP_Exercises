#include "ex1.hpp"

void pairwise_concatenate(std::list<std::list<int>>& list1, std::list<std::list<int>>& list2)
{
    auto it1 = list1.begin();
    for (auto it2 = list2.begin(); it2 != list2.end(); ++it2)
    {
        concatenate(*it1, *it2);
        *it1++;
    }
}

void pairwise_concatenate(std::list<std::list<int>>& list1, std::list<std::list<int>>&& list2)
{
    auto it1 = list1.begin();
    for (auto it2 = list2.begin(); it2 != list2.end(); ++it2)
    {
        concatenate(*it1, std::move(*it2));
        *it1++;
    }
}
#pragma once
#include<string>
#include <vector>

struct Items {
std::string name {};
int price{};

Items ( std::string y, int x)
    : name (y), price(x)
{
}
};
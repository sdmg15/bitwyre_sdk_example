#include <iostream>
#include "rest/public/Market.hpp"

using namespace Bitwyre::Rest;
auto main() -> int {
    auto r = Public::Market::get();

    std::cout << r.markets.size() << "\n";

    for(const auto& m : r.markets) {
        std::cout << m << "\n";
    }
}
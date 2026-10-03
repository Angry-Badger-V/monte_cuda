#pragma once

#include <cstdint>

namespace mc::config {

struct Config {
    std::uint64_t paths;
    std::uint64_t seed;
};

} // namespace mc::config
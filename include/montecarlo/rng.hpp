#pragma once

#include <cstdint>
#include <random>

namespace mc::rng {

class Rng {
public:
    explicit Rng(std::uint64_t seed)
        : engine_(seed), distribution_(0.0, 1.0) {}
    
    double next() {
        return distribution_(engine_);
    }

private:
    std::mt19937_64 engine_;
    std::normal_distribution<double> distribution_;
    
};

} // namespace mc::rng
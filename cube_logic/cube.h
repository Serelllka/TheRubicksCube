#pragma once
#include<vector>
#include <cstddef>
#include "block.h"

class cube
{
public:
    explicit cube(size_t size);
    void generate_cube();
    void generate_texture(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    size_t size() const;
    std::vector<std::vector<block>>& operator[] (size_t);

    [[maybe_unused]] bool check();

private:
    size_t size_;
    std::vector<std::vector<std::vector<block>>> matrix3d_;
};
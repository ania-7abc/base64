// base64.hpp
#pragma once

#include <cstdint>
#include <string>
#include <vector>

namespace Base64
{

auto encode(const std::vector<uint8_t> &data) -> std::string;
auto encode(const std::string &text) -> std::string;
auto decode(const std::string &base64) -> std::vector<uint8_t>;
auto decode_to_string(const std::string &base64) -> std::string;

}; // namespace Base64

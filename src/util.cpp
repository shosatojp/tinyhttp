#include "util.hpp"
#include <algorithm>
#include <string>

namespace util {
std::string trim(const std::string& s, const std::string& ws) noexcept {
    size_t i = s.find_first_not_of(ws);
    size_t j = s.find_last_not_of(ws);
    return i <= j ? s.substr(i, j - i + 1) : "";
}
}  // namespace util
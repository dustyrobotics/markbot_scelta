// Copyright (c) 2017 Vittorio Romeo
// License: Academic Free License ("AFL") v. 3.0
// AFL License page: http://opensource.org/licenses/AFL-3.0
// http://vittorioromeo.info | vittorio.romeo@outlook.com

#pragma once

#include <type_traits>

// Usage of C++17: nested `namespace`.
namespace scelta::meta
{
    template <typename T>
    struct always_false
    {
        using type = std::false_type;
    };

    template <typename T>
    using always_false_t = typename always_false<T>::type;

    template <typename T>
    inline constexpr always_false_t<T> always_false_v{};
}

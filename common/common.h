//
// Created by ziwei on 2023/5/14.
//

#ifndef ALOHA_COMMON_H
#define ALOHA_COMMON_H

#include <iostream>
#include <vector>

template<typename T>
void print(const T &t) {
    std::cout << t << std::endl;
}

template<typename T, typename Value, typename Filter>
T Max(T begin, T end, const Value &value, const Filter &filter) {
    if (begin == end) {
        return end;
    }
    while (!filter(*begin)) {
        begin++;
    }
    auto max_value = value(*begin);
    T max_iter = begin;
    for (T it = begin; it < end; it++) {
        if (!filter(*it)) {
            continue;
        }
        auto cur = value(*it);
        if (cur > max_value) {
            max_value = cur;
            max_iter = it;
        }
    }
    return max_iter;
}

template<typename T, typename Value>
T Max(T begin, T end, const Value &value) {
    auto filter = [](const auto &a) { return true; };
    return Max(begin, end, value, filter);
}

template<typename T, typename Filter>
T MaxAfterFilter(T begin, T end, const Filter &filter) {
    auto value = [](const auto &a) { return a; };
    return Max(begin, end, value, filter);
}

template<typename T>
T Max(T begin, T end) {
    auto value = [](const auto &a) { return a; };
    return Max(begin, end, value);
}

#endif //ALOHA_COMMON_H

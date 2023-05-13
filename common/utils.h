//
// Created by ziwei on 2023/5/14.
//

#ifndef ALOHA_UTILS_H
#define ALOHA_UTILS_H

#include "common.h"

template<typename T>
typename std::vector<T>::const_iterator BinarySearch(const std::vector<T> &vec, const T &elem) {
    if (vec.empty()) {
        return vec.cend();
    }
    auto begin = vec.cbegin();
    auto end = vec.cend();
    auto mid = begin + (end - begin) / 2;
    while (mid != end) {
        if (elem < *mid) {
            end = mid;
        } else if (elem > *mid) {
            begin = mid + 1;
        } else {
            return mid;
        }
        mid = begin + (end - begin) / 2;
    }
    return mid - 1;
}

#endif //ALOHA_UTILS_H

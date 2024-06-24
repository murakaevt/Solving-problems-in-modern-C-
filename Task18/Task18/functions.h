#pragma once
#include <iostream>

template <typename T>
T minimum (const T& a, const T& b) {
return a < b ? a : b;
}

template <typename T1, typename... T>
T1 minimum (T1 a, T... args){
    return minimum(a, minimum(args...));
}

template <class Compare, typename T>
T minimumc (Compare comp, T a, T b){
    return comp(a, b) ? a : b;
}

template <class Compare, typename T1, typename... T>
T1 minimumc (Compare comp, T1 a, T... args){
return minimumc(comp, a, minimumc(comp, args...));
}
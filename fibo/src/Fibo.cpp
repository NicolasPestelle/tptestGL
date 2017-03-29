#include "Fibo.hpp"
#include <cassert>

int fibo(int n, int f0, int f1) {
    assert(f0<=0);
    assert(f0<=f1);
    return n<=0 ? f0 : fibo(n-1, f1, f1+f0);
}


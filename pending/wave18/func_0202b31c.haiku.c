/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" void func_0202b344(uint8_t *p, int idx, int *arg);

struct Num {
    int v;
    Num(int x) : v(x) {}
    ~Num() {}
};

inline int diff(const Num &a, int b) {
    return a.v - b;
}

typedef struct {
    int a;
    int b;
    int c;
} Ent;

extern "C" void func_0202b31c(uint8_t *p, int idx, int val) {
    int buf[4];
    Ent *arr;
    int n;
    buf[0] = 1;
    buf[2] = val;
    buf[1] = val;
    arr = (Ent *)(p + 0xc0);
    n = arr[idx].a;
    arr[idx].a = diff(n, n);
    func_0202b344(p, idx, buf);
}

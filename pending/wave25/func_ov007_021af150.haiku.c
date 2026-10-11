/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
extern void *data_ov007_021c9708;
extern uint8_t data_ov007_021c56d0[];
void func_ov005_02197b74(void *self, int a, int b);
void *func_ov007_021af150(void *self, void *arg);
}

typedef int (*VFn)(void *);

struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }

extern "C" void *func_ov007_021af150(void *self, void *arg)
{
    void *obj = data_ov007_021c9708;
    void **vt = (void **)(*(void **)obj);
    int r = ((VFn *)vt)[13](obj);
    func_ov005_02197b74(self, 1, r);
    *(void **)self = (void *)data_ov007_021c56d0;
    *(void **)((uint8_t *)self + 0x158) = arg;
    uint32_t *p = (uint32_t *)arg;
    int n = (int)p[1];
    p[1] = (uint32_t)diff(n, n);
    *((uint8_t *)self + 0x105) = 8;
    return self;
}

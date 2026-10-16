#include "ffc/types.h"
extern int func_02081210(int a, int b);
extern void func_02068580(void *self, int v);
typedef void (*Fn)(void *, void *);
typedef struct { int b; int c; int d; } S;
void func_02068514(uint8_t *self, S s)
{
    int v = 0;
    int out[9];
    if (s.b != v) {
        void *o = *(void **)(self + 0x20);
        (*(Fn **)o)[1](out + 5, o);
        v = func_02081210(out[5] << 12, s.b);
    }
    func_02068580(self, v);
}

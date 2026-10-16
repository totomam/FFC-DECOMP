#include "ffc/types.h"
extern long long func_0209a76c(int a, int b);
extern void func_ov012_021cfd14(void *p);
extern void func_02021338(int a);
typedef struct { uint8_t pad[0x2dc]; int v; } S;
void func_ov012_021cfd8c(S *self, int x) {
    int8_t r = func_0209a76c(x, 3) >> 32;
    if (r < 0) r += 3;
    if (self->v != r) {
        self->v = r;
        func_ov012_021cfd14(self);
        func_02021338(0xb7);
    }
}

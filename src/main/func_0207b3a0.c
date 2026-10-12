#include "ffc/types.h"

extern int func_0208a67c(void *self);
extern int func_0208a658(void *self);
extern void *func_0207ac88(int b, int size, void *cb, void *self, int idx);
extern int func_0207aa88(int a, void *p, int size, int cur);
extern void func_02087890(void *p, int size);
extern void func_0208a65c(void *self, int idx, void *p);
extern void func_0207b374(void);

int func_0207b3a0(void *self, int idx, int a, int b)
{
    uint8_t *base = (uint8_t *)self;
    int cnt, cur, next, diff;
    int *slot;
    void *ptr;

    if (func_0208a67c(self) != 0) {
        return 1;
    }
    cnt = func_0208a658(self);
    slot = (int *)(base + ((*(int *)(base + 0x38) + idx) << 2));
    cur = slot[15];
    if ((uint32_t)idx < (uint32_t)(cnt - 1)) {
        next = slot[16];
    } else {
        next = *(int *)(base + 8);
    }
    diff = next - cur;
    if (b == 0) {
        return 0;
    }
    ptr = func_0207ac88(b, diff + 0x20, (void *)func_0207b374, self, idx);
    if (ptr == 0) {
        return 0;
    }
    if (diff != func_0207aa88(a, ptr, diff, cur)) {
        return 0;
    }
    func_02087890(ptr, diff);
    func_0208a65c(self, idx, ptr);
    return 1;
}

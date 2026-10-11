#include "ffc/types.h"

extern void func_ov000_02168784(void *p, void *q);

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

int func_ov001_02186c10(void *self, S s) {
    func_ov000_02168784(*(void **)((char *)self + 4), &s);
    return ((int (*)(void *, int, uint32_t, uint32_t))(*(void **)((char *)self + 0x488)))(
        self, 0, s.a, *(uint32_t *)((char *)self + 0x494));
}

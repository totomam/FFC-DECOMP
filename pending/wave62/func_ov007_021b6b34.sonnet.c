#include "ffc/types.h"
typedef struct { uint32_t a, b; } Pair;
extern void *func_0205681c(uint32_t n);
extern void *func_ov007_021b5ae4(void *p, void *q);
extern void *func_ov001_0218dde0(void *o, int x);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov007_021c6d6c;
void func_ov007_021b6b34(uint8_t *self) {
    void *p;
    *(uint32_t *)(self + 0xc0) = 100000000;
    *(uint32_t *)(self + 0xc4) = 0;
    p = func_0205681c(0x140);
    if (p != 0) p = func_ov007_021b5ae4(p, self + 0xc0);
    func_02056bc0(func_ov001_0218dde0(self, 1), p);
    *(Pair *)(self + 0xb0) = data_ov007_021c6d6c;
}

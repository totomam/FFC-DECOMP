#include "ffc/types.h"
typedef struct { uint32_t a, b, c, d; } Src;
extern void func_ov001_0218dff4(void *, int);
extern void func_02087620(void *object);
extern void func_0209cf5c(void *, int, int, void *, void *);
extern void func_02036750(void *);
extern uint32_t data_020ae6d4;
extern uint32_t data_ov001_0219456c;
extern uint32_t data_ov001_021945dc;
extern Src data_ov001_02194524;
extern void func_ov001_02189ba8(void);
extern void func_ov001_02189b7c(void);
void *func_ov001_02189ae4(uint8_t *self) {
    uint32_t *p;
    uint32_t *q;
    uint32_t a, b;
    func_ov001_0218dff4(self, 0);
    p = (uint32_t *)(self + 0xb0);
    *(uint32_t *)(self + 0xb0) = (uint32_t)&data_020ae6d4;
    q = p + 4;
    p[1] = 0; p[2] = 0; p[3] = 0; p[4] = 0;
    q[1] = 0; q[2] = 0;
    func_02087620(p + 7);
    *(uint32_t *)self = (uint32_t)&data_ov001_0219456c;
    *(uint32_t *)(self + 0xb0) = (uint32_t)&data_ov001_021945dc;
    *(uint32_t *)(self + 0xf0) = 0;
    func_0209cf5c(self + 0x104, 2, 0x2d8, func_ov001_02189b7c, func_ov001_02189ba8);
    func_02036750(self + 0x6cc);
    self[0x724] = 0;
    a = data_ov001_02194524.c;
    b = data_ov001_02194524.d;
    *(uint32_t *)(self + 0xf4) = a;
    *(uint32_t *)(self + 0xf8) = b;
    return self;
}

#include "ffc/types.h"
typedef struct { uint32_t a, b; } P;
typedef struct { uint32_t d, e; uint8_t f; uint32_t g; } R;
extern void func_02056c9c(void *, int);
extern uint32_t data_ov003_02179a58;
extern P data_ov003_02179a68;
void *func_ov003_0214f18c(uint8_t *self, uint32_t a, uint32_t b, uint32_t c, ...) {
    
    func_02056c9c(self, 0);
    *(void **)self = &data_ov003_02179a58;
    uint32_t t = c;
    *(uint32_t *)(self + 0x88) = a;
    *(uint32_t *)(self + 0x8c) = b;
    *(uint32_t *)(self + 0x90) = t;
    *(uint32_t *)(self + 0x94) = ((R *)(&c + 1))->d;
    *(uint32_t *)(self + 0x98) = ((R *)(&c + 1))->e;
    *(uint8_t *)(self + 0xb4) = 0;
    *(uint8_t *)(self + 0xb5) = ((R *)(&c + 1))->f;
    *(uint32_t *)(self + 0xc4) = 0x1b;
    *(uint32_t *)(self + 0xc8) = 0x1b;
    *(uint32_t *)(self + 0xcc) = ((R *)(&c + 1))->g;
    *(P *)(self + 0x80) = data_ov003_02179a68;
    return self;
}

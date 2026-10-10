#include "ffc/types.h"

extern void func_02056c9c(void *p, int x);
extern char data_ov003_0217a9ec[];

void *func_ov003_021663ac(void *p, uint32_t a, uint32_t b, uint32_t c) {
    func_02056c9c(p, 0);
    *(void **)p = data_ov003_0217a9ec;
    *(uint32_t *)((uint8_t *)p + 0x80) = a;
    *(uint32_t *)((uint8_t *)p + 0x84) = b;
    *(uint32_t *)((uint8_t *)p + 0x88) = c;
    *(uint32_t *)((uint8_t *)p + 0x8c) = 0;
    return p;
}

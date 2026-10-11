#include "ffc/types.h"

extern void func_0200b65c(void *p, uint32_t v);
typedef struct { uint32_t w[5]; } S;

void func_0200ac24(uint8_t *p, uint32_t a, S s) {
    *(uint32_t *)(p + 0xa4) = a;
    *(uint32_t *)(p + 0xac) = s.w[0];
    *(uint32_t *)(p + 0xb0) = s.w[1];
    *(uint32_t *)(p + 0x12c) = s.w[2];
    func_0200b65c(p + 0x134, s.w[3]);
    func_0200b65c(p + 0x140, s.w[4]);
}

#include "ffc/types.h"

extern void func_ov003_02157b6c(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);

typedef struct {
    uint8_t pad0[0x0c];
    uint32_t w0c;
    uint8_t pad1[0x80 - 0x10];
    uint32_t p80;
    uint16_t h84;
    uint16_t h86;
    uint16_t h88;
    uint16_t h8a;
    uint32_t p8c;
} S;

void func_ov003_0215ba00(S *p) {
    uint32_t tmp[5];
    p->h8a = p->h8a + 1;
    switch (p->h88) {
    case 0:
        func_ov003_02157b6c(p->p80, p->h84, 1, p->p8c, 0, 0, 0);
        p->h88 = p->h88 + 1;
        break;
    case 1:
        if (p->h8a >= p->h86) {
            func_ov003_02157b6c(p->p80, 1, 1, 0x1000, 0, 0, 0);
            p->w0c = (p->w0c & ~0xFFu) | 2;
        }
        break;
    }
}

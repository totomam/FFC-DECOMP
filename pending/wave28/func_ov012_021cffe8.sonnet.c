#include "ffc/types.h"

extern void func_02069694(void *p, uint32_t a, uint32_t b);
extern void func_02069670(void *p, uint32_t a, uint32_t b, uint32_t c);

typedef struct {
    uint8_t pad0[0xEC];
    uint32_t a[5];
    uint8_t pad1[0x218 - 0xEC - 20];
    uint32_t b[5];
    uint8_t pad2[0x25C - 0x218 - 20];
    uint32_t h;
    uint8_t pad3[0x2E5 - 0x25C - 4];
    uint8_t i;
} S;

void func_ov012_021cffe8(S *s) {
    uint32_t idx;
    func_02069694(s, s->h, 4);
    func_02069694(s, s->h, 2);
    uint32_t v = s->i; idx = 0;
    if (v < 5) idx = v;
    func_02069670(s, s->h, 4, s->b[idx]);
    func_02069670(s, s->h, 2, s->a[idx]);
}

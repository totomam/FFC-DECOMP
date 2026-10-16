#include "ffc/types.h"
typedef struct { uint32_t a, b; } P;
extern P data_ov007_021c3bc4;
extern void func_020211d4(int, int);
typedef struct {
    uint8_t pad0[0xc]; uint32_t f;
    uint8_t pad1[0x80-0x10]; P p;
    uint32_t *q; uint32_t pad2; uint32_t state;
} S;
void func_ov007_021a1e94(S *s) {
    s->p = data_ov007_021c3bc4;
    switch (s->state) {
    case 0:
        func_020211d4(0x45, 0);
        *s->q = 0;
        break;
    case 1:
        *s->q = 3;
        s->f = (s->f & ~0xff) | 2;
        break;
    case 2:
        *s->q = 4;
        s->f = (s->f & ~0xff) | 2;
        break;
    }
}

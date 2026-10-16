#include "ffc/types.h"
typedef struct { uint32_t x, y, z; } T;
extern void func_020694ac(void *p, int a, int b);
extern char data_ov008_021a7b70[];
void *func_ov008_0219ab9c(uint8_t *p, uint32_t arg) {
    uint8_t i = 0;
    func_020694ac(p, 0, 0);
    *(void **)p = data_ov008_021a7b70;
    { T *a = (T *)(p + 0xcc); a->x = 0; a->y = 0; a->z = 0; }
    { T *b = (T *)(p + 0xe0); b->x = 0; b->y = 0; b->z = 0; }
    p[0x104] = 0;
    p[0x105] = 0;
    *(uint32_t *)(p + 0x10c) = 0;
    p[0x110] = 0;
    p[0x111] = 0xff;
    p[0x112] = 0;
    *(uint32_t *)(p + 0x118) = arg;
    for (i = 0; i < 8; i++) p[0xfc + i] = 0;
    return p;
}

#include "ffc/types.h"

extern void *func_ov010_021bd420(void *self, int a, int b, int c, int d);
extern uint8_t data_ov010_021d163c[];

typedef struct {
    uint8_t a;
    uint8_t b;
    uint8_t c;
    uint8_t d;
    uint8_t e;
} S5;

void *func_ov010_021bdf7c(void *self, int a, int b, int c, S5 s)
{
    uint8_t *p = (uint8_t *)self;
    uint32_t i;

    func_ov010_021bd420(self, a, b, c, 0);
    *(uint8_t **)p = data_ov010_021d163c;
    *(uint32_t *)(p + 0x108) = 0;
    *(uint32_t *)(p + 0x10c) = 0;
    *(uint32_t *)(p + 0x110) = 0;
    *(uint32_t *)(p + 0x114) = 0;
    *(uint32_t *)(p + 0x118) = 0;
    *(uint32_t *)(p + 0x11c) = 0;
    *(uint32_t *)(p + 0x124) = 0;
    p[0x134] = s.a;
    p[0x135] = s.e;
    for (i = 0; i < 3;) {
        uint32_t v = i;
        *(uint32_t *)(p + 0x128 + i * 4) = v;
        i++;
    }
    return self;
}

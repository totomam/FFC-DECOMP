#include "ffc/types.h"

typedef struct {
    uint8_t pad0[0x20];
    uint8_t active;
    uint8_t rest[0x58 - 0x21];
    uint32_t w58;
} S;

typedef struct {
    int16_t a;
    int16_t b;
    int16_t c;
    uint16_t d;
    uint8_t f;
    uint8_t pad;
} D;

extern D data_0213940c[4];

void func_020231d4(S *p)
{
    if (p->active) {
        int i;
        uint8_t *lr = (uint8_t *)p + 0x22;
        p->w58 = 0;
        for (i = 0; i < 4; i++) {
            int off = i * 10;
            uint8_t *r2 = (uint8_t *)p + off;
            int16_t *r6 = (int16_t *)(lr + off);
            uint8_t f = r2[0x2a];
            data_0213940c[i].f = f;
            data_0213940c[i].a = r6[0];
            data_0213940c[i].b = r6[1];
            data_0213940c[i].c = r6[2];
            data_0213940c[i].d = *(uint16_t *)(r2 + 0x28);
            if (f) {
                uint32_t hi = (uint32_t)i << 30;
                uint32_t v = (((uint32_t)(*(int16_t *)(r2 + 0x26) >> 3) << 22) >> 2)
                    | ((((uint32_t)(*(int16_t *)(r2 + 0x24) >> 3)) << 22) >> 12)
                    | ((uint32_t)(*(int16_t *)(r2 + 0x22) >> 3) & 0x3ff);
                *(uint32_t *)0x040004c8 = hi | v;
                *(uint32_t *)0x040004cc = hi | *(uint16_t *)(r2 + 0x28);
                p->w58 |= (1u << i);
            } else {
                *(uint32_t *)0x040004cc = (uint32_t)i << 30;
            }
        }
        p->active = 0;
    }
}

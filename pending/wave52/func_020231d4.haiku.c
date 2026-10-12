#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x22];
    int16_t a;
    int16_t b;
    int16_t c;
    uint16_t d;
    uint8_t f;
} E;

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
        uint32_t i;
        p->w58 = 0;
        for (i = 0; i < 4; i++) {
            E *e = (E *)((uint8_t *)p + i * 10);
            uint8_t f = e->f;
            data_0213940c[i].f = f;
            data_0213940c[i].a = e->a;
            data_0213940c[i].b = e->b;
            data_0213940c[i].c = e->c;
            data_0213940c[i].d = e->d;
            if (f) {
                uint32_t v = (((uint32_t)(e->c >> 3) << 22) >> 2)
                    | ((((uint32_t)(e->b >> 3)) << 22) >> 12)
                    | ((uint32_t)(e->a >> 3) & 0x3ff);
                *(uint32_t *)0x040004c8 = (i << 30) | v;
                *(uint32_t *)0x040004cc = (i << 30) | e->d;
                p->w58 |= (1u << i);
            } else {
                *(uint32_t *)0x040004cc = i << 30;
            }
        }
        p->active = 0;
    }
}

#include "ffc/types.h"

extern void func_0205ffd0(void *p);
extern uint32_t func_02063568(const void *object);

typedef struct { uint8_t b0; uint32_t w4, w8, wc, w10, w14, w18; } Ent;
typedef struct { uint32_t w0, w4, w8, wc, w10, w14, w18, w1c, w20, w24; } Elem;
typedef struct { uint32_t x, y; } Pair;

#define ENT(p) ((Ent *)*(uint8_t **)((uint8_t *)(p) + 0x60))
#define ELEM(p) ((Elem *)*(uint8_t **)((uint8_t *)(p) + 0x24))

void func_02064978(void *self) {
    uint8_t *a = (uint8_t *)self;
    uint32_t i;
    uint32_t n;
    uint32_t ip = 0xFFFFFFFFu >> 17;
    uint32_t v58, v5c;

    *(uint32_t *)(a + 0x44) = 0xFFFFFFFFu;
    *(uint32_t *)(a + 0x48) = 0;
    *(uint32_t *)(a + 0x3c) = 0xFFFFFFFFu;

    n = *(uint32_t *)(a + 0x28);
    i = 0;
    if (n != 0) {
        do {
            ENT(a)[i].wc = n - i - 1;
            ENT(a)[i].w4 = 0;
            ENT(a)[i].b0 = 0;
            ENT(a)[i].w8 = 0;
            ENT(a)[i].w10 = 0;
            ENT(a)[i].w14 = 0;
            ENT(a)[i].w18 = 0;

            ELEM(a)[i].w8 = 0;
            ELEM(a)[i].wc = *(uint32_t *)(a + 0x54);
            v58 = *(uint32_t *)(a + 0x58);
            v5c = *(uint32_t *)(a + 0x5c);
            ELEM(a)[i].w10 = v58;
            ELEM(a)[i].w14 = v5c;
            ELEM(a)[i].w20 = (ELEM(a)[i].w20 & 0xc0003fffu) |
                             (((ip - v5c) << 16) >> 2);
            ELEM(a)[i].w0 = (ELEM(a)[i].w0 & 0xfffffcffu) | 0x200u;
            ELEM(a)[i].w0 = (ELEM(a)[i].w0 & 0xefffffffu) |
                            ((((uint32_t)*(uint8_t *)(a + 0x2f)) << 31) >> 3);
            ELEM(a)[i].w0 = (ELEM(a)[i].w0 & 0xdfffffffu) |
                            ((((uint32_t)*(uint8_t *)(a + 0x30)) << 31) >> 2);
            i++;
        } while (i < (n = *(uint32_t *)(a + 0x28)));
    }

    if (*(uint8_t *)(a + 0x2e) != 0) {
        i = 0;
        if (n != 0) {
            do {
                if (((uint32_t *)*(uint8_t **)(a + 0x74))[i] != 0) {
                    func_0205ffd0(*(void **)(*(uint8_t **)(*(uint8_t **)(a + 0x14) + 0x18) + 0x18));
                    ((uint32_t *)*(uint8_t **)(a + 0x74))[i] = i;
                }
                i++;
            } while (i < *(uint32_t *)(a + 0x28));
        }
    }

    i = 0;
    if (func_02063568(a + 0x18) != 0) {
        do {
            ((Pair *)*(uint8_t **)(a + 0x68))[i].x = i;
            ((Pair *)*(uint8_t **)(a + 0x68))[i].y = i;
            i++;
        } while (i < func_02063568(a + 0x18));
    }
}

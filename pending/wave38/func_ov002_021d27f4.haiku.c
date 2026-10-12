#include "ffc/types.h"

typedef struct {
    uint32_t w[6];
} Arr6;

typedef struct {
    uint32_t a[5];
    Arr6 b;
    uint32_t c;
} Loc;

void func_ov002_021d27f4(uint8_t *p) {
    Loc l;
    int i;

    l.a[0] = 0;
    l.a[1] = 0;
    l.a[2] = 0;
    l.a[3] = 0;
    l.a[4] = 0;
    l.c = 0;
    for (i = 0; i < 6; i++) {
        l.b.w[i] = i;
    }

    *(uint32_t *)(p + 0xd4) = l.a[0];
    *(uint32_t *)(p + 0xd8) = l.a[1];
    *(uint32_t *)(p + 0xdc) = l.a[2];
    *(uint32_t *)(p + 0xe0) = l.a[3];
    *(uint32_t *)(p + 0xe4) = l.a[4];
    *(Arr6 *)(p + 0xe8) = l.b;
    *(uint32_t *)(p + 0x100) = l.c;
}

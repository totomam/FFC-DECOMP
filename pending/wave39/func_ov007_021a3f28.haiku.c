#include "ffc/types.h"

extern int32_t data_ov007_021c3bdc[];

typedef struct { int32_t x; int32_t y; } Vec;

void func_ov007_021a3f28(uint8_t *p, int32_t flag)
{
    void *o;
    void *q;
    Vec w[2];

    if (flag) {
        o = *(void **)(p + 0xb0);
        ((void (*)(void *, int, int))((void **)*(void **)o)[14])(o, 2, 0);
        q = *(void **)(p + 0xb4);
        if (q != 0) {
            w[1].x = *(int32_t *)(p + 0xa8) + data_ov007_021c3bdc[0x4c / 4];
            w[1].y = *(int32_t *)(p + 0xac) + data_ov007_021c3bdc[0x50 / 4];
            ((void (*)(void *, Vec))((void **)*(void **)q)[3])(q, w[1]);
        }
    } else {
        o = *(void **)(p + 0xb0);
        ((void (*)(void *, int, int))((void **)*(void **)o)[14])(o, 1, 0);
        q = *(void **)(p + 0xb4);
        if (q != 0) {
            w[0].x = *(int32_t *)(p + 0xa8) + data_ov007_021c3bdc[0x34 / 4];
            w[0].y = *(int32_t *)(p + 0xac) + data_ov007_021c3bdc[0x38 / 4];
            ((void (*)(void *, Vec))((void **)*(void **)q)[3])(q, w[0]);
        }
    }
}

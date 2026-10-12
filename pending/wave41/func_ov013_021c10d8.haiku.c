#include "ffc/types.h"

typedef struct {
    int32_t a;
    int32_t b;
} Pair;

extern Pair data_ov013_021c4984[];
extern int32_t data_ov013_021c4898[];

typedef int (*fn0_t)(void *);
typedef void (*fn2_t)(void *, Pair);

void func_ov013_021c10d8(uint8_t *p)
{
    int32_t count = 0;
    int i;

    for (i = 0; i < 3; i++) {
        uint32_t off = i * 8;
        void *o;
        int32_t n;
        Pair pr, pr2;

        if (p[off + 0x8c] == 0) {
            continue;
        }
        o = *(void **)(p + off + 0x90);
        n = count;
        count = n + 1;
        if (((fn0_t)((void **)*(void **)*(void **)((uint8_t *)o + 0x80))[12])(*(void **)((uint8_t *)o + 0x80)) != 0) {
            continue;
        }
        pr = data_ov013_021c4984[n];
        ((fn2_t)((void **)*(void **)*(void **)((uint8_t *)o + 0x80))[3])(*(void **)((uint8_t *)o + 0x80), pr);
        pr2.a = pr.a + data_ov013_021c4898[9];
        pr2.b = pr.b + data_ov013_021c4898[10];
        ((fn2_t)((void **)*(void **)*(void **)((uint8_t *)o + 0x84))[3])(*(void **)((uint8_t *)o + 0x84), pr2);
    }
}

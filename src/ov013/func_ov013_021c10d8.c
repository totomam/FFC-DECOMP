#include "ffc/types.h"

typedef struct {
    int32_t a;
    int32_t b;
} Pair;

extern Pair data_ov013_021c4984[];
extern int32_t data_ov013_021c4898[];

typedef int (*fn0_t)(void *);
typedef void (*fn2_t)(void *, Pair);

typedef struct { uint8_t on; uint8_t pad[3]; void *obj; } Slot;
typedef struct { uint8_t pad[0x8c]; Slot s[3]; } Top;
void func_ov013_021c10d8(Top *p)
{
    int32_t count = 0;
    uint32_t i;

    for (i = 0; i < 3; i++) {
                void *o;
        int32_t n;
        Pair pr2, pr;

        if (p->s[i].on == 0) {
            continue;
        }
        n = count++;
        o = p->s[i].obj;
        if (((fn0_t)((void **)*(void **)*(void **)((uint8_t *)o + 0x80))[12])(*(void **)((uint8_t *)o + 0x80)) != 0) {
            continue;
        }
        pr.a = data_ov013_021c4984[n].a;
        pr.b = data_ov013_021c4984[n].b;
        ((fn2_t)((void **)*(void **)*(void **)((uint8_t *)o + 0x80))[3])(*(void **)((uint8_t *)o + 0x80), pr);
        pr2.a = pr.a + data_ov013_021c4898[9];
        pr2.b = pr.b + data_ov013_021c4898[10];
        ((fn2_t)((void **)*(void **)*(void **)((uint8_t *)o + 0x84))[3])(*(void **)((uint8_t *)o + 0x84), pr2);
    }
}

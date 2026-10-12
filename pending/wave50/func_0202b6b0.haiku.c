#include "ffc/types.h"

extern void func_02021538(int32_t a, int32_t b, int32_t c, int32_t d);

typedef struct {
    int32_t key;
    int32_t a;
    int32_t b;
    int32_t xy;
} Ent;

void func_0202b6b0(uint8_t *p, int32_t x) {
    int32_t r4;
    uint32_t i;
    int32_t r7;
    Ent *arr;
    int32_t e;
    if (*(uint32_t *)(p + 0x168) == 0) {
        return;
    }
    r7 = *(int32_t *)(p + 0x74);
    r4 = x + r7;
    for (i = 0; i < *(uint32_t *)(p + 0x168); i++) {
        arr = *(Ent **)(p + 0x164);
        e = arr[i].key;
        if (e <= r4) {
            e += r7;
            if (r4 < e) {
                func_02021538(arr[i].a, arr[i].b, arr[i].xy >> 16, (arr[i].xy << 16) >> 16);
            }
        }
    }
}

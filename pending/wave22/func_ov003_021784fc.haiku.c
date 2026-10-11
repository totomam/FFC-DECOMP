#include "ffc/types.h"

typedef struct {
    int32_t a;
    int32_t b;
} Pair;

typedef struct {
    uint8_t pad[0x1c];
    int32_t x;
    int32_t y;
} Inner;

void func_ov003_021784fc(uint8_t *p, Pair s) {
    volatile int32_t t[4];
    Inner *q;
    int32_t b = s.b;
    *(int32_t *)(p + 0x70) = s.a;
    *(int32_t *)(p + 0x74) = b;
    if (b > 256) {
        b = 256;
    }
    q = *(Inner **)(p + 0x20);
    q->x = -s.a;
    t[2] = -s.a;
    t[3] = -b;
    t[0] = -s.a;
    t[1] = -b;
    q->y = -b;
}

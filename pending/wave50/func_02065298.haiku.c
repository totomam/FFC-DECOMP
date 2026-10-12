#include "ffc/types.h"

typedef struct {
    int32_t a;
    int32_t b;
    int32_t c;
    int32_t d;
} V4;

void func_02065298(uint8_t *self, int idx, V4 v)
{
    V4 t;
    uint8_t *elem;
    t = v;
    if (self[0x2f]) {
        t.a = -t.a;
        t.b = -t.b;
    }
    if (self[0x30]) {
        t.c = -t.c;
        t.d = -t.d;
    }
    elem = (uint8_t *)((void **)(*(void ***)(self + 0x74))[idx])[1];
    *(int16_t *)(elem + 6) = (int16_t)(t.a >> 4);
    *(int16_t *)(elem + 0xe) = (int16_t)(t.b >> 4);
    *(int16_t *)(elem + 0x16) = (int16_t)(t.c >> 4);
    *(int16_t *)(elem + 0x1e) = (int16_t)(t.d >> 4);
}

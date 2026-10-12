#include "ffc/types.h"
typedef struct { uint32_t pad[3]; uint32_t *buf; uint32_t count; uint32_t cap; } Queue;
typedef struct { uint32_t a, b, c, d; } Args;
extern Queue data_0213e0a0;
extern uint32_t data_0213e0ac;
extern void func_0200d5d4(void *object, Args *p, uint32_t x);
void func_02055830(Args s) {
    uint32_t z = 0;
    uint32_t *base = &s.a;
    if (data_0213e0a0.count < data_0213e0a0.cap) {
        z = data_0213e0a0.count + 1;
        data_0213e0a0.count = z;
        data_0213e0a0.buf[z - 1] = s.a;
        return;
    }
    {
        uint8_t *p = (uint8_t *)(base - 2) + 1;
        uint32_t *q = base - 3;
        *p = z;
        *(uint8_t *)q = *p;
        func_0200d5d4(&data_0213e0ac, &s, *q);
    }
}

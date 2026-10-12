#include "ffc/types.h"

typedef struct {
    uint32_t pad[3];
    uint32_t *buf;
    uint32_t count;
    uint32_t cap;
} Queue;

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} Args;

extern Queue data_0213e0a0;
extern uint32_t data_0213e0ac;
extern void func_0200d5d4(void *object, Args *p, uint32_t x);

void func_02055830(Args s) {
    uint32_t z = 0;
    if (data_0213e0a0.count < data_0213e0a0.cap) {
        z = data_0213e0a0.count + 1;
        data_0213e0a0.count = z;
        data_0213e0a0.buf[z - 1] = s.a;
        return;
    }
    {
        uint32_t w;
        uint8_t *p = (uint8_t *)&w + 1;
        uint32_t *q = (&w) - 1;
        *p = z;
        *(uint8_t *)q = *p;
        func_0200d5d4(&data_0213e0ac, &s, *q);
    }
}

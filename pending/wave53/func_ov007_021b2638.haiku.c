#include "ffc/types.h"

extern uint32_t func_02073c34(void *obj);
extern void *func_020159c8(void *a, uint32_t b);
extern void func_ov007_021b27d4(uint8_t *p, void *v);
extern void func_ov007_021b27a4(uint8_t *p, int32_t v);
extern uint8_t *func_ov001_0218dde0(uint8_t *p, int32_t zero);
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern uint32_t data_ov007_021c5ff4[];
extern uint32_t data_ov007_021c5ff8[];
extern void *data_020b8e44;

typedef struct {
    uint32_t fn;
    int32_t adj;
} MFP;

void func_ov007_021b2638(uint8_t *p)
{
    MFP loc = *(MFP *)(p + 0x3114);
    MFP *m = &loc;
    int32_t r4 = 1;
    int32_t r3 = 0;
    int32_t r2 = 0;
    uint8_t *x;
    uint8_t flag;
    int32_t r4b;

    if (m->fn == data_ov007_021c5ff4[1]) {
        if (m->adj == (int32_t)data_ov007_021c5ff8[1] || m->fn == 0) {
            r4 = 0;
        }
    }
    if (r4 != 0 && *(void **)(p + 0xb8) != 0) {
        r3 = 1;
    }
    if (r3 != 0 && ((int32_t *)(*(void **)(p + 0xb8)))[6] != 0) {
        r2 = 1;
    }
    if (r2 != 0) {
        if (func_02073c34(*(void **)(p + 0xb8)) != 0) {
            func_ov007_021b27d4(p, func_020159c8(data_020b8e44, 0x141));
        } else {
            func_ov007_021b27a4(p, -((int32_t *)(*(void **)(p + 0xb8)))[6]);
        }
        return;
    }

    x = func_ov001_0218dde0(p, 0);
    flag = x[0x12];
    if (flag) {
        func_0208763c(x + 0x1c);
    }
    r4b = (*(uint32_t *)(x + 0x14) == 0);
    if (flag) {
        func_02087678(x + 0x1c);
    }
    if (r4b != 0) {
        if (m->fn != 0) {
            if (m->adj & 1) {
                uint8_t *vt = *(uint8_t **)(p + (m->adj >> 1));
                void (*fn)(uint8_t *) = *(void (**)(uint8_t *))(vt + m->fn);
                fn(p + (m->adj >> 1));
            } else {
                void (*fn)(uint8_t *) = (void (*)(uint8_t *))m->fn;
                fn(p + (m->adj >> 1));
            }
        }
    }
}

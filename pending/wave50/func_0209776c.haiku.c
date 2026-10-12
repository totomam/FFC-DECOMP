#include "ffc/types.h"

typedef struct { uint8_t v; } B1;

extern uint8_t data_020b35bc;
extern uint8_t data_020b3270;
extern uint8_t data_020b374c;
extern uint8_t data_020b377c;
extern uint32_t func_02092864(const uint8_t *text);
extern void *func_02056830(uint32_t size);
extern void func_02097054(void **out, void *mem, B1 val);
extern void func_02092878(void *a, void *b);
extern void func_0209d245_unk(void *a, void *b, void *c);
extern void func_020977fc(void *p);
extern void func_0209805c(void);

void *func_0209776c(uint8_t *self, uint32_t arg)
{
    void *v4;
    void *v8;
    B1 b;
    uint32_t z = 0;

    *(void **)self = &data_020b35bc;
    *(uint32_t *)(self + 4) = z;
    *(uint32_t *)(self + 8) = z;
    *(uint32_t *)(self + 12) = z;
    *(uint32_t *)(self + 16) = z;
    *(uint32_t *)(self + 20) = z;
    *(uint32_t *)(self + 24) = z;
    self[0x26] = (uint8_t)z;
    self[0x27] = (uint8_t)z;
    *(uint32_t *)(self + 28) = arg;
    self[0x28] = (uint8_t)z;

    if (arg == 0) {
        void **p4 = &v4;
        void **p8 = &v8;
        void *mem;
        *p4 = &data_020b3270;
        mem = func_02056830(func_02092864(&data_020b374c) + 1);
        b.v = (uint8_t)z;
        func_02097054(p8, mem, b);
        func_02092878(*p8, &data_020b374c);
        func_0209d245_unk(&data_020b377c, p4, func_0209805c);
    }
    func_020977fc(self);
    return self;
}

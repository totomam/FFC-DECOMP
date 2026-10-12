/* cflags: -lang c++ */
#include "ffc/types.h"

typedef struct { uint32_t a, b; } S;
extern "C" uint32_t func_02075924(uint32_t a, uint32_t b, void *fn, void *self, uint32_t e);
extern "C" uint32_t func_020759bc(uint32_t a, uint32_t b, void *fn, void *self, uint32_t e);
extern "C" void func_02056bc0(void *object, void *node);
extern "C" void func_0207732c(void);
extern "C" uint32_t data_020b28e4[2];

struct O { virtual void a(); virtual void b(); virtual void c(); virtual void d(); virtual uint32_t e(); };
extern "C" void func_0207734c(O *self) {
    uint8_t *p = (uint8_t *)self;
    uint32_t r;
    uint32_t d0, d1;
    int32_t x = *(int32_t *)(p + 0x98);
    if (x < 0) {
        r = func_02075924(*(uint32_t *)((uint8_t *)*(void **)(p + 0x80) + 0x88),
                          *(uint32_t *)(p + 0x84),
                          (void *)func_0207732c, self, *(uint32_t *)(p + 0xa0));
    } else {
        r = func_020759bc(*(uint32_t *)((uint8_t *)*(void **)(p + 0x80) + 0x88),
                          (uint32_t)x,
                          (void *)func_0207732c, self, *(uint32_t *)(p + 0xa0));
    }
    func_02056bc0(*(void **)(p + 0xa4), (void *)r);
    {
        uint32_t v = self->e();
        *(uint32_t *)(p + 0xac) = v;
        func_02056bc0(*(void **)(p + 0xa8), (void *)v);
    }
    d0 = data_020b28e4[0];
    d1 = data_020b28e4[1];
    *(uint32_t *)(p + 0x88) = d0;
    *(uint32_t *)(p + 0x8c) = d1;
}

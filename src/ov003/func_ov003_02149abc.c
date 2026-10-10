/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" void func_0208763c(void *p);
extern "C" void func_02087678(void *p);
extern "C" int func_ov003_02149abc(uint8_t *self);

struct Lock {
    void *p;
    uint8_t on;
    Lock(void *q, uint8_t f) : p(q), on(f) { if (on) func_0208763c(p); }
    ~Lock() { if (on) func_02087678(p); }
};

struct Inner {
    uint8_t pad0[0x12];
    uint8_t f12;
    uint8_t pad1;
    void *f14;
};

extern "C" int func_ov003_02149abc(uint8_t *self) {
    Inner *s = *(Inner **)(self + 0x1b4);
    Lock l((uint8_t *)s + 0x1c, s->f12);
    return s->f14 == 0;
}

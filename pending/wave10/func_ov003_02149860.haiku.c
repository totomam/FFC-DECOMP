#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);

typedef struct Inner {
    uint8_t pad0[0x12];
    uint8_t f12;
    uint8_t pad1[0x14 - 0x13];
    void *f14;
} Inner;

int func_ov003_02149860(uint8_t *self) {
    Inner *s = *(Inner **)(self + 0x1a8);
    uint8_t flag = s->f12;
    void *p = (uint8_t *)s + 0x1c;
    int ret;
    if (flag != 0) {
        func_0208763c(p);
    }
    ret = (s->f14 == 0);
    if (flag != 0) {
        func_02087678(p);
    }
    return ret;
}

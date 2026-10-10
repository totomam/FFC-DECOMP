#include "ffc/types.h"

extern void func_0200d5ec(void *p);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern void func_020695d0(void *p);

void *func_ov008_021a5984(uint8_t *self) {
    uint8_t *r4;

    func_0200d5ec(self + 0x108);
    func_0200d5ec(self + 0xd8);
    r4 = self + 0xb8;
    if (*(void **)(r4 + 4) != 0) {
        if (r4[0xc] != 0) {
            func_02052d3c(*(void **)(r4 + 4), *(void **)(r4 + 8));
        }
        func_02052c04(*(void **)(r4 + 4));
    }
    func_02053290(r4);
    func_020695d0(self);
    return self;
}

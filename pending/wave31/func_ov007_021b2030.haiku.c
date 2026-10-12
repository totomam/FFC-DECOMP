#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    uint32_t w1;
} Pair;

extern void func_ov007_021ae63c(uint32_t x);
extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021b1264(void *obj, void *a, void *b, void *c, void *d);
extern void *func_ov001_0218dde0(void *obj, uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern void *data_020b8e44;
extern Pair data_ov007_021c5fa4;

void func_ov007_021b2030(void *param)
{
    uint8_t *a = (uint8_t *)param;
    void *r;
    Pair s;

    func_ov007_021ae63c(0);
    r = func_0205681c(0x10c);
    if (r != 0) {
        r = func_ov007_021b1264(r,
                                *(void **)((uint8_t *)*(void **)data_020b8e44 + 0x88),
                                a + 0xc0,
                                a + 0xc8,
                                *(void **)(a + 0xb8));
    }
    func_02056bc0(func_ov001_0218dde0(a, 1), r);
    s = data_ov007_021c5fa4;
    *(Pair *)(a + 0xb0) = s;
}

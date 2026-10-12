#include "ffc/types.h"

extern void func_ov004_0214f774(void *p);
extern void func_020214b4(void);
extern void func_02021b68(void *p, int a, int b);
extern void *func_0205681c(uint32_t size);
extern void *func_ov004_02146f18(void *obj, void *self, void *extra);
extern void *func_0203b708(uint32_t n);
extern void *func_0203b688(void);
extern void func_02056bc0(void *object, void *node);

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_ov004_02159d40;

void func_ov004_0215586c(void *self)
{
    uint8_t *s = (uint8_t *)self;
    uint32_t n = 0x90;
    void *r7;
    void *r4;
    void *r6;
    uint32_t x;
    uint32_t y;

    func_ov004_0214f774(*(void **)(s + 0xe4));
    *(uint8_t *)(s + 0x220) = 1;
    func_020214b4();
    func_02021b68(*(void **)(s + 0xf4), 0x24, 1);

    r7 = func_0205681c(n);
    if (r7 != 0) {
        r7 = func_ov004_02146f18(r7, self, s + (n << 2));
    }

    r4 = func_0203b708(4);
    r6 = func_0203b688();
    func_02056bc0(r6, r4);
    func_02056bc0(r6, r7);
    func_02056bc0(*(void **)(s + 0x23c), r6);

    *(Pair *)(s + 0x94) = data_ov004_02159d40;
}

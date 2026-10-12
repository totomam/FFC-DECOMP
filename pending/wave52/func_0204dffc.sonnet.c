#include "ffc/types.h"

extern uint32_t func_0204de50(void *p);
extern uint32_t func_0204de80(void);
extern void func_0204de7c(uint32_t a);
extern void func_0204bc28(uint32_t a);
extern int32_t func_0204def8(uint32_t a, void *p);
extern void func_0204bb40(uint32_t a);
extern void func_0204e088(void *p);
extern void func_0204bcd0(uint32_t a, void *b);
extern void func_0204dc30(uint32_t a, void *p);
extern void func_0204b098(void *p);

int32_t func_0204dffc(void *p)
{
    uint32_t r6;
    uint32_t r4;
    uint8_t *s = (uint8_t *)p;

    r6 = func_0204de50(p);
    r4 = func_0204de80();
    func_0204de7c(r6);

    if (p == 0) {
        return -1;
    }

    if (*(int32_t *)(s + 0x8048) > 0) {
        if (*(int32_t *)(s + 0x18) >= 0) {
            func_0204bc28(r6);
            *(int32_t *)(s + 0x18) = -1;
        }
    }

    if (func_0204def8(r4, p) > 0) {
        return 0;
    }

    if (*(void **)(s + 0x10) != 0) {
        if (*(int32_t *)(*(uint8_t **)(s + 0x10) + 4) == 0) {
            func_0204bb40(r6);
        }
    }

    if (*(int32_t *)(s + 0x14) != 0) {
        if (*(void **)(s + 0x10) != 0) {
            func_0204e088(p);
        }
        func_0204bcd0(r4, *(void **)(s + 0x14));
    }

    func_0204dc30(r4, p);
    func_0204b098(p);
    return 0;
}

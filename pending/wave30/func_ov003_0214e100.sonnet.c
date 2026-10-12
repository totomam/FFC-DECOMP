#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_ov003_0214649c(void *p);
extern uint32_t func_02018104(void *a, uint16_t b);
extern uint32_t *func_ov003_02153470(void *p);
extern void func_02088f30(void);
extern void func_0201805c(Pair *out, void *a, uint16_t b);
extern void *data_020b8e44;

void func_ov003_0214e100(Pair *ret, uint8_t *p)
{
    Pair out;
    volatile uint32_t pad[4];
    volatile uint32_t hi;
    volatile uint32_t lo;
    void *r7;
    uint32_t r6;
    uint32_t b, a;

    r7 = func_ov003_0214649c(*(void **)(p + 0x14));
    r6 = func_02018104(data_020b8e44, *(uint16_t *)(p + 0x28));
    if (r6 != *func_ov003_02153470(r7)) {
        func_02088f30();
    }
    func_0201805c(&out, data_020b8e44, *(uint16_t *)(p + 0x28));
    b = out.b;
    hi = b;
    b = b << 12;
    a = out.a;
    lo = a;
    a = a << 12;
    ret->a = a;
    ret->b = b;
}

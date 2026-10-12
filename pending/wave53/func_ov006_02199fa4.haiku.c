#include "ffc/types.h"

extern uint32_t func_0207e1cc(void *p, uint32_t x);
extern uint32_t func_02087460(void);
extern uintptr_t func_0207cab4(void);
extern void func_0207e890(void *object);
extern int func_0207e96c(void *obj, uint32_t a, uint32_t s, uint32_t e, int neg);
extern uint32_t func_0207eab0(void *obj, uint32_t a, uint32_t len);
extern void func_0207ea0c(void *obj);
extern uint8_t data_ov006_021b8ae4[];

void func_ov006_02199fa4(uint8_t *self)
{
    uint32_t *p = *(uint32_t **)(self + 0x10);
    uint8_t *q = *(uint8_t **)(self + 0x14);
    uint32_t r6;
    uint32_t len;
    uint8_t obj[0x48];

    len = p[1];
    r6 = func_0207e1cc(q + 0x10, *(uint32_t *)(q + 0x14));
    if (!r6) {
        r6 = *(uint32_t *)(q + 0x18);
    }

    if (func_02087460() != 0) {
        if (r6 == func_0207e1cc(data_ov006_021b8ae4, 3)) {
            uint8_t *base = (uint8_t *)func_0207cab4();
            uint32_t a_end = *(uint32_t *)(base + 0x1e0) + *(uint32_t *)(base + 0x1e4);
            uint32_t b_end = *(uint32_t *)(base + 0x1e8) + *(uint32_t *)(base + 0x1ec);
            uint32_t s = p[0];

            if (s < a_end && s + len > a_end) {
                len = a_end - s;
            } else if (s < b_end && s + len > b_end) {
                len = b_end - s;
            }
        }
    }

    func_0207e890(obj);
    if (func_0207e96c(obj, r6, p[0], p[0] + len, -1)) {
        if (func_0207eab0(obj, p[2], len) == len) {
            p[3] = 2;
        }
        func_0207ea0c(obj);
    }

    if (p[3] != 2) {
        p[0] = 0;
        p[3] = 2;
    }
}

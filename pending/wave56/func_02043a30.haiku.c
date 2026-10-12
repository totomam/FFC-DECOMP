#include "ffc/types.h"

extern void func_02042840(void *p);
extern void func_ov003_021463f8(void *a, uint32_t b, uint32_t c);
extern void *func_ov003_02146494(void *a);
extern void func_ov003_0215e48c(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_ov003_0215e4c4(void *a, uint32_t b);
extern void func_02042f44(void *p);

void func_02043a30(void *param)
{
    uint8_t *s = (uint8_t *)param;
    uint32_t v;
    uint8_t *p;
    void *q;

    func_02042840(s);
    if (s[0x131] == 0) {
        func_ov003_021463f8(*(void **)(s + 0x8c), 0, 0);
    }
    s[0x131] = 0;
    if (s[0x130] == 0) {
        p = (uint8_t *)func_ov003_02146494(*(void **)(s + 0x8c));
        p[0xde] = 1;
        if (s[0x138] != 0) {
            v = *(uint32_t *)(s + 0x13c);
            if (s[0x140] != 0) {
                q = func_ov003_02146494(*(void **)(s + 0x8c));
                func_ov003_0215e48c(q, v,
                                    *(uint32_t *)(s + 0x144),
                                    *(uint32_t *)(s + 0x148));
            } else {
                q = func_ov003_02146494(*(void **)(s + 0x8c));
                func_ov003_0215e4c4(q, v);
            }
        }
    } else {
        p = (uint8_t *)func_ov003_02146494(*(void **)(s + 0x8c));
        p[0xde] = 0;
    }
    s[0x130] = 0;
    if (s[0x131] == 0) {
        s[0x135] = 0;
    }
    func_02042f44(s);
}

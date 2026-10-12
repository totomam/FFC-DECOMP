#include "ffc/types.h"

extern void *data_020ad9e8;
extern void *data_020ad7e0;
extern void func_0202ad8c(uint8_t *p);
extern void *func_0205681c(uint32_t n);
extern void func_020236e4(void);
extern void func_02022e64(uint32_t a, void *b);

uint8_t *func_0202cb4c(uint8_t *p, uint32_t r1, uint32_t a, uint32_t b, uint32_t c)
{
    int i;
    uint8_t *e;
    void *t;
    int o = 0x68c;
    int o2, o3;

    func_0202ad8c(p);
    *(void **)p = (void *)&data_020ad9e8;
    for (i = 0; i < 45; i++) {
        e = p + i * 12;
        *(uint32_t *)(e + 0x1a0) = 0xffff6000;
        *(uint32_t *)(e + 0x3bc) = 0xffff6000;
    }
    *(uint32_t *)(p + o) = a;
    *(uint32_t *)(p + o + 4) = b;
    *(uint32_t *)(p + o + 8) = c;
    o3 = o;
    o3 -= 0xb8;
    o2 = o3;
    for (i = 0; i < 45; i++) {
        t = func_0205681c(0x320);
        if (t != 0) {
            func_020236e4();
            *(void **)t = (void *)&data_020ad7e0;
        }
        *(void **)((p + i * 4) + o3) = t;
        func_02022e64(*(uint32_t *)(p + 0x30), *(void **)((p + i * 4) + o2));
    }
    *(uint32_t *)(p + 0x688) = 0;
    *(uint32_t *)(p + 0x28) = 0;
    *(uint32_t *)(p + 0x698) = 0;
    return p;
}

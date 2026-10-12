#include "ffc/types.h"

typedef void (*VFn)(void *);

extern void *func_ov003_02156948(void *p, uint32_t *a, uint32_t b, uint32_t c, uint32_t d);
extern void *func_ov003_02156d10(void *p, uint32_t *b);
extern void *func_0203b9a0(void);
extern void func_02005988(void *dst, void *src);
extern void func_ov003_021564e8(void *x);
extern void func_02028f0c(void *obj, void *a, uint32_t r, void *d);
extern void func_02035c18(void *x);
extern void *func_020059cc(void *object);

void func_ov003_02156f2c(uint8_t *p)
{
    void *obj = *(void **)(p + 0x2d0);
    if (obj != 0) {
        if (obj != 0) {
            VFn *vt = *(VFn **)obj;
            vt[1](obj);
        }
        *(void **)(p + 0x2d0) = 0;
    }
    if (*(void **)(p + 0x2d0) == 0) {
        uint32_t a[3];
        uint32_t b[3];
        uint32_t c[3];
        uint32_t d[1];
        uint32_t i;
        uint32_t r4;
        uint32_t *r6;

        i = 0;
        do {
            r4 = i;
            a[i++] = r4;
        } while (i < 3);
        r6 = func_ov003_02156948(p, a, r4, 1, r4);
        do {
            b[r4++] = 0;
        } while (r4 < 3);
        r4 = (uint32_t)func_ov003_02156d10(p, b);
        if (r6 != 0) {
            *(void **)(p + 0x2d0) = func_0203b9a0();
            func_02005988(c, r6);
            func_ov003_021564e8(d);
            func_02028f0c(*(void **)(p + 0x2d0), c, r4, d);
            func_02035c18(d);
            func_020059cc(c);
        }
        func_020059cc(b);
        func_020059cc(a);
    }
}

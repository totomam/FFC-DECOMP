#include "ffc/types.h"

extern void *func_ov003_02156a14(void *s, uint32_t *buf, uint32_t a, uint32_t b, uint32_t c);
extern void *func_0203b9a0(void);
extern void func_02005988(void *dst, void *src);
extern void func_ov003_021564e8(void *p);
extern void func_02028f0c(void *obj, void *a, uint32_t b, void *c);
extern void func_02035c18(void *p);
extern void *func_020059cc(void *object);

typedef struct Obj Obj;
typedef struct Vt {
    void *f0;
    void (*f1)(Obj *);
} Vt;
struct Obj {
    Vt *vt;
};

void func_ov003_02156fd4(uint8_t *s) {
    uint32_t buf[3];
    uint32_t a[3];
    uint32_t c;
    void *r6;
    uint32_t *bp;
    uint32_t i;
    uint32_t zero;

    if (*(Obj **)(s + 0x2d4) != 0) {
        if (*(Obj **)(s + 0x2d4) != 0) {
            (*(Obj **)(s + 0x2d4))->vt->f1(*(Obj **)(s + 0x2d4));
        }
        *(Obj **)(s + 0x2d4) = 0;
    }
    if (*(Obj **)(s + 0x2d4) == 0) {
        bp = buf;
        zero = 0;
        for (i = 0; i < 3; i++) {
            bp[i] = zero;
        }
        r6 = func_ov003_02156a14(s, buf, zero, 1, zero);
        if (r6 != 0) {
            *(void **)(s + 0x2d4) = func_0203b9a0();
            func_02005988(a, r6);
            func_ov003_021564e8(&c);
            func_02028f0c(*(void **)(s + 0x2d4), a, zero, &c);
            func_02035c18(&c);
            func_020059cc(a);
        }
        func_020059cc(buf);
    }
}

/* cflags: -nothumb */
#include "ffc/types.h"

extern void *func_ov014_02146e94(uint32_t size);
extern uint32_t func_ov014_02146afc(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_ov014_02148a64(uint32_t *p);
extern void func_ov014_02145300(uint32_t *p, uint32_t a, uint32_t b, uint32_t c);

typedef struct {
    uint32_t pad0[4];
    uint32_t f10;
    uint32_t f14;
    uint32_t pad1[9];
    uint32_t *f3c;
    uint32_t f40;
    uint32_t f44;
    uint32_t f48;
    uint32_t pad2[4];
    uint32_t *f5c;
    uint32_t *f60;
    uint32_t *f64;
    uint32_t f68;
    uint32_t f6c;
    uint32_t pad3[11];
    uint32_t f9c;
    uint32_t fa0;
    uint32_t pad4[1];
    uint32_t fa8;
    uint32_t pad5[6];
    uint32_t fc4;
} Obj;

int func_ov014_021465e8(Obj *s, uint32_t a1, uint32_t a2, uint32_t mode) {
    uint32_t fr[9];
    uint32_t idx;
    uint32_t *p;

    if (s->f9c >= s->fa0) {
        return 0;
    }
    if (mode != 0) {
        if (s->f68 == 0) {
            s->f68 = (uint32_t)func_ov014_02146e94(s->f14 << 8);
            if (s->f68 == 0) {
                return 0;
            }
        }
        if (s->f6c == 0) {
            s->f6c = (uint32_t)func_ov014_02146e94((s->f14 >> 1) << 8);
            if (s->f6c == 0) {
                return 0;
            }
        }
        idx = s->fc4;
        fr[0] = s->f5c[idx];
        fr[1] = s->f60[idx];
        fr[2] = s->f68;
        fr[3] = s->f6c;
        fr[4] = s->f10;
        fr[5] = s->f14;
        fr[6] = s->f64[idx];
        fr[7] = func_ov014_02146afc(fr[6], (uint32_t)s->f64, a2, mode);
        fr[8] = mode != 2;
        func_ov014_02148a64(fr);
        s->f3c = (uint32_t *)s->f68;
        s->f40 = s->f6c;
    } else {
        idx = s->fc4;
        s->f3c = (uint32_t *)s->f5c[idx];
        s->f40 = s->f60[idx];
    }
    s->f44 = a1;
    s->f48 = a2 << 1;
    p = (uint32_t *)&s->f3c;
    func_ov014_02145300(p, a2 << 1, a2, mode);
    s->f9c = s->f9c + 1;
    s->fc4 = s->fc4 + 1;
    if (s->fc4 == s->fa8) {
        s->fc4 = 0;
    }
    return 1;
}

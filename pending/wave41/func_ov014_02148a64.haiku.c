/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    int32_t f10;
    int32_t f14;
    uint32_t idx;
    uint32_t f1c;
    uint32_t flag;
} S;

extern void func_ov014_02148b94(int32_t *p);
extern void func_ov014_02148dc0(int32_t *p);
extern void func_ov014_02148ccc(int32_t *p);
extern void func_ov014_02148ec8(int32_t *p);
extern const uint8_t func_ov014_tblA[];
extern const uint8_t func_ov014_tblB[];

void func_ov014_02148a64(S *s)
{
    int32_t a[6];
    uint32_t v;
    uint32_t idx;
    uint32_t f0, f4, f8, fc, f1c;
    int32_t f10, f14;

    idx = s->idx;
    v = func_ov014_tblA[idx] | ((uint32_t)func_ov014_tblB[idx] << 8);
    f0 = s->f0;
    f8 = s->f8;
    f10 = s->f10;
    f14 = s->f14;
    f1c = s->f1c;
    a[0] = f0;
    a[1] = f8;
    a[2] = f10;
    a[3] = f14;
    a[4] = v;
    a[5] = f1c + 0x40;
    func_ov014_02148b94(a);
    if (s->flag != 1) {
        func_ov014_02148ccc(a);
    }

    f4 = s->f4;
    fc = s->fc;
    a[0] = f4;
    a[1] = fc;
    a[2] = f10 >> 1;
    a[3] = f14 >> 1;
    func_ov014_02148dc0(a);
    if (s->flag != 1) {
        func_ov014_02148ec8(a);
    }

    a[0] = f4 + 0x80;
    a[1] = fc + 0x80;
    func_ov014_02148dc0(a);
    if (s->flag != 1) {
        func_ov014_02148ec8(a);
    }
}

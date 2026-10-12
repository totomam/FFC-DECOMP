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
extern const uint8_t tblA[];
extern const uint8_t tblB[];

void func_ov014_02148a64(S *s)
{
    struct {int32_t a0,a1,a2,a3,a4,a5;} a;
    uint32_t v;
    uint32_t idx;
    uint32_t f0, f4, f8, fc, f1c;
    int32_t f10, f14;

    idx = s->idx;
    v = tblA[idx] | ((uint32_t)tblB[idx] << 8);
    f0 = s->f0;
    f8 = s->f8;
    f10 = s->f10;
    f14 = s->f14;
    f1c = s->f1c;
    a.a0 = f0;
    a.a1 = f8;
    a.a2 = f10;
    a.a3 = f14;
    a.a4 = v;
    a.a5 = f1c + 0x40;
    func_ov014_02148b94(&a.a0);
    if (s->flag != 1) {
        func_ov014_02148ccc(&a.a0);
    }

    f4 = s->f4;
    fc = s->fc;
    a.a0 = f4;
    a.a1 = fc;
    a.a2 = f10 >> 1;
    a.a3 = f14 >> 1;
    func_ov014_02148dc0(&a.a0);
    if (s->flag != 1) {
        func_ov014_02148ec8(&a.a0);
    }

    a.a0 = f4 + 0x80;
    a.a1 = fc + 0x80;
    func_ov014_02148dc0(&a.a0);
    if (s->flag != 1) {
        func_ov014_02148ec8(&a.a0);
    }
}

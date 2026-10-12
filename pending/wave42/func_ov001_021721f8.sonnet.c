#include "ffc/types.h"

typedef struct S {
    uint8_t pad0[0x58];
    uint8_t sub[0xc];
    int32_t cap;
    int32_t cnt;
    uint8_t pad1[0x198 - 0x68 - 4];
    int32_t f198;
    uint8_t pad2[8];
    int32_t f1a4;
    int32_t f1a8;
} S;

extern int32_t func_ov001_02171b58(void *p);
extern int32_t func_ov001_02171d60(void *p);
extern void func_ov001_02171d4c(void *p);
extern int32_t func_ov001_02172124(void *p, int32_t a, int32_t b);
extern int32_t func_ov001_02171ac0(void *p, int32_t a, int32_t b);

int32_t func_ov001_021721f8(S *s, int32_t a, int32_t b) {
    int32_t r;
    r = 0;
    if (s->f198 != 0 && s->f1a4 == 1 && s->f1a8 == 1) {
        if (func_ov001_02171b58(s->sub) == 0) return 0;
        if (func_ov001_02171d60(s) == 0) return 0;
        if (s->cnt >= s->cap) {
            func_ov001_02171d4c(s->sub);
            return 1;
        }
        return 2;
    }
    if (s->cnt >= s->cap) {
        r = func_ov001_02172124(s, a, b);
        if (r != -2) {
            if (r == -1) return 0;
            if (r == b) return 1;
        } else return 2;
    }
    if (func_ov001_02171ac0(s->sub, a + r, b - r) == 0) return 0;
    return 2;
}

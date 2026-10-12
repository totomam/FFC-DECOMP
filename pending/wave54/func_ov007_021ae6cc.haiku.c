#include "ffc/types.h"

extern void func_02019070(void *out, void *arg);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *mar, uint32_t index);
extern void func_02052c04(void *mar);
extern void func_02053290(void *object);
extern void *data_020b8e44;

typedef struct {
    uint32_t pad0;
    void *mar;
    uint32_t idx;
    uint8_t flag;
} Loc;

int func_ov007_021ae6cc(void *self)
{
    int32_t *s = (int32_t *)self;
    Loc loc;
    Loc *p;
    uint32_t *ret;
    int32_t n;
    int r5;
    int r6;
    int i;

    if (s[10] < 1 || s[10] > 20) {
        return 0;
    }

    n = s[9];
    r5 = 0;
    r6 = 0;
    if (n >= 1) {
        func_02019070(&loc, data_020b8e44);
        r5 = 1;
        ret = func_02052d90(loc.mar, loc.idx);
        if ((uint32_t)s[9] <= ret[2] - 1) {
            r6 = 1;
        }
    }

    if (r6 != 0) {
        r6 = 0;
    } else {
        r6 = 1;
    }

    if (r5 != 0) {
        p = &loc;
        if (p->mar != 0) {
            if (p->flag) {
                func_02052d3c(p->mar, p->idx);
            }
            func_02052c04(p->mar);
        }
        func_02053290(p);
    }

    if (r6 != 0) {
        return 0;
    }

    if (s[26] == 0 && s[27] == 0 && s[28] == 0) {
        return 0;
    }

    if (s[25] > 1) {
        return 0;
    }

    for (i = 0; i < 4; i++) {
        if (s[31 + i] < 0 || s[31 + i] > 5) {
            return 0;
        }
    }

    for (i = 0; i < 5; i++) {
        int32_t *r3 = s + i;
        if (r3[26] != 0) {
            if (r3[26] > 0xff) {
                return 0;
            }
            if (r3[86] > 0x7ff) {
                return 0;
            }
            if (r3[96] > 0xff) {
                return 0;
            }
            if (r3[106] > 0xff) {
                return 0;
            }
            if (r3[116] > 0xff) {
                return 0;
            }
            if (r3[126] > 0xff) {
                return 0;
            }
            if (r3[136] > 0xff) {
                return 0;
            }
            if (r3[131] > 0x3ff) {
                return 0;
            }
        }
    }

    return 1;
}

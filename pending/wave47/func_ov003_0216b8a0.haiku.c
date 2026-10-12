#include "ffc/types.h"

extern uint32_t func_0209a76c(uint32_t a, uint32_t b);
extern void *func_0205681c(uint32_t size);
extern int func_ov003_021645dc(void *obj, uint32_t ctx, uint32_t a, uint32_t b,
                               uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);

typedef struct {
    uint16_t type;
    uint16_t pad;
    uint32_t f4;
    uint32_t off;
} Hdr;

int func_ov003_0216b8a0(uint32_t a0, Hdr *p)
{
    uint32_t *q = (uint32_t *)((uint8_t *)p + p->off);
    uint32_t a = q[0];
    uint32_t b = q[1];
    uint32_t v1c, v18, r7, r5, r4;
    uint16_t t = p->type;
    void *obj;
    int ret;

    if (t == 13) {
        v1c = 0;
    } else {
        v1c = func_0209a76c(q[2] << 16, 360);
    }

    if (t == 13) {
        if (p->f4 > 2) {
            v18 = q[2];
        } else {
            v18 = 30;
        }
    } else {
        v18 = q[3];
    }

    if (t == 13) {
        if (p->f4 > 3) {
            r7 = q[3];
        } else {
            r7 = 30;
        }
    } else {
        r7 = q[4];
    }

    if (t == 13) {
        if (p->f4 > 4) {
            r5 = q[4];
        } else {
            r5 = 0;
        }
    } else {
        if (p->f4 > 5) {
            r5 = q[5];
        } else {
            r5 = 0;
        }
    }

    if (t == 13) {
        if (p->f4 > 5) {
            r4 = q[5];
        } else {
            r4 = 0;
        }
    } else {
        if (p->f4 > 6) {
            r4 = q[6];
        } else {
            r4 = 0;
        }
    }

    obj = func_0205681c(0x98);
    ret = (int)obj;
    if (obj != 0) {
        ret = func_ov003_021645dc(obj, a0, (uint16_t)a, (uint16_t)b,
                                  (uint16_t)v1c, (uint16_t)v18, r7, r5, r4);
    }
    return ret;
}

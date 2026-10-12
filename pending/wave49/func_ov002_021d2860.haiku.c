#include "ffc/types.h"

extern uint32_t func_ov002_02198688(uint32_t a, uint32_t b);
extern uint32_t func_ov002_021c9bec(uint8_t *self, uint32_t *out);
extern uint32_t *func_ov002_021d0f44(uint8_t *self, uint32_t *in, uint32_t x);
extern uint32_t *func_ov002_021d2aa0(uint32_t *in, uint32_t *x);
extern void func_ov002_021d2b50(uint32_t *in);
extern uint32_t func_ov002_021c9538(uint8_t *self);
extern int32_t func_0208f694(int32_t value);
extern uint32_t func_ov002_021d3194(uint8_t *self, uint32_t a, int32_t b);
extern void func_02015e8c(void *out, void *x);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void *func_02053290(void *object);
extern uint32_t func_ov002_021c92ec(uint8_t *self, uint32_t a, uint32_t b, uint32_t c, int32_t d, uint32_t e);
extern uint32_t *func_0205681c(uint32_t size);
extern uint32_t func_ov002_02198758(uint32_t a);
extern uint32_t func_ov002_021c5ad4(uint32_t a, uint32_t b, uint32_t c);
extern void func_02056bc0(void *object, uint32_t node);
extern void *data_020b8e44;
extern uint32_t data_020ab798[];

typedef struct {
    uint32_t w[6];
} Blk;

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint8_t d;
} Tmp;

uint32_t func_ov002_021d2860(uint8_t *self) {
    uint32_t ret = 0;
    uint32_t buf[3];
    uint32_t a[12];
    uint32_t *p;
    Tmp tmp;
    int32_t flag;
    int32_t sp8;
    uint32_t r6;
    uint32_t i;

    uint32_t x = func_ov002_02198688(*(uint32_t *)(self + 0xbc), *(uint32_t *)(self + 0xb8));
    uint32_t state = 3;
    (void)x;
    if (*(uint32_t *)(self + 0xd4) == 0) {
        buf[0] = 0;
        buf[1] = 0;
        buf[2] = 0;
        state = func_ov002_021c9bec(self, buf);
        if (state == 3) {
            p = func_ov002_021d2aa0(buf, func_ov002_021d0f44(self, buf, *(uint32_t *)(self + 0x104)));
            *(uint32_t *)(self + 0xd4) = p[0];
            *(uint32_t *)(self + 0xd8) = p[1];
            *(uint32_t *)(self + 0xdc) = p[2];
            *(uint32_t *)(self + 0xe0) = p[3];
            *(uint32_t *)(self + 0xe4) = p[4];
            *(Blk *)(self + 0xe8) = *(Blk *)(p + 5);
            *(uint32_t *)(self + 0x100) = p[11];
        }
        func_ov002_021d2b50(buf);
    }

    if (state == 3) {
        state = (*(int32_t *)(self + 0xe4) != 0) ? 1 : 2;
    }

    switch (state) {
    case 0:
        ret = func_ov002_021c9538(self);
        break;
    case 1: {
        int32_t v = *(int32_t *)(self + 0xe4);
        flag = (v > 0) ? 0 : 1;
        sp8 = func_0208f694(v);
        r6 = func_ov002_021d3194(self, flag, sp8);
        func_02015e8c(&tmp, data_020b8e44);
        r6 = r6 * ((uint8_t *)func_02052d90((void *)tmp.b, tmp.c))[0xf];
        if (tmp.b != 0) {
            if (tmp.d != 0) {
                func_02052d3c(tmp.b, tmp.c);
            }
            func_02052c04(tmp.b);
        }
        func_02053290(&tmp);
        ret = func_ov002_021c92ec(self + 0x80, *(uint32_t *)(self + 0xb8), flag, r6, sp8, 0);
        *(uint32_t *)(self + 0xe4) = 0;
        break;
    }
    case 2: {
        uint32_t *obj = func_0205681c(0x24);
        ret = (uint32_t)obj;
        if (obj != 0) {
            obj[2] = 0;
            obj[3] = 0x100d7;
            obj[0] = (uint32_t)data_020ab798;
            obj[4] = (uint32_t)(self + 0x80);
            obj[5] = *(uint32_t *)(self + 0xb8);
            obj[6] = *(uint32_t *)(self + 0xd4);
            obj[7] = *(uint32_t *)(self + 0xd8);
            obj[8] = *(uint32_t *)(self + 0xdc);
        }
        {
            uint32_t v = func_ov002_02198758(*(uint32_t *)(self + 0xbc));
            uint32_t r = func_ov002_021c5ad4(v, 0x1d, 0);
            if (r != 0) {
                func_02056bc0(self + 0x14, r);
            }
        }
        for (i = 0; i < 12; i++) {
            a[i] = 0;
        }
        *(uint32_t *)(self + 0xd4) = a[0];
        *(uint32_t *)(self + 0xd8) = a[1];
        *(uint32_t *)(self + 0xdc) = a[2];
        *(uint32_t *)(self + 0xe0) = a[3];
        *(uint32_t *)(self + 0xe4) = a[4];
        *(Blk *)(self + 0xe8) = *(Blk *)(a + 5);
        *(uint32_t *)(self + 0x100) = a[11];
        break;
    }
    default:
        break;
    }
    return ret;
}

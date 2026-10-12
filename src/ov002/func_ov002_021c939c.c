#include "ffc/types.h"

typedef struct Blob {
    uint32_t w00, w04, w08, w0c, w10;
    uint8_t b14;
    uint32_t w18;
    uint8_t b1c;
    uint32_t w20, w24;
    uint8_t b28, b29;
    uint32_t w2c, w30;
    uint8_t b34;
    uint32_t w38, w3c, w40, w44, w48, w4c;
    uint8_t b50, b51;
    uint32_t w54, w58;
} Blob;

extern void *func_0205681c(uint32_t size);
extern void *func_ov002_021c9450(void *obj, void *self, Blob *b, uint32_t *p);
extern void func_ov002_021c8f10(Blob *b);

void *func_ov002_021c939c(void *self, Blob *in)
{
    Blob loc;
    void *obj;
    void *ret;
    uint32_t *p1;
    uint32_t *p2;
    uint32_t *p3;
    int started = 0;

    obj = func_0205681c(0x70);
    ret = obj;
    if (obj != 0) {
        p3 = &loc.w48;
        loc.w00 = in->w00;
        loc.w04 = in->w04;
        loc.w08 = in->w08;
        loc.w0c = in->w0c;
        loc.w10 = in->w10;
        loc.b14 = in->b14;
        loc.w18 = in->w18;
        loc.b1c = in->b1c;
        loc.w20 = in->w20;
        loc.w24 = in->w24;
        loc.b28 = in->b28;
        loc.b29 = in->b29;
        loc.w2c = in->w2c;
        loc.w30 = in->w30;
        loc.b34 = in->b34;
        p2 = &loc.w38;
        p2[0] = in->w38;
        p2[1] = in->w3c;
        p1 = &loc.w40;
        p1[0] = in->w40;
        p1[1] = in->w44;
        p3[0] = in->w48;
        p3[1] = in->w4c;
        ((uint8_t *)p1)[0x10] = in->b50;
        ((uint8_t *)p1)[0x11] = in->b51;
        loc.w54 = in->w54;
        loc.w58 = in->w58;
        started = 1;
        ret = func_ov002_021c9450(obj, self, &loc, p3);
    }
    if (started) {
        func_ov002_021c8f10(&loc);
    }
    return ret;
}

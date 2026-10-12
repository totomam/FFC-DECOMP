#include "ffc/types.h"

extern void *func_0207e2d4(void *a, uint32_t *out, uint8_t *buf, void *d, uint32_t zero);
extern void func_0208bcc8(void *dst, void *src, uint32_t n);
extern void func_0207e890(void *object);
extern uint32_t func_0207e0f4(void *obj, uint32_t a, uint32_t b);
extern uint8_t data_021410cc[];
extern uint8_t data_021411dc[];

typedef struct {
    uint8_t *bufp;
    uint32_t cnt;
    uint32_t one;
    uint32_t obj[18];
} Frame;

uint32_t func_0207e220(void *a, void *b, void *c, void *d) {
    uint8_t buf[0x104];
    Frame s;
    uint32_t w;
    uint32_t v = 0;
    uint32_t *r4;
    uint32_t ret = 0;

    r4 = (uint32_t *)func_0207e2d4(a, &v, buf, d, v);
    if (r4 != 0) {
        *(uint32_t *)(data_021410cc + 4) = (uint32_t)r4;
        *(uint16_t *)(data_021410cc + 8) = 0;
        *(uint16_t *)(data_021410cc + 0xa) = 0;
        *(uint32_t *)(data_021410cc + 0xc) = 0;
        func_0208bcc8(data_021411dc, buf, 0x41 << 2);
        if (((uint32_t *)r4[9])[4] != 0) {
            func_0207e890(s.obj);
            w = v;
            s.bufp = buf;
            s.one = 1;
            s.obj[2] = (uint32_t)r4;
            s.obj[4] = (uint32_t)&w;
            if (func_0207e0f4(s.obj, 4, 1) != 0) {
                *(uint16_t *)(data_021410cc + 8) = (uint16_t)s.cnt;
                func_0208bcc8(data_021411dc, buf, 0x41 << 2);
            }
        }
        ret = 1;
    }
    return ret;
}

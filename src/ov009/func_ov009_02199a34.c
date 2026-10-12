#include "ffc/types.h"

extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern void func_02005988(void *dst, void *src);
extern void func_02068ddc(void *obj, void *str);
extern void *func_020059cc(void *object);
extern char data_ov009_021afad8[];
extern char data_ov009_021afae0[];
extern char data_ov009_021afae8[];

void func_ov009_02199a34(uint8_t *self, int32_t v, uint32_t a2) {
    char buf[8];
    char out[12];
    char *p;
    char *fmt;
    int32_t mode;
    int32_t i;

    if (v == 0xffff) {
        func_02091b10(buf, (uint32_t)data_ov009_021afad8);
    } else {
        mode = 0;
        if (v == 0) {
            func_02091b10(buf, (uint32_t)data_ov009_021afae0, a2, v);
        } else if (v < 0) {
            mode = 1;
            func_02091b10(buf, (uint32_t)data_ov009_021afae8, 0x2a, -v);
        } else if (v > 0) {
            mode = 2;
            func_02091b10(buf, (uint32_t)data_ov009_021afae8, 0x2a, v);
        }
        p = buf;
        i = 0;
        if (buf[i] != 0) {
            do {
                p[i] += (int8_t)(mode << 5);
                i++;
            } while (p[i] != 0);
        }
    }
    p = out;
    func_02005988(p, buf);
    func_02068ddc(*(void **)(self + 0x80), p);
    func_020059cc(p);
}

#include "ffc/types.h"

extern int func_ov001_0217c384(void *obj, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern int func_ov001_021784f0(void *obj, uint32_t a, void *buf);
extern int func_ov001_0217c3c0(void *obj, uint32_t a, void *p, int n);
extern uint32_t data_ov001_02191774;
extern uint32_t data_ov001_02191778;

int func_ov001_0217ea94(void *obj, uint32_t p1, uint32_t p2, uint32_t p3, void *p4) {
    uint8_t buf[0x20];
    int r;
    if (p4 == 0) {
        p4 = &data_ov001_02191774;
    }
    r = func_ov001_0217c384(obj, p2, 0xc9, p1);
    if (r != 0) {
        return r;
    }
    func_02086ad4(buf, (uint32_t)&data_ov001_02191778, 1, p3);
    r = func_ov001_021784f0(obj, p2, buf);
    if (r != 0) {
        return r;
    }
    r = func_ov001_0217c3c0(obj, p2, p4, 1 - 2);
    if (r != 0) {
        return r;
    }
    return 0;
}

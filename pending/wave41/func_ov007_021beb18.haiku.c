#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_020095b8(void *dst, void *src);
extern void *func_02033338(void *obj, void *a, void *b, int c);
extern void *func_020059cc(void *object);
extern void *func_02033420(void *obj, void *a, void *b);
extern void func_02056bc0(void *object, void *node);

void func_ov007_021beb18(uint8_t *p) {
    uint32_t tmp[3];
    uint32_t c[3];
    uint32_t d[3];
    void *r7;
    int flag;
    int32_t *q = *(int32_t **)(p + 0xe0);

    *q = -1;
    flag = 0;
    r7 = func_0205681c(0xb8);
    if (r7 != 0) {
        func_020095b8(tmp, *(void **)(p + 0xe8));
        flag = 1;
        r7 = func_02033338(r7, tmp, p + 0x120, 0);
    }
    if (flag) {
        func_020059cc(tmp);
    }
    func_020095b8(c, (uint8_t *)*(void **)(p + 0xe8) + 0xc);
    func_020095b8(d, (uint8_t *)*(void **)(p + 0xe8) + 0x18);
    func_02033420(r7, c, d);
    func_020059cc(d);
    func_020059cc(c);
    func_02056bc0(p + 0x14, r7);
}

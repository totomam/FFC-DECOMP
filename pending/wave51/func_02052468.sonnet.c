#include "ffc/types.h"

extern void *func_020524e0(void *a, void *b, void **c, uint8_t *d, uint8_t *e);
extern int32_t func_02052850(void *a, void *b);
extern void func_020095b8(void *a, void *b);
extern void *func_020526f4(void *a, void *b, uint8_t c, uint8_t d, void *e);
extern void *func_020059cc(void *object);
extern uint32_t data_020b04a4[];

void *func_02052468(void *p, void *q) {
    void *obj;
    uint8_t bytes[2];
    uint32_t local[4];
    void *r7;
    int r4;
    void *r5;

    r7 = func_020524e0(p, q, &obj, &bytes[1], &bytes[0]);
    r4 = 1;
    if (obj != 0) {
        int t = (func_02052850((uint8_t *)obj + 12, q) < 0) ? 1 : 0;
        if (t == 0) r4 = 0;
    }
    if (r4 != 0) {
        func_020095b8(local, q);
        local[3] = data_020b04a4[1];
        r5 = (uint8_t *)func_020526f4(p, r7, bytes[1], bytes[0], local) + 12;
        func_020059cc(local);
        return r5;
    }
    return (uint8_t *)obj + 12;
}

#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t func_ov004_0215572c(void *p);
extern void func_02005988(void *buf, uint32_t v);
extern uint32_t func_ov004_021530e0(void *p);
extern void *func_ov004_02147040(void *obj, void *buf, void *a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern uint32_t data_ov004_02157b7c[];
typedef struct { uint32_t x, y; } S;
extern S data_ov004_02157d7c;

void func_ov004_02146fc0(uint8_t *p)
{
    uint32_t buf[3];
    void *r6;
    int flag = 0;
    uint32_t v;
    uint32_t t;

    r6 = func_0205681c(0xd8);
    if (r6 != 0) {
        if (func_ov004_0215572c(*(void **)(p + 0x88))) {
            v = data_ov004_02157b7c[2];
        } else {
            v = data_ov004_02157b7c[1];
        }
        func_02005988(buf, v);
        flag = 1;
        t = func_ov004_021530e0(*(void **)(p + 0x88));
        r6 = func_ov004_02147040(r6, buf, *(void **)(p + 0x8c), t);
    }
    func_02056bc0(p + 0x14, r6);
    if (flag) {
        func_020059cc(buf);
    }
    *(S *)(p + 0x80) = data_ov004_02157d7c;
}

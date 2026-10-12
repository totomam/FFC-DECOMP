#include "ffc/types.h"

extern void *func_020655dc(void *a, uint32_t b, uint32_t c);
extern void *func_020655b8(void *a);
extern void func_02056bc0(void *object, void *node);
extern void func_ov012_021d0a8c(void *a);
extern void func_02021338(uint32_t a);

void func_ov012_021d1148(uint8_t *p) {
    uint8_t *obj = *(uint8_t **)(p + 0xc0);
    void *node;
    void *n2;
    uint8_t *q;
    if (obj[0x33c] == 0 && (int8_t)obj[0x338] <= 0) {
        node = func_020655dc(*(void **)(p + 0xc4), 7, 1);
    } else {
        node = func_020655dc(*(void **)(p + 0xc4), 8, 1);
    }
    n2 = func_020655b8(*(void **)(p + 0xc4));
    q = p + 0x14;
    func_02056bc0(q, n2);
    func_02056bc0(q, node);
    func_ov012_021d0a8c(*(void **)(p + 0xc0));
    func_02021338(0xb3);
}

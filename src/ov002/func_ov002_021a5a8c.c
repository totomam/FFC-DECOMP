#include "ffc/types.h"

extern uint32_t func_ov002_021a1868(void *self, uint32_t x);
extern void *func_ov002_021c9234(uint32_t a, uint32_t *arr, uint32_t n);
extern void *func_02055a2c(void *obj, void *node);
extern void func_02056bc0(void *object, void *node);
extern void *func_ov002_0219fff8(void *self, uint32_t *arr, uint32_t n);
extern void *func_ov002_021a464c(void *self, uint32_t n);
extern void *func_ov002_021a4558(void *self, uint32_t a, uint32_t b, uint32_t d);
extern void *func_ov002_021c9298(uint32_t n);
extern void *func_ov002_021c91dc(uint32_t n);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_ov002_021c9168(void *p);
extern void *func_ov002_021aace4(void *p, uint32_t t, uint32_t x, uint32_t z, void *obj, uint32_t one);
extern void *func_ov002_021a155c(void *self, uint32_t t, uint32_t z);
extern void *func_ov002_021a4a70(void *self, uint32_t b, uint32_t c0);

void func_ov002_021a5a8c(uint8_t *a, uint32_t b, uint32_t *c, uint32_t d, void *e)
{
    uint32_t arr[6];
    uint32_t t;
    void *node;
    void *p;
    int i;

    t = func_ov002_021a1868(a, c[2]);
    for (i = 0; i < 6; i++) {
        arr[i] = 0;
    }
    arr[0] = c[1];
    if (c[1] != c[2]) {
        arr[1] = c[2];
    }

    node = func_ov002_021c9234(0, arr, 1);
    node = func_02055a2c(*(void **)(a + 0xf0), node);
    func_02056bc0(a + 0x14, node);

    node = func_ov002_0219fff8(a, arr, 0x20);
    func_02056bc0(a + 0x14, node);

    node = func_ov002_021a464c(a, 1);
    func_02056bc0(a + 0x14, node);

    node = func_ov002_021a4558(a, c[0], c[1], d);
    func_02056bc0(a + 0x14, node);

    node = func_ov002_021c9298(0);
    node = func_02055a2c(*(void **)(a + 0xf0), node);
    func_02056bc0(a + 0x14, node);

    node = func_ov002_021c91dc(0);
    node = func_02055a2c(*(void **)(a + 0xf0), node);
    func_02056bc0(a + 0x14, node);

    node = func_ov002_0219fff8(a, arr, 0);
    func_02056bc0(a + 0x14, node);

    node = func_ov002_021a464c(a, 0);
    func_02056bc0(a + 0x14, node);

    p = (uint8_t *)e + 0x2c;
    node = func_0205681c(0x28);
    if (node != 0) {
        uint32_t x = func_ov002_021c9168(p);
        node = func_ov002_021aace4(node, t, x, 0, *(void **)(a + 0xf0), 1);
    }
    func_02056bc0(a + 0x14, node);

    node = func_ov002_021a155c(a, t, 0);
    func_02056bc0(a + 0x14, node);

    node = func_ov002_021a4a70(a, b, c[0]);
    func_02056bc0(a + 0x14, node);
}

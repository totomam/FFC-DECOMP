#include "ffc/types.h"

extern uint32_t func_ov002_02195f98(void *object, uint32_t idx);
extern uint32_t func_ov002_02195fa4(void *object);
extern uint32_t func_ov002_02195fac(void *object);
extern void func_ov002_02198758(uint32_t value);
extern uint32_t func_ov002_021c6274(void);
extern void *func_ov002_02196414(void *object);
extern uint32_t func_02005efc(void *object, void *first, ...);
extern void *func_0205681c(uint32_t size);
extern void *func_ov002_021c4a70(void *node, uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern void func_0202231c(void *node, uint32_t value);
extern void *func_020059cc(void *object);
extern uint8_t data_ov002_021d4aa0[];

void func_ov002_021995e0(uint8_t *self, uint32_t b)
{
    uint32_t arr[3];
    uint32_t i;
    uint32_t k;
    uint32_t v;
    uint32_t off;
    uint32_t x;
    void *node;

    *(uint32_t *)(self + 0xc8) = b;
    for (i = 0; i < 2; i++) {
        v = func_ov002_02195f98((void *)b, i);
        if (v != 0) {
            v += 0x80;
        }
        *(uint32_t *)(self + 0xb8 + i * 4) = v;
    }
    *(uint32_t *)(self + 0xc0) = func_ov002_02195fa4((void *)b);
    *(uint32_t *)(self + 0xc4) = func_ov002_02195fac((void *)b);

    if (*(uint32_t *)(self + 0xcc) != 0) {
        return;
    }
    func_ov002_02198758(*(uint32_t *)(self + 0xc0));
    if (func_ov002_021c6274() != 0) {
        return;
    }
    node = func_ov002_02196414((void *)b);
    off = 0x2e0;
    v = *(uint32_t *)((uint8_t *)node + off);
    if (v == 0) {
        return;
    }
    k = 0;
    for (i = 0; i < 3; i++) {
        arr[i] = k;
        k++;
    }
    func_02005efc(arr, data_ov002_021d4aa0);
    node = func_0205681c(0xf8);
    if (node != 0) {
        if (arr[0] & 1) {
            x = arr[2];
        } else {
            x = (uint32_t)arr + 1;
        }
        node = func_ov002_021c4a70(node, *(uint32_t *)(self + 0xc0), x);
    }
    *(void **)(self + 0xcc) = node;
    func_02056bc0(self + 0x48, node);
    func_0202231c(*(void **)(self + 0xcc), 0);
    func_020059cc(arr);
}

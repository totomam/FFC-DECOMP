#include "ffc/types.h"

extern int32_t data_02140750[];
extern uint8_t data_0213f670[];
extern uint32_t data_0213ecd0[];

extern int32_t *func_02077b70(void *list, int32_t *node);
extern void func_02084b2c(int32_t a, int32_t b, int32_t c);
extern void func_02077b34(void *list, int32_t *node);
extern void func_0207bf14(int32_t *node);
extern int32_t *func_0207bee8(void);
extern void func_02077aa4(void *p);
extern void func_02087058(void *p);

void func_0207bfa8(int32_t a, int32_t b, int32_t *arr, int32_t c, int32_t unused, int32_t *p)
{
    int32_t *node;
    int32_t *n;
    int32_t i;
    uint8_t *base;
    uint32_t off;

    if (p[0x49] >= 2) {
        node = func_02077b70(data_02140750, 0);
        while (node != 0) {
            if (node[2] == (int32_t)p) {
                break;
            }
            node = func_02077b70(data_02140750, node);
        }
        for (i = 0; i < node[4]; i++) {
            func_02084b2c(node[5 + i], 0, node[0xb]);
        }
        func_02077b34(data_02140750, node);
        p[0x49]--;
        func_0207bf14(node);
    }

    n = func_0207bee8();
    n[2] = (int32_t)p;
    n[3] = a;
    n[4] = b;
    for (i = 0; i < b; i++) {
        n[5 + i] = arr[i];
    }
    n[0xb] = c;

    base = data_0213f670;
    if (a == 0) {
        if (data_0213ecd0[1] != 0) {
            base = (uint8_t *)data_0213ecd0[1];
        }
    }
    p[0x49]++;
    off = 0x10e0;
    func_02077aa4(base + off);
    off -= 0x20;
    func_02087058(base + off);
}

#include "ffc/types.h"

extern void *data_020b93b8;
extern int func_0201bf6c(void *, int);
extern void func_0201bf5c(void *, int, int);
extern void *func_02056aec(void *);
extern void *func_0205681c(uint32_t);
extern void *func_02047920(void *, void *, uint16_t, int);
extern void func_02056bc0(void *, void *);

void func_ov003_0216f61c(uint8_t *p)
{
    uint32_t r4;
    void *node;
    void *r6;
    uint8_t *base;
    uint8_t *obj;
    int off;

    if (func_0201bf6c(data_020b93b8, 0x37)) {
        base = *(uint8_t **)(p + 0xa8);
        off = *(int *)(base + 8);
        if (off == 0) {
            base = 0;
        } else {
            base += off;
        }
        r4 = *(uint16_t *)(base + *(int *)(base + 4) + 0x64);
    } else {
        base = *(uint8_t **)(p + 0xa8);
        off = *(int *)(base + 8);
        if (off == 0) {
            base = 0;
        } else {
            base += off;
        }
        r4 = *(uint16_t *)(base + *(int *)(base + 4) + 0x62);
    }

    if (!func_0201bf6c(data_020b93b8, 0x37)) {
        func_0201bf5c(data_020b93b8, 0x37, 1);
    }

    r6 = func_02056aec(p);
    node = func_0205681c(0x88);
    if (node) {
        node = func_02047920(node, *(void **)(p + 0x88), (uint16_t)r4, 0);
    }
    obj = p + 0x14;
    func_02056bc0(obj, node);
    func_02056bc0(obj, r6);
}

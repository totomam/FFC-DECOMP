#include "ffc/types.h"

extern void func_ov010_021bdef8(void *p);
extern uint32_t func_0201b924(const void *object);
extern void func_0201f1f0(void *obj, uint32_t v, void *dst);
extern int func_020367bc(void *p, uint32_t x);
extern int func_0201c9ac(void *obj, uint32_t x);
extern void *data_020b93b8;
extern uint32_t data_ov010_021d15e0[2];
extern uint32_t data_ov010_021d15e8[2];
extern uint32_t data_ov010_021d15f0[2];

void func_ov010_021bdb88(void *p0)
{
    uint8_t *p = (uint8_t *)p0;
    uint32_t v;
    uint32_t key;
    uint32_t b, a;
    uint32_t *src;

    func_ov010_021bdef8(p);
    v = func_0201b924(data_020b93b8);
    func_0201f1f0(data_020b93b8, v, p + 0x90);
    v = func_0201b924(data_020b93b8);
    func_0201f1f0(data_020b93b8, v, p + 0xe8);

    if (func_020367bc(p + 0x90, 0) != 0) {
        p[0x140] = 1;
    } else {
        p[0x140] = 0;
    }

    if (*(uint32_t *)(p + 0x88) == 3) {
        key = 0xf;
        if (func_0201c9ac(data_020b93b8, key) == 0) {
            v = 1;
        } else if (func_0201c9ac(data_020b93b8, key) == 1) {
            v = 2;
        } else if (func_0201c9ac(data_020b93b8, key) == 2) {
            v = 3;
        } else if (func_0201c9ac(data_020b93b8, key) == 3) {
            v = 0xa;
        } else {
            goto copy3;
        }
        *(uint32_t *)(p + 0x8c) = v;
copy3:
        src = data_ov010_021d15e0;
        a = src[0];
        b = src[1];
        *(uint32_t *)(p + 0x80) = a;
        *(uint32_t *)(p + 0x84) = b;
        return;
    } else if (*(uint32_t *)(p + 0x88) == 4) {
        *(uint32_t *)(p + 0x8c) = 9;
        src = data_ov010_021d15e8;
        a = src[0];
        b = src[1];
        *(uint32_t *)(p + 0x80) = a;
        *(uint32_t *)(p + 0x84) = b;
        return;
    }
    src = data_ov010_021d15f0;
    a = src[0];
    b = src[1];
    *(uint32_t *)(p + 0x80) = a;
    *(uint32_t *)(p + 0x84) = b;
}

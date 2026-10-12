#include "ffc/types.h"

extern void func_0200a630(void *obj, void *data);
extern int func_0200c600(void *a, void *b);
extern void func_0200a7b0(void *a, void *b);
extern void func_0200a5dc(void *a, void *b);
extern void func_02068e18(void *obj, void *arg);
extern void *func_0200a678(void *object);
extern void func_ov013_021c10d8(void *p);
extern uint8_t data_ov013_021c4b28[];

typedef struct {
    uint8_t flag : 1;
    uint8_t count : 7;
} Hdr;

typedef struct {
    uint32_t flag : 1;
} FlagW;

#define VCALL(p, idx) ((void (*)(void *))(((void ***)(p))[0][idx]))(p)

void func_ov013_021c1010(uint8_t *a, uint32_t b)
{
    uint8_t l0[12];
    uint8_t l1[12];
    uint8_t *obj;
    uint32_t n;

    *(uint8_t *)(a + b * 8 + 0x8c) = 0;
    func_0200a630(l0, data_ov013_021c4b28);
    obj = *(uint8_t **)(a + b * 8 + 0x90);
    if (func_0200c600(l0, obj + 0x88) == 0) {
        func_0200a7b0(obj + 0x88, l0);
        if (((FlagW *)(obj + 0x88))->flag == 0) {
            n = ((Hdr *)(obj + 0x88))->count;
        } else {
            n = *(uint32_t *)(obj + 0x8c);
        }
        if (n == 0) {
            VCALL(*(void **)(obj + 0x80), 11);
            VCALL(*(void **)(obj + 0x84), 11);
        } else {
            VCALL(*(void **)(obj + 0x80), 10);
            VCALL(*(void **)(obj + 0x84), 10);
            func_0200a5dc(l1, obj + 0x88);
            func_02068e18(*(void **)(obj + 0x84), l1);
            func_0200a678(l1);
        }
    }
    func_0200a678(l0);
    func_ov013_021c10d8(a);
}

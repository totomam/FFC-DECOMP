#include "ffc/types.h"

extern int func_ov012_021d008c(void *p);
extern void func_02021338(int x);
extern void *func_020655dc(void *a, int b, int c);
extern void func_02056bc0(void *object, void *node);
extern void func_ov012_021d0774(void *p);

typedef struct {
    uint32_t flag : 1;
    uint32_t cnt : 7;
    uint32_t rest : 24;
} Hdr;

typedef struct {
    uint8_t flag : 1;
    uint8_t cnt : 7;
} Hdr8;

void func_ov012_021d013c(void *a0)
{
    uint8_t *p = (uint8_t *)a0;
    Hdr *h = (Hdr *)(p + 0x2EC);
    Hdr8 *b = (Hdr8 *)(p + 0x2EC);
    uint32_t v;
    void *r;

    if (h->flag) {
        v = *(uint32_t *)(p + 0x2F0);
    } else {
        v = b->cnt;
    }
    if (v == 0) {
        return;
    }
    if (func_ov012_021d008c(p) == 0) {
        func_02021338(0xb3);
        return;
    }
    func_02021338(0xbc);
    r = func_020655dc(*(void **)(*(uint8_t **)(p + 0x258) + 0xc4), 4, 1);
    func_02056bc0(p + 0x14, r);
    func_ov012_021d0774(p);
}

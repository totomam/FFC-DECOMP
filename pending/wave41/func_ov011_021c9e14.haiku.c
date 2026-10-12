#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
    uint16_t e;
    uint8_t pad[0x98 - 0x12];
} Loc;

extern void func_02056c9c(void *p, uint32_t x);
extern void func_0201cf34(void *h, void *buf);
extern void func_ov011_021ca0fc(void *p, void *buf);
extern void func_0201ce70(void *h, void *buf);
extern uint32_t data_ov011_021cbdcc[];
extern void *data_020b93b8;
extern uint32_t data_ov011_021cbddc[];

void func_ov011_021c9e14(uint32_t *p, uint32_t arg1)
{
    Loc loc;
    Loc *lp;
    int i;
    uint32_t v;
    uint32_t *arr;

    func_02056c9c(p, 0);
    p[0] = (uint32_t)data_ov011_021cbdcc;
    arr = (uint32_t *)((uint8_t *)p + 0x88);
    for (i = 0; i < 3; i++) {
        v = i;
        arr[i] = v;
    }
    *(uint32_t *)((uint8_t *)p + 0x98) = arg1;
    lp = &loc;
    func_0201cf34(data_020b93b8, lp);
    func_ov011_021ca0fc((uint8_t *)p + 0x88, lp);
    lp->a = v;
    lp->b = v;
    lp->c = v;
    lp->d = v;
    lp->e = (uint16_t)v;
    func_0201ce70(data_020b93b8, lp);
    *(uint32_t *)((uint8_t *)p + 0x80) = data_ov011_021cbddc[0];
    *(uint32_t *)((uint8_t *)p + 0x84) = data_ov011_021cbddc[1];
}

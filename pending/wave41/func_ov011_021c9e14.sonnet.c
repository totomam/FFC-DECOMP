/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
extern void func_02056c9c(void *p, uint32_t x);
extern void func_0201cf34(void *h, void *buf);
extern void func_ov011_021ca0fc(void *p, void *buf);
extern void func_0201ce70(void *h, void *buf);
extern uint32_t data_ov011_021cbdcc[];
extern void *data_020b93b8;
extern uint32_t data_ov011_021cbddc[];
}

struct Loc {
    uint32_t a, b, c, d;
    uint16_t e;
    uint8_t pad[0x98 - 0x12];
    ~Loc() {
        a = 0; b = 0; c = 0; d = 0; e = 0;
        func_0201ce70(data_020b93b8, this);
    }
};

struct Pair { uint32_t a, b; };
extern "C" uint32_t *func_ov011_021c9e14(uint32_t *p, uint32_t arg1)
{
    func_02056c9c(p, 0);
    p[0] = (uint32_t)data_ov011_021cbdcc;
    uint32_t *arr = (uint32_t *)((uint8_t *)p + 0x88);
    uint32_t i = 0;
    uint32_t v = i;
    for (; i < 3; i++) {
        arr[i] = v;
    }
    *(uint32_t *)((uint8_t *)p + 0x98) = arg1;
    {
        Loc loc;
        func_0201cf34(data_020b93b8, &loc);
        func_ov011_021ca0fc((uint8_t *)p + 0x88, &loc);
    }
    *(Pair *)((uint8_t *)p + 0x80) = *(Pair *)data_ov011_021cbddc;
    return p;
}

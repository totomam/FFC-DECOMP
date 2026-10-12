#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } S8;

extern uint32_t func_020159c8(uint32_t a, uint32_t b);
extern uint32_t func_0203bda0(S8 a, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02032640(uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern void func_ov005_02197514(uint32_t a);
extern void func_ov011_021c2e64(void *a);
extern void func_ov009_0219a358(uint32_t a);
extern void func_ov011_021bff9c(void *a);
extern void func_ov011_021c21a4(void *a);
extern void func_02035f58(void *a);
extern void func_0201f600(uint32_t a, uint32_t b, void *c, void *d);
extern void func_ov011_021c2600(void *a, uint32_t b, void *c);
extern void *func_02035fd0(void *object);
extern void func_ov009_0219a330(uint32_t a);
extern uint32_t data_020b8e44;
extern S8 data_ov011_021cad98;
extern uint32_t data_020b93b8;

void func_ov011_021c1d18(void *a0)
{
    uint8_t *a = (uint8_t *)a0;
    uint32_t state = *(uint32_t *)(a + 0x2bc);
    uint32_t loc[24];

    switch (state) {
    case 0xb: {
        uint32_t r;
        a[0x27a] = 1;
        a[0x340] = 1;
        r = func_0203bda0(data_ov011_021cad98,
                          func_020159c8(data_020b8e44, 0xb1), 4, 0, 0);
        *(uint32_t *)(a + 0x174) = r;
        func_02032640(r, 1);
        func_02056bc0(a + 0x48, *(void **)(a + 0x174));
        if (a[0x279] < 3) {
            func_ov005_02197514(*(uint32_t *)(a + 0x180));
        }
        func_ov011_021c2e64(a);
        func_ov009_0219a358(*(uint32_t *)(a + (a[0x279] << 2) + 0xd8));
        func_ov011_021bff9c(a);
        break;
    }
    case 0xc:
        func_ov011_021c21a4(a);
        break;
    case 0xe:
        func_02035f58(loc);
        func_0201f600(data_020b93b8, a[0x279], a + 0x220, loc);
        func_ov011_021c2600(a, a[0x279], loc);
        func_02035fd0(loc);
        break;
    case 0xfffffffe:
        func_ov009_0219a330(*(uint32_t *)(a + (a[0x279] << 2) + 0xd8));
        break;
    default:
        break;
    }
}

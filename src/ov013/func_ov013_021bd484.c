#include "ffc/types.h"

extern void func_0203be8c(void);
extern void func_0203bea0(void);
extern void func_0203bf28(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_0203bed8(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_0203c264(void);
extern void func_0203c270(void);
extern void func_0204f208(void *p, uint32_t v);
extern void func_0203c36c(void);
extern void func_0203c394(void);
extern void func_0204f550(void *p);
extern void func_020213f0(uint32_t v);
extern void func_020211d4(uint32_t a, uint32_t b);
extern void *data_0213df18;
typedef struct { uint32_t x; uint32_t y; } Pair;
extern Pair data_ov013_021c41d0;
extern Pair data_ov013_021c41d8;

void func_ov013_021bd484(uint8_t *a)
{
    uint32_t *p;

    func_0203be8c();
    func_0203bea0();
    func_0203bf28(5, 2, 4, 1, 0, 0);
    func_0203bed8(5, 1, 4, 1, 0, 0);
    func_0203c264();
    func_0203c270();
    func_0204f208(*(void **)((uint8_t *)data_0213df18 + 0x20), 0xffff);
    func_0203c36c();
    func_0203c394();
    func_0204f550(data_0213df18);

    *(uint32_t *)(a + 0xe0) = 1;
    *(uint32_t *)(a + 0xe8) = 0;
    *(uint32_t *)(a + 0xd8) = 0;
    *(uint32_t *)(a + 0xe4) = 1;
    *(uint32_t *)(a + 0xdc) = 0;
    *(uint32_t *)(a + 0xec) = 0;
    *(uint32_t *)(a + 0xf4) = 0;
    *(uint32_t *)(a + 0xf8) = 0;
    *(uint32_t *)(a + 0xcc) = 0;
    *(uint32_t *)(a + 0xfc) = 0;
    *(uint32_t *)(a + 0x118) = 0;

    func_020213f0(0x36);
    func_020211d4(0x72, 0);

    p = *(uint32_t **)(a + 0xc8);
    switch (*p) {
    case 0:
        *(Pair *)(a + 0xb8) = data_ov013_021c41d0;
        break;
    case 2:
        *(Pair *)(a + 0xb8) = data_ov013_021c41d8;
        break;
    }
}

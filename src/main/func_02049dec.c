#include "ffc/types.h"

extern void func_020375bc(uint32_t a);
extern void func_0203be8c(void);
extern void func_0203bea0(void);
extern void func_0203beb4(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_0203bf04(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_0204f550(uint32_t a);
extern void func_0203c33c(void);
extern void func_0203c354(void);
extern void func_0203c264(void);
extern void func_0203c270(void);
extern void func_0203c380(void);
extern void func_0203c394(void);
extern void func_0205428c(uint32_t a);
extern uint32_t data_0213df18;
extern uint32_t data_020b00a4[2];
extern uint32_t data_020b00ac[2];
extern uint32_t data_020b00b4[2];
extern uint32_t data_020b00bc[2];
extern uint32_t data_020b00c4[2];
extern uint32_t data_020b00cc[2];
extern uint32_t data_020b00d4[2];
extern uint32_t data_020b00dc[2];
extern uint32_t data_020b00e4[2];
extern uint32_t data_020b00ec[2];

typedef struct { uint32_t a, b; } Pair;

void func_02049dec(uint8_t *p)
{
    uint32_t zero = 0;
    func_020375bc(0);
    func_0203be8c();
    func_0203bea0();
    func_0203beb4(5, 4, 0, 0);
    func_0203bf04(5, 4, 0, 0);
    func_0204f550(data_0213df18);
    func_0203c33c();
    func_0203c354();
    func_0203c264();
    func_0203c270();
    func_0203c380();
    func_0203c394();

    switch (*(uint32_t *)(p + 0xa0)) {
    case 0:
        *(Pair *)(p + 0x80) = *(Pair *)data_020b00a4;
        break;
    case 13:
        *(uint32_t *)(p + 0xa0) = zero;
        *(Pair *)(p + 0x80) = *(Pair *)data_020b00ac;
        break;
    case 14:
        *(uint32_t *)(p + 0xa0) = zero;
        *(Pair *)(p + 0x80) = *(Pair *)data_020b00b4;
        break;
    case 15:
        *(Pair *)(p + 0x80) = *(Pair *)data_020b00bc;
        break;
    case 16:
        *(Pair *)(p + 0x80) = *(Pair *)data_020b00c4;
        break;
    case 2:
        *(Pair *)(p + 0x80) = *(Pair *)data_020b00cc;
        break;
    case 4:
        *(Pair *)(p + 0x80) = *(Pair *)data_020b00d4;
        break;
    case 5:
        *(Pair *)(p + 0x80) = *(Pair *)data_020b00dc;
        break;
    case 6:
        *(Pair *)(p + 0x80) = *(Pair *)data_020b00e4;
        break;
    case 7:
        func_0205428c(2);
        break;
    case 10:
        *(Pair *)(p + 0x80) = *(Pair *)data_020b00ec;
        break;
    default:
        break;
    }
}

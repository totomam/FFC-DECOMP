#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    uint32_t w1;
    uint32_t rest[12];
} Elem;

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t idx;
} State;

extern State data_ov007_021c9bac;
extern Elem data_ov007_021c9bc4[];
extern uint8_t data_ov007_021c86b8[];
extern uint8_t data_ov007_021c86d0[];
extern uint8_t data_ov007_021c86ec[];

extern void func_ov007_021bf91c();
extern uint32_t func_ov007_021c0378();
extern uint32_t func_ov001_021734a8();
extern void func_ov001_02173488();

uint32_t func_ov007_021bf2d8(void)
{
    State *a = &data_ov007_021c9bac;
    Elem *arr = data_ov007_021c9bc4;
    uint32_t sw;

    if (a->f8 != 2) {
        func_ov007_021bf91c(0x14f, data_ov007_021c86b8);
        return 0x11;
    }
    a->f8 = 3;
    sw = a->fc;
    switch (sw) {
    case 2:
        func_ov007_021c0378(a->f4, arr[a->idx].w0);
        break;
    case 3:
        func_ov007_021c0378(a->f4, arr[a->idx].w0);
        break;
    case 4:
        func_ov007_021c0378(a->f4, arr[a->idx].w0);
        break;
    case 5: {
        uint32_t r = func_ov001_021734a8(arr[a->idx].w0);
        func_ov007_021bf91c(0x181, data_ov007_021c86d0, r);
        func_ov001_02173488(arr[a->idx].w0);
        break;
    }
    case 6: {
        uint32_t r = func_ov001_021734a8(arr[a->idx].w1);
        func_ov007_021bf91c(0x188, data_ov007_021c86d0, r);
        func_ov001_02173488(arr[a->idx].w0);
        break;
    }
    case 7:
        func_ov007_021c0378(a->f4, arr[a->idx].w0);
        break;
    case 8:
        func_ov007_021c0378(a->f4, arr[a->idx].w0);
        break;
    case 9:
        func_ov007_021c0378(a->f4, arr[a->idx].w0);
        break;
    case 10:
        func_ov007_021c0378(a->f4, arr[a->idx].w0);
        break;
    case 11:
        func_ov007_021c0378(a->f4, arr[a->idx].w0);
        break;
    case 12:
        func_ov007_021c0378(a->f4, arr[a->idx].w0);
        break;
    case 13:
        func_ov007_021c0378(a->f4, arr[a->idx].w0);
        break;
    default:
        func_ov007_021bf91c(0x18f, data_ov007_021c86ec);
        break;
    }
    return 0;
}

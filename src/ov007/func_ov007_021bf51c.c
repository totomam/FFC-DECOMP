#include "ffc/types.h"

extern int func_ov007_021bf958(int *out, int b);
extern void func_ov007_021bff24(void);
extern int func_ov007_021c01dc(int id, void *p, void *cb, int z);
extern int func_ov007_021c0148(int id);
extern void func_ov007_021bf91c(int code, void *str, int id);
extern int func_ov007_021bfddc(int code, int id);
extern void func_ov007_021bff10(int code);
extern void func_ov007_021bfa14(void);
extern uint32_t data_ov007_021c9bac[];
extern uint32_t data_ov007_021c9bc4[];
extern char data_ov007_021c874c[];

int func_ov007_021bf51c(int a, int b)
{
    int out;
    int r;

    if (func_ov007_021bf958(&out, b)) {
        return out;
    }
    func_ov007_021bff24();
    ((uint32_t *)((uint8_t *)data_ov007_021c9bc4 + data_ov007_021c9bac[5] * 0x38))[1] = a;
    ((uint32_t *)((uint8_t *)data_ov007_021c9bc4 + data_ov007_021c9bac[5] * 0x38))[2] = b;
    b = 0;
    r = func_ov007_021c01dc(data_ov007_021c9bac[1],
        (uint8_t *)data_ov007_021c9bc4 + data_ov007_021c9bac[5] * 0x38 + 4,
        func_ov007_021bfa14, 0);
    if (r == 0) {
        b = func_ov007_021c0148(data_ov007_021c9bac[1]);
        func_ov007_021bf91c(0x263, data_ov007_021c874c, b);
        return func_ov007_021bfddc(3, b);
    }
    ((uint32_t *)((uint8_t *)data_ov007_021c9bc4 + data_ov007_021c9bac[5] * 0x38))[0] = r;
    func_ov007_021bff10(3);
    return b;
}

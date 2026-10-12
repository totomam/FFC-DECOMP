#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021afa50(void *p);
extern void *func_ov001_0218dde0(void *obj, int idx);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056b34(void);
extern uint32_t data_ov007_021c5af8[2];

void func_ov007_021b0384(void *param_0)
{
    void *r5;
    uint32_t d0;
    uint32_t d1;

    r5 = func_0205681c(0x17c);
    if (r5 != 0) {
        r5 = func_ov007_021afa50(r5);
    }
    func_02056bc0(func_ov001_0218dde0(param_0, 0), r5);
    func_ov001_0218dde0(param_0, 3);
    r5 = func_02056b34();
    func_02056bc0(func_ov001_0218dde0(param_0, 0), r5);
    d0 = data_ov007_021c5af8[0];
    d1 = data_ov007_021c5af8[1];
    *(uint32_t *)((uint8_t *)param_0 + 0xb0) = d0;
    *(uint32_t *)((uint8_t *)param_0 + 0xb4) = d1;
}

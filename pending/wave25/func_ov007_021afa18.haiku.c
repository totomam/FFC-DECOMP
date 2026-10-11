#include "ffc/types.h"

extern void *func_02056aec(void);
extern void *func_0203b708(int);
extern void func_02056bc0(void *object, void *node);

void func_ov007_021afa18(uint8_t *p)
{
    uint8_t *obj;
    if (*(uint32_t *)(p + 0xdc) != 1) {
        return;
    }
    obj = p + 0x14;
    *(uint32_t *)*(uint32_t *)(p + 0xd4) = 0;
    {
        void *r5 = func_02056aec();
        void *r1 = func_0203b708(30);
        func_02056bc0(obj, r1);
        func_02056bc0(obj, r5);
    }
}

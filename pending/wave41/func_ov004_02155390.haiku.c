#include "ffc/types.h"

extern uint32_t func_ov004_0215352c(void *p);
extern void func_ov004_02148a18(void *p);
extern void func_ov004_0214ced4(void *p);
extern void func_02056c4c(void *p);
extern void func_ov004_0214faa4(void *p);
extern void func_0206da3c(void *p);

void func_ov004_02155390(void *p)
{
    uint8_t *self = (uint8_t *)p;
    uint32_t *words = (uint32_t *)p;
    uint32_t i = 0;
    uint32_t n = func_ov004_0215352c(p);

    while (i < n) {
        uint32_t idx = words[0x40 + i];
        void **obj = *(void ***)((idx << 2) + (self + i * 0x34) + 0x120);
        void **vt = (void **)*obj;
        ((void (*)(void *))vt[5])(obj);
        i++;
        n = func_ov004_0215352c(p);
    }

    func_ov004_02148a18(*(void **)(self + 0xf8));
    func_ov004_0214ced4(*(void **)(self + 0xfc));
    func_02056c4c(*(void **)(self + 0x254));
    func_ov004_0214faa4(*(void **)(self + 0xe4));
    self[0x384] = 0;
    {
        void *q = *(void **)(self + 0x290);
        if (q != 0) {
            func_0206da3c(q);
        }
    }
}

#include "ffc/types.h"

extern void *func_0203c23c(void);
extern void *func_0203c250(void);
extern void func_02060e88(void *obj, uint32_t v);
extern void func_02060ea4(void *obj, uint32_t v);
extern uint32_t func_0204f7d4(const void *object);
extern uint32_t func_0204f7ec(const void *object);
extern void func_0204e7ac(void);
extern void func_ov001_0218dde0(void *p, uint32_t v);
extern void func_02056c4c(void);
extern void *data_0213df18;

void func_ov001_0218def8(void *a, uint32_t b)
{
    uint32_t n;
    void *o;

    if (b == 0 || b != 1) {
        n = 1;
    } else {
        n = 2;
    }
    o = func_0203c23c();
    func_02060e88(o, n);
    o = func_0203c23c();
    func_02060ea4(o, 0x10);
    func_0204f7d4(data_0213df18);
    func_0204e7ac();
    o = func_0203c250();
    func_02060e88(o, n);
    o = func_0203c250();
    func_02060ea4(o, 0x10);
    func_0204f7ec(data_0213df18);
    func_0204e7ac();
    func_ov001_0218dde0(a, 3);
    func_02056c4c();
}

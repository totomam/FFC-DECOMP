#include "ffc/types.h"

extern void func_0203be8c(void);
extern void func_0203bea0(void);
extern void func_0203c36c(void);
extern void func_0203c394(void);
extern void func_0203c29c(void);
extern void func_0206047c(void);
extern void func_0203c2ac(void);
extern void func_0204f550(void *p);
extern void *func_0205681c(uint32_t size);
extern void *func_02039120(void *p);
extern void func_02039140(void *p, uint32_t a, uint32_t b, uint32_t c);
extern void func_02039184(void *p, uint32_t v);
extern uint32_t data_0213df18;
extern void *data_02139d24;

void func_0204a23c(uint32_t a)
{
    func_0203be8c();
    func_0203bea0();
    func_0203c36c();
    func_0203c394();
    func_0203c29c();
    func_0206047c();
    func_0203c2ac();
    func_0206047c();
    func_0204f550((void *)data_0213df18);
    if (data_02139d24 == 0) {
        void *p = func_0205681c(0x48);
        if (p != 0) {
            p = func_02039120(p);
        }
        data_02139d24 = p;
    }
    func_02039140(data_02139d24, a, 1, 1);
    if (data_02139d24 == 0) {
        void *p = func_0205681c(0x48);
        if (p != 0) {
            p = func_02039120(p);
        }
        data_02139d24 = p;
    }
    func_02039184(data_02139d24, 0x27);
}

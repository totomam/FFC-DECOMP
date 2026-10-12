#include "ffc/types.h"

extern uint32_t func_02087a94(uint32_t index);
extern void func_02088f30(void);
extern void *func_0205681c(uint32_t size);
extern void *func_020496f4(void *p);
extern void *func_02049418(void *a, void *b);
extern void func_0205519c(void *v, void *p);
extern void *data_0213e098;

void main(void) {
    uint32_t r = func_02087a94(3);
    if (r >= 0x02000000) {
        func_02088f30();
    }
    void *p = func_0205681c(0xe8);
    if (p) {
        void *q = func_0205681c(0x90);
        void *arg = q;
        if (q) {
            arg = func_020496f4(q);
        }
        p = func_02049418(p, arg);
    }
    func_0205519c(data_0213e098, p);
}

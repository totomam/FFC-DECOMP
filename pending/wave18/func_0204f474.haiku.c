#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_0204f494(void *p);
extern void func_0204f300(void);
extern uint32_t data_0213df10[];

void func_0204f474(void) {
    void *p = func_0205681c(0x98);
    if (p != 0) {
        p = func_0204f494(p);
    }
    ((void **)data_0213df10)[2] = p;
    func_0204f300();
}

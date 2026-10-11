#include "ffc/types.h"

extern int func_020782c8(void *p);
extern void func_02088f30(void);
extern void func_02056844(void *p);
extern char data_020b04b8[];

void *func_02052324(void *p) {
    *(void **)p = data_020b04b8;
    if (func_020782c8((uint8_t *)p + 8) == 0) {
        func_02088f30();
    }
    func_02056844(p);
    return p;
}

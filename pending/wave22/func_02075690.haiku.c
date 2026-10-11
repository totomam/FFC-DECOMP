#include "ffc/types.h"

extern char data_020b2634[];
extern char data_020b2648[];
extern uint32_t data_0213e1f8;
extern void func_02055abc(void *p);

typedef void (*VFn)(void *);

void *func_02075690(void *self) {
    void **s = (void **)self;
    void **o;

    s[0] = data_020b2634;
    s[5] = data_020b2648;
    o = (void **)s[16];
    if (o != 0) {
        ((VFn)((void **)*o)[1])(o);
    }
    s[16] = 0;
    data_0213e1f8 = 0;
    func_02055abc((char *)self + 0x14);
    return self;
}

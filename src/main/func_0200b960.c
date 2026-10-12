#include "ffc/types.h"

extern char data_020ab024[];
extern void func_02061344(void *p);
extern void func_02061338(void *p);
extern void func_02056844(void *p);

void *func_0200b960(void *p)
{
    uint32_t i;
    *(void **)p = data_020ab024;
    for (i = 0; i < 2; i++) {
        void *q = ((void **)p)[7 + i];
        if (q != 0) {
            func_02061344(q);
        }
    }
    func_02061338(p);
    func_02056844(p);
    return p;
}

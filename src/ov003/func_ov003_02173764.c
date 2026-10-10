#include "ffc/types.h"

extern void func_02056858(void);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern void func_02056db0(void *object);
extern void func_02056844(void *object);
extern char data_ov003_0217b8ec[];

void *func_ov003_02173764(void *p)
{
    uint8_t *self = (uint8_t *)p;
    uint8_t *r4;

    *(void **)self = (void *)data_ov003_0217b8ec;
    if (*(void **)(self + 0xa8) != 0) {
        func_02056858();
        *(void **)(self + 0xa8) = 0;
    }

    r4 = self + 0x8c;
    if (*(void **)(r4 + 4) != 0) {
        if (*(uint8_t *)(r4 + 0xc) != 0) {
            func_02052d3c(*(void **)(r4 + 4), *(void **)(r4 + 8));
        }
        func_02052c04(*(void **)(r4 + 4));
    }
    func_02053290(r4);
    func_02056db0(self);
    func_02056844(self);
    return self;
}

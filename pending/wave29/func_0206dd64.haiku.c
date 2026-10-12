#include "ffc/types.h"

extern char data_020b1ec8[];
extern char data_020b1edc[];
extern void func_02054738(void *p);
extern void func_02056858(void *p);
extern void func_02054844(void *p);
extern void func_02056844(void *p);

void *func_0206dd64(void *p0) {
    uint8_t *p = (uint8_t *)p0;
    *(void **)p = data_020b1ec8;
    *(void **)(p + 0x14) = data_020b1edc;
    func_02054738(p + 0x14);
    func_02056858(*(void **)(p + 0x238));
    func_02056858(*(void **)(p + 0x24));
    func_02056858(*(void **)(p + 0x2c));
    func_02054844(p + 0x14);
    func_02056844(p);
    return p;
}

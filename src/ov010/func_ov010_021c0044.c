#include "ffc/types.h"

extern char data_ov010_021d1acc[];
extern void func_02056844(void *);
extern void func_020367a8(void *);
extern void func_0200d5ec(void *);
extern void func_020695d0(void *);

void *func_ov010_021c0044(void *a) {
    uint8_t *p = (uint8_t *)a;
    *(char **)p = data_ov010_021d1acc;
    if (*(void **)(p + 0x180) != 0) {
        func_02056844(*(void **)(p + 0x180));
        *(void **)(p + 0x180) = 0;
    }
    func_020367a8(p + 0x124);
    func_0200d5ec(p + 0xf4);
    func_020695d0(p);
    func_02056844(p);
    return p;
}

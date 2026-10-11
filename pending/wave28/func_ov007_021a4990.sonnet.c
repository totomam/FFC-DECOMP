#include "ffc/types.h"

extern void *func_02056dd4(void);
extern void func_0206047c(uint32_t v);
extern void func_ov007_021a6c80(void *p);
extern void func_ov007_021a6cb4(void *p);
extern void func_020558d8(void *p);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);
extern char data_ov007_021c3e38[];
extern char data_ov007_021c3e54[];

void *func_ov007_021a4990(void *a0)
{
    uint8_t *p = (uint8_t *)a0;
    *(void **)p = data_ov007_021c3e38;
    *(void **)(p + 0x80) = data_ov007_021c3e54;
    func_0206047c(*(uint32_t *)((uint8_t *)func_02056dd4() + 0x20));
    func_ov007_021a6c80(p + 0x128);
    func_ov007_021a6cb4(p + 0x11c);
    func_020558d8(p + 0x80);
    func_02056db0(p);
    func_02056844(p);
    return p;
}

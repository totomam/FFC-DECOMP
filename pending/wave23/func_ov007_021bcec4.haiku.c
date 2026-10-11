#include "ffc/types.h"

extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern void func_020743ac(void *a, void *b, void *c, uint32_t d, void *e, void *f, void *g);
extern char data_ov007_021c81d8[];
extern void func_ov007_021bc678(void);
extern char data_ov007_021c81cc[];
extern char data_ov007_021c1654[];

void func_ov007_021bcec4(uint8_t *p)
{
    uint8_t buf[0x100];

    func_02091b10(buf, (uint32_t)data_ov007_021c81d8, *(uint32_t *)(p + 0x1d4));
    func_020743ac(*(void **)(p + 0xb0), data_ov007_021c81cc, data_ov007_021c1654, 0x5a,
                  buf, (void *)func_ov007_021bc678, (void *)*(uint32_t *)(p + 0x1d8));
}

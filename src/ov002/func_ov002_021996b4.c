#include "ffc/types.h"

extern void func_020559d4(void *p);
extern void func_ov002_021993c4(void *p);

void func_ov002_021996b4(uint8_t *p)
{
    func_020559d4(p + 0x80);
    func_ov002_021993c4(p);
}

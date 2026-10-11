#include "ffc/types.h"

extern void func_ov010_021bf3b4(void *p);
extern void func_0200d5ec(void *p);
extern void func_ov010_021bd4e0(void *p);

void *func_ov010_021bf404(void *p)
{
    uint8_t *b = (uint8_t *)p;
    func_ov010_021bf3b4(b + 0x11c);
    func_0200d5ec(b + 0x108);
    func_ov010_021bd4e0(p);
    return p;
}

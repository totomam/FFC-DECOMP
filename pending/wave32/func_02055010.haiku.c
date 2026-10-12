#include "ffc/types.h"

extern void func_02056b74(void *p);
extern void func_02056844(void *p);

void *func_02055010(uint8_t *p)
{
    func_02056b74(p + 0x118);
    func_02056b74(p + 0xe4);
    func_02056b74(p + 0xb0);
    func_02056b74(p + 0x7c);
    func_02056b74(p + 0x48);
    func_02056b74(p + 0x14);
    func_02056844(p);
    return p;
}

#include "ffc/types.h"

extern void func_ov010_021bf3b4(uint8_t *p);
extern void func_0200d5ec(uint8_t *p);
extern void func_ov010_021bd4e0(uint8_t *p);
extern void func_02056844(uint8_t *p);

uint8_t *func_ov010_021bf424(uint8_t *p)
{
    func_ov010_021bf3b4(p + 0x11C);
    func_0200d5ec(p + 0x108);
    func_ov010_021bd4e0(p);
    func_02056844(p);
    return p;
}

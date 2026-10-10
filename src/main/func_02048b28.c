#include "ffc/types.h"

extern void *func_02035e30(void *object);
extern void *func_02035fd0(void *object);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);

void *func_02048b28(uint8_t *p)
{
    uint8_t *q = p + 0xa0;

    func_02035e30(q + 0xd4);
    func_02035fd0(q + 0x74);
    func_02035fd0(q + 0x14);
    func_02056db0(p);
    func_02056844(p);
    return p;
}

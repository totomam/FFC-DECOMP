#include "ffc/types.h"

extern uint8_t data_02143540[];
extern void func_0208bc48(void);
extern int func_02087460(void);
extern void func_0208bbd0(void *node);
extern void func_0208b4a4(int a, int b, int c, uint32_t d, uint32_t e);

void func_0208b5c0(uint32_t p0, uint32_t p1)
{
    *(uint32_t *)(data_02143540 + 0x14) = 3;
    func_0208bc48();
    if (func_02087460() != 0) {
        func_0208bbd0(*(void **)0x021dbccc);
    }
    func_0208b4a4(0xe, 0, 0, p0, p1);
}

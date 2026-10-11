#include "ffc/types.h"

extern void func_ov004_02151f10(void *p);
extern void func_ov004_02148680(void *p);
extern void func_ov004_02151f74(void *p);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);

void *func_ov004_02152428(uint8_t *a)
{
    func_ov004_02151f10(a + 0x144);
    func_ov004_02148680(a + 0x124);
    func_ov004_02148680(a + 0x118);
    func_ov004_02151f74(a + 0x10c);
    func_02056db0(a);
    func_02056844(a);
    return a;
}

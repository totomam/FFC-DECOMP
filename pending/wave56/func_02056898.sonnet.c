#include "ffc/types.h"

extern void func_02087924(void);
extern void func_0208823c(void);
extern void func_020883b4(void);
extern void func_02056894(void);
extern void func_02081800(void);
extern void func_02087840(void);
extern void func_02087154(uint32_t a, uint32_t b);
extern void func_02086770(uint32_t a);
extern uint32_t func_02087a94(uint32_t index);
extern uint32_t func_02087a88(uint32_t index);
extern void func_0204e594(uint32_t a, uint32_t b);
extern void func_02087c08(uint32_t index, uint32_t value);
extern void func_02053f60(void);
extern void func_02054194(uint32_t a);
extern void func_02054d18(void);
extern void func_0204f474(void);
extern void func_02051928(void);
extern void func_0206aa00(void);
extern void func_0206bef0(void);
extern void func_020528d0(void);
extern void func_02055820(void);
extern void func_020541bc(void);
extern void func_02054354(void);
extern uint32_t data_02141510[];

void func_02056898(void)
{
    uint32_t a;
    uint32_t b;
    uint32_t r4;
    uint32_t r5;

    func_02087924();
    func_0208823c();
    func_020883b4();
    func_02056894();
    func_02081800();
    func_02087840();
    func_02087154(data_02141510[1], 0x200);
    func_02086770(0x100);
    a = func_02087a94(0);
    b = func_02087a88(0);
    r5 = (b + 0x1f) & ~0x1fu;
    r4 = (a + 0x1f) & ~0x1fu;
    func_0204e594(r4, r5);
    func_02087c08(0, r5);
    func_02053f60();
    func_02054194(0);
    func_02054d18();
    func_0204f474();
    func_02051928();
    func_0206aa00();
    func_0206bef0();
    func_020528d0();
    func_02055820();
    func_020541bc();
    func_02054354();
}

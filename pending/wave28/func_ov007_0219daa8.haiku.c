#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern uint32_t func_0201af34(uint32_t);
extern void func_0201af38(uint32_t, uint32_t);
extern void func_0201b6ac(uint32_t, uint32_t);
extern void func_ov007_0219de14(void);
extern void func_0201b180(uint32_t, uint32_t, uint32_t);
extern void func_0201b5ac(uint32_t);
extern void func_ov007_0219e11c(void);

void func_ov007_0219daa8(uint8_t *p)
{
    uint32_t r6 = func_0201af34(data_020b93b8);
    func_0201af38(data_020b93b8, 1 ^ r6);
    func_0201b6ac(data_020b93b8, p[0xed]);
    func_0201af38(data_020b93b8, r6);
    func_ov007_0219de14();
    func_0201b180(data_020b93b8, 1, 0);
    func_0201b5ac(data_020b93b8);
    func_ov007_0219e11c();
}

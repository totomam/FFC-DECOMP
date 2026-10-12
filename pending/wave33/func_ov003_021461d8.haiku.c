#include "ffc/types.h"

extern uint32_t *data_0213df18;
extern void func_0204ec1c(uint32_t a);
extern void func_0203bea0(void);
extern void func_0204eda4(uint32_t a, uint32_t b, uint32_t c);
extern void func_0203bf28(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_0204ebb4(uint32_t a);
extern void func_0204f550(uint32_t *a);
extern uint32_t func_0203c2e4(void);
extern void func_0205947c(uint32_t a, uint32_t b);
extern void func_0203c33c(void);
extern void func_0203c264(void);
extern void func_0203c354(void);
extern void func_0203c270(void);

void func_ov003_021461d8(void)
{
    func_0204ec1c(data_0213df18[8]);
    func_0204ec1c(data_0213df18[9]);
    func_0203bea0();
    func_0204eda4(data_0213df18[8], 5, 1);
    func_0203bf28(2, 0, 4, 1, 0, 0);
    func_0204ebb4(data_0213df18[8]);
    func_0204ebb4(data_0213df18[9]);
    func_0204f550(data_0213df18);
    func_0205947c(func_0203c2e4(), 1);
    func_0203c33c();
    func_0203c264();
    func_0203c354();
    func_0203c270();
}

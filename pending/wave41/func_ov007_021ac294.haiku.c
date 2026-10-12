#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void func_02056c4c(void *p);
extern void *func_ov007_021ac2fc(void *a, uint32_t x, uint32_t y, uint32_t z);
extern void *func_0203b720(void);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov007_021c52f8[];

void func_ov007_021ac294(uint8_t *a, uint32_t p1)
{
    uint8_t *s = a + 0x14;
    uint8_t flag = s[0x12];
    uint8_t *o = s + 0x1c;
    uint32_t r4;
    void *res;

    if (flag != 0) {
        func_0208763c(o);
    }
    r4 = (*(uint32_t *)(s + 0x14) == 0);
    if (flag != 0) {
        func_02087678(o);
    }
    if (r4 == 0) {
        func_02056c4c(s);
    }
    res = func_ov007_021ac2fc(a, data_ov007_021c52f8[0], data_ov007_021c52f8[1], p1);
    r4 = (uint32_t)res;
    func_02056bc0(s, func_0203b720());
    func_02056bc0(s, (void *)r4);
}

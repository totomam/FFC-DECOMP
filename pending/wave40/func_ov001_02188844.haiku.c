#include "ffc/types.h"

extern int func_ov000_02159000(void *a);
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void func_ov001_02188d14(int a, int b);
extern void *func_02084b2c(void *dst, int val, uint32_t size);
extern int func_ov001_02189440(void *a, void *b, uint32_t c);
extern uint8_t data_ov001_02195780[];
extern uint8_t data_ov001_02195764[];

int func_ov001_02188844(void *a, void *b, uint32_t c)
{
    if (func_ov000_02159000(a) != 0) {
        return 0;
    }
    func_0208763c(data_ov001_02195780);
    if (*(int *)(data_ov001_02195764 + 0x14) != 1) {
        func_ov001_02188d14(2, 0);
        func_02087678(data_ov001_02195780);
        return 0;
    }
    *(int *)(data_ov001_02195764 + 0x14) = 2;
    func_02087678(data_ov001_02195780);
    func_02084b2c(a, 0, c * 0xb0);
    if (func_ov001_02189440(a, b, c) != 0) {
        return 1;
    }
    func_0208763c(data_ov001_02195780);
    *(int *)(data_ov001_02195764 + 0x14) = 1;
    func_02087678(data_ov001_02195780);
    return 0;
}

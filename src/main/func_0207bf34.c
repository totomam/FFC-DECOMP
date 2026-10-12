#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_0207bd2c(void *s);
extern void func_0207a0d8(void *s);
extern void func_02087678(void *p);
extern uint8_t data_02140738[];
extern struct {
    uint8_t pad[4];
    uint8_t *ptr;
} data_0213ecd0;

void func_0207bf34(uint32_t a, uint32_t b, uint8_t *s)
{
    if (a == *(uint32_t *)(s + 0x134)) {
        func_0208763c(data_02140738);
        if (data_0213ecd0.ptr != 0) {
            func_0208763c(data_0213ecd0.ptr + 0x10c8);
        }
        func_0207bd2c(s);
        *(uint32_t *)(s + 0x134) = 0;
        *(uint32_t *)(s + 0x138) = 0;
        *(uint8_t *)(s + 0x12c) = 0;
        if (*(int32_t *)(s + 0x128) > 0) {
            func_0207a0d8(s);
            *(uint32_t *)(s + 0x128) = 0;
        }
        func_02087678(data_02140738);
        if (data_0213ecd0.ptr != 0) {
            func_02087678(data_0213ecd0.ptr + 0x10c8);
        }
    }
}

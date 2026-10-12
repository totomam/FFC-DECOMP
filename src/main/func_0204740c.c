#include "ffc/types.h"

extern char data_020afa34[];
extern uint32_t data_020b93b8;
extern uint32_t func_0201f124(uint32_t x);
extern void func_0201bcf4(uint32_t a, uint32_t b, uint32_t c);
extern void func_02046f9c(void *p);

void *func_0204740c(void *p)
{
    uint8_t *s = (uint8_t *)p;
    uint32_t mode = 0x18;
    uint32_t flag;
    uint32_t t;

    *(char **)s = data_020afa34;
    if (*(s + 0x94) == 0) {
        mode = 0x19;
    }
    t = func_0201f124(data_020b93b8);
    flag = 1;
    if (*(uint32_t *)(s + 0x90) == t) {
        flag = 0;
    }
    func_0201bcf4(data_020b93b8, mode, flag);
    func_02046f9c(p);
    return p;
}

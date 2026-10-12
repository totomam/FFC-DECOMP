#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern uint8_t data_0213e118[];

int func_0205b3e8(uint8_t *a)
{
    uint8_t *d = data_0213e118;
    int r;
    func_0208763c(d);
    if (*(uint32_t *)(a + 0xb0) == 0 && *(uint32_t *)(a + 0xc8) == 0 && *(uint32_t *)(a + 0xe0) == 0) {
        r = 1;
    } else {
        r = 0;
    }
    func_02087678(d);
    return r;
}

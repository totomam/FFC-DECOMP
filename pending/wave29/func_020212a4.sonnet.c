#include "ffc/types.h"

typedef struct {
    void *p;
    volatile uint8_t flag;
} Loc;

extern uint8_t data_020b93e0[];
extern uint32_t data_020ad5c4[];
extern void func_0208763c(void);
extern void func_02007c34(uint32_t a);
extern void func_02087678(void *p);

void func_020212a4(uint32_t a)
{
    Loc loc;
    loc.p = data_020b93e0;
    loc.flag = 1;
    if (loc.flag) {
        func_0208763c();
    }
    data_020ad5c4[1] = (uint32_t)-1;
    func_02007c34(a);
    if (loc.flag) {
        func_02087678(loc.p);
    }
}

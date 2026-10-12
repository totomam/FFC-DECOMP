#include "ffc/types.h"

extern uint8_t data_020b0e8c[];
extern uint8_t data_020b0ea0[];
extern uint8_t data_0213e118[];
extern void func_0208763c(void);
extern void func_02054738(void *p);
extern void func_02087678(void *p);
extern void func_02054844(void *p);

uint32_t *func_0205b468(uint32_t *p)
{
    struct {
        void *ptr;
        volatile uint8_t flag;
    } loc;

    p[0] = (uint32_t)data_020b0e8c;
    p[5] = (uint32_t)data_020b0ea0;
    loc.ptr = data_0213e118;
    loc.flag = 1;
    if (loc.flag != 0) {
        func_0208763c();
    }
    func_02054738(p + 5);
    if (loc.flag != 0) {
        func_02087678(loc.ptr);
    }
    func_02054844(p + 5);
    return p;
}

#include "ffc/types.h"

extern char data_020b2658[];
extern char data_020b266c[];
extern void func_02074c04(void *p);
extern void func_02074a5c(void *p);
extern void func_02054844(void *p);
extern void func_02056844(void *p);

void *func_020749f8(void *this_) {
    uint8_t *p = (uint8_t *)this_;
    *(void **)p = (void *)data_020b2658;
    *(void **)(p + 0x14) = (void *)data_020b266c;
    func_02074c04(p);
    func_02074a5c(p);
    {
        void **obj = *(void ***)(p + 0x2c);
        if (obj != 0) {
            ((void (*)(void *))((void **)*obj)[1])(obj);
        }
    }
    *(void **)(p + 0x2c) = 0;
    func_02054844(p + 0x14);
    func_02056844(p);
    return p;
}

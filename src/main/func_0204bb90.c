#include "ffc/types.h"

extern uint32_t *func_0204dc5c(void *a, uint8_t *b);
extern void func_0204bb68(void *p);
extern void func_0204b098(void *p);

int func_0204bb90(void *a, uint8_t *p) {
    uint32_t *r = func_0204dc5c(a, p);
    if (r != 0) {
        r[4] = 0;
    }
    func_0204bb68(*(void **)(p + 0x30));
    func_0204bb68(*(void **)(p + 0x34));
    func_0204b098(*(void **)(p + 0x24));
    func_0204b098(*(void **)(p + 0x28));
    func_0204b098(p);
    return 1;
}

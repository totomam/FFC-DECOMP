#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void func_0204f2b8(void *out, void *p, void *arg);
extern void func_02056858(void *p);
extern void func_0204f948(void *out, void *p, void *obj);
extern uint8_t data_0213e1e0[];
extern uint8_t data_0213e1a4[];

void func_02071cc0(uint32_t a, uint32_t b, uint32_t c, uint32_t d) {
    uint8_t *base = data_0213e1e0;
    uint8_t *sym;
    uint32_t tmp[2];
    uint32_t obj[5];
    uint8_t *o;
    func_0208763c(base);
    if (b == 0) {
        func_02087678(base);
        return;
    }
    sym = data_0213e1a4;
    func_0204f2b8(&obj[0], sym, &b);
    o = (uint8_t *)obj[0];
    func_02056858(*(void **)(o + 0x10));
    func_0204f948(&tmp[0], sym, o);
    func_02087678(base);
}

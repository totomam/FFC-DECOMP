#include "ffc/types.h"

extern void func_0209d02c(void *p, uint32_t a, uint32_t b, void (*f)(void));
extern void func_02056844(void *p);
extern void func_0200ee84(void);

void *func_02013bbc(uint8_t *p) {
    func_0209d02c(p + 0x20, 12, 12, func_0200ee84);
    func_02056844(p);
    return p;
}

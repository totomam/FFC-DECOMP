#include "ffc/types.h"

extern int32_t func_020526ac(void);
extern void func_020534f8(int32_t x);
extern void func_0207fe54(void *object);
extern uint32_t func_0207e1cc(uint8_t *obj, int32_t n);
extern void func_02051980(void);
extern void func_02051a2c(int32_t a, int32_t b);
extern uint8_t data_020b04ec[];
extern uint8_t data_0213df68[];

void func_02051928(void) {
    int32_t v = func_020526ac();
    if ((uint32_t)(v - 1) < 3) {
        func_020534f8(v);
    } else {
        v = -1;
    }
    func_0207fe54((void *)v);
    *(uint32_t *)(data_0213df68 + 0xc) = func_0207e1cc(data_020b04ec, 3);
    func_02051980();
    func_02051a2c(10, 1 << 10);
}

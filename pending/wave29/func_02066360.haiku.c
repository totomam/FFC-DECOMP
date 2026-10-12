#include "ffc/types.h"

extern uint8_t data_020b18b4[];
extern void func_02059a78(void *obj, uint32_t b);
extern void func_0205847c(uint32_t a, uint32_t b);
extern void func_02065f84(void *obj);
extern void func_02056844(void *obj);

#define FIELD_P(p, off) (*(void **)((uint8_t *)(p) + (off)))
#define FIELD_U(p, off) (*(uint32_t *)((uint8_t *)(p) + (off)))

void *func_02066360(void *p) {
    void *obj;
    void *r5;

    *(uint8_t **)p = data_020b18b4;
    obj = FIELD_P(p, 0x20);
    if (obj != 0) {
        void **vt = *(void ***)obj;
        ((void (*)(void *))vt[1])(obj);
    }
    r5 = *(void **)((uint8_t *)FIELD_P(p, 0x1c) + 0x14);
    func_02059a78(r5, FIELD_U(p, 0x24));
    func_0205847c(FIELD_U(r5, 0x34), FIELD_U(p, 0x30));
    func_02065f84(p);
    func_02056844(p);
    return p;
}

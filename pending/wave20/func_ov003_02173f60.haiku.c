#include "ffc/types.h"

extern void *func_020424e0(void *p);
extern void *func_02056aec(void *obj);
extern void func_02056bc0(void *object, void *node);

void func_ov003_02173f60(void *p) {
    uint8_t *base = (uint8_t *)func_020424e0(*(void **)((uint8_t *)p + 0x88));
    base[0x412] = 0;
    void *node = func_02056aec(p);
    func_02056bc0((uint8_t *)p + 0x14, node);
}

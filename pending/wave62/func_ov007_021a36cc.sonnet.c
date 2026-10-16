#include "ffc/types.h"
extern void *func_02056aec(void *);
extern void func_02056bc0(void *object, void *node);
void func_ov007_021a36cc(uint8_t *p, uint32_t v) {
    **(uint32_t **)(p + 0xf4) = 1;
    **(uint32_t **)(p + 0xf8) = v;
    func_02056bc0(p + 0x14, func_02056aec(p));
}

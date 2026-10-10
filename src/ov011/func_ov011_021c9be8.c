#include "ffc/types.h"

extern void *func_020655b8(void *p);
extern void func_02056bc0(void *object, void *node);
extern void func_ov011_021c8a90(void *p);
extern void func_02021338(uint32_t v);

void func_ov011_021c9be8(uint8_t *p)
{
    void **obj = *(void ***)(p + 0x98);
    void (*fn)(void *, uint32_t, uint32_t) =
        (void (*)(void *, uint32_t, uint32_t))(((void **)*obj)[0x38 / 4]);
    fn(obj, 4, 1);
    void *node = func_020655b8(*(void **)(p + 0x98));
    func_02056bc0(p + 0x14, node);
    func_ov011_021c8a90(*(void **)(p + 0x94));
    func_02021338(0xb3);
}

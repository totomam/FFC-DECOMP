#include "ffc/types.h"

extern void func_ov011_021c4ba0(void *obj, int arg);
extern void func_02021338(int arg);

void func_ov011_021c4e1c(uint8_t *p) {
    void *obj = *(void **)(p + 0x98);
    void (*fn)(void *, int, int) = (void (*)(void *, int, int))((void **)(*(void **)obj))[14];
    fn(obj, 4, 1);
    func_ov011_021c4ba0(*(void **)(p + 0x94), 0);
    func_02021338(0xb3);
}

#include "ffc/types.h"
extern void func_02035f58(void *p);
extern void func_ov009_021ad6ac(void *o, uint32_t i, void *b);
extern void func_ov009_021a4c84(void *o, uint32_t i, void *b);
extern void func_ov009_021a45f8(void *o, uint32_t i, void *b);
extern uint32_t func_02064aa8(const void *object);
extern void *func_ov009_021ad730(void *o, uint32_t i);
extern void func_0205f2f0(void *object, uint32_t value);
extern void func_02069288(void *object);
extern void *func_02035fd0(void *object);
extern void func_ov009_021a4670(void *o, uint32_t i);
void func_ov009_021a4700(uint8_t *o, uint32_t i) {
    uint8_t buf[0x60];
    uint32_t r;
    uint8_t **arr;
    if (i < o[0x27f]) {
    func_02035f58(buf);
    func_ov009_021ad6ac(o, i, buf);
    func_ov009_021a4c84(o, i, buf);
    func_ov009_021a45f8(o, i, buf);
    arr = (uint8_t **)(o + 0xec);
    r = func_02064aa8(*(void **)(arr[i] + 0x94));
    func_0205f2f0((void *)r, (uint32_t)func_ov009_021ad730(o, i));
    func_02069288(arr[i]);
    func_02035fd0(buf);
    } else {
        func_ov009_021a4670(o, i);
    }
}

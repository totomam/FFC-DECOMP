#include "ffc/types.h"

extern void func_02035f58(void *p);
extern void func_ov009_021ad6ac(void *self, uint32_t idx, void *p);
extern void func_ov009_021a4c84(void *self, uint32_t idx, void *p);
extern void func_ov009_021a45f8(void *self, uint32_t idx, void *p);
extern uint32_t func_02064aa8(const void *object);
extern uint32_t func_ov009_021ad730(void *self, uint32_t idx);
extern void func_0205f2f0(void *object, uint32_t value);
extern void func_02069288(void *object);
extern void *func_02035fd0(void *object);
extern void func_ov009_021a4670(void);

void func_ov009_021a4700(void *self, uint32_t idx)
{
    uint8_t buf[0x60];
    uint32_t val;
    uint8_t *s = (uint8_t *)self;

    if (idx < s[0x27f]) {
        func_02035f58(buf);
        func_ov009_021ad6ac(self, idx, buf);
        func_ov009_021a4c84(self, idx, buf);
        func_ov009_021a45f8(self, idx, buf);

        val = func_02064aa8(*(void **)(*(uint8_t **)(s + 0xec + idx * 4) + 0x94));
        func_0205f2f0((void *)val, func_ov009_021ad730(self, idx));
        func_02069288(*(void **)(s + 0xec + idx * 4));
        func_02035fd0(buf);
    } else {
        func_ov009_021a4670();
    }
}

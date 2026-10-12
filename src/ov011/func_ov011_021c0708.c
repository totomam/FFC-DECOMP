#include "ffc/types.h"

extern uint8_t func_ov009_021ad914(void *self);
extern void func_ov009_021ad660(void *out, void *self, uint32_t idx);
extern uint32_t func_02064aa8(const void *object);
extern uint32_t func_ov009_021ad730(void *self, uint32_t idx);
extern void func_0205f2f0(void *object, uint32_t value);
extern void func_02069288(void *object);

typedef struct {
    uint32_t w0;
    uint32_t w1;
} Args;

void func_ov011_021c0708(uint8_t *a)
{
    Args args;
    uint8_t i;
    
    void *obj;
    void *sub;

    a[0x27f] = func_ov009_021ad914(a);
    for (i = 0; i < a[0x27f]; i++) {
        uint8_t *ap = a + (i << 2);
        
        func_ov009_021ad660(&args, a, i);
        obj = *(void **)(ap + 0xec);
        sub = *(void **)((uint8_t *)obj + 0x94);
        ((void (*)(void *, Args))(*(void ***)sub)[3])(sub, args);
        obj = *(void **)(ap + 0xec);
        sub = *(void **)((uint8_t *)obj + 0x94);
        func_0205f2f0((void *)func_02064aa8(sub), func_ov009_021ad730(a, i));
        func_02069288(*(void **)(ap + 0xec));
    }
}

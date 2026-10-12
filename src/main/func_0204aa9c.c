#include "ffc/types.h"

extern uint32_t *func_0204b07c(uint32_t size, uint32_t align);
extern void func_0204acc0(uint32_t *obj, uint32_t size);
extern int func_ov000_0214f2a8(void *q, uint32_t *obj);
extern void func_0204a968(void);
extern void func_0204a964(void);
extern void func_0204a950(void);

int func_0204aa9c(int a, int b, uint8_t *p, void *q)
{
    uint32_t *obj = *(uint32_t **)(p + 0xac);

    if (obj == 0) {
        obj = func_0204b07c(0x830, 4);
        *(uint32_t **)(p + 0xac) = obj;
        func_0204acc0(obj, 0x830);
    }

    obj[0x205] = *(uint32_t *)(p + 0xc0);
    obj[0x206] = *(uint32_t *)(p + 0xc4);
    obj[0x200] = *(uint32_t *)(p + 0x28);
    if (*(uint32_t *)(p + 0xd8)) {
        obj[0x204] = (uint32_t)func_0204a964;
    } else {
        obj[0x204] = (uint32_t)func_0204a950;
    }

    if (func_ov000_0214f2a8(q, obj) < 0) {
        return (int)0xfffffc17;
    }
    func_0204a968();
    return 0;
}

#include "ffc/types.h"

extern void func_0200d5ec(void *p);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern void *func_02035e30(void *object);
extern void *func_02035fd0(void *object);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);

void *func_02041c2c(void *param0)
{
    uint8_t *base = (uint8_t *)param0;
    uint8_t *obj;
    uint8_t *sub;

    func_0200d5ec(base + 0x1a8);
    obj = base + 0x18c;
    if (*(void **)(obj + 4) != 0) {
        if (*(obj + 0xc) != 0) {
            func_02052d3c(*(void **)(obj + 4), *(uint32_t *)(obj + 8));
        }
        func_02052c04(*(void **)(obj + 4));
    }
    func_02053290(obj);
    sub = base + 0x90;
    func_02035e30(sub + 0xd4);
    func_02035fd0(sub + 0x74);
    func_02035fd0(sub + 0x14);
    func_02056db0(base);
    func_02056844(base);
    return base;
}

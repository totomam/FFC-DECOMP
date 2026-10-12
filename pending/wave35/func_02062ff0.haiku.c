#include "ffc/types.h"

extern void func_02065874(void *object);
extern void *func_02053d78(void *object);
extern void func_02065758(void *object);
extern void func_02052d3c(void *object, uint32_t arg);
extern void func_02052c04(void *object);
extern void *func_02053290(void *object);

void *func_02062ff0(void *object)
{
    uint8_t *p = (uint8_t *)object;

    func_02065874(p + 0x7c);
    func_02053d78(p + 0x70);
    func_02065758(p + 0x28);
    func_02065758(p + 0x1c);
    func_02065758(p + 0x10);
    if (*(uint32_t *)(p + 4) != 0) {
        if (p[0xc] != 0) {
            func_02052d3c(*(void **)(p + 4), *(uint32_t *)(p + 8));
        }
        func_02052c04(*(void **)(p + 4));
    }
    func_02053290(p);
    return p;
}

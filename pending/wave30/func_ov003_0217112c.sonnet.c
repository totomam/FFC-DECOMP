#include "ffc/types.h"

typedef struct { uint32_t w; uint32_t h; } Size;
extern void *func_0205681c(uint32_t size);
extern void func_0203919c(void *dst, void *src);
extern uint32_t func_0204f7ec(const void *object);
extern void *func_02032d7c(void *obj, uint32_t id, Size s, void *local, uint32_t n, uint32_t flags);
extern void *func_020059cc(void *object);
extern void *data_0213df18;

void *func_ov003_0217112c(void *p0)
{
    uint8_t local[12];
    Size s;
    int inited = 0;
    void *obj;
    uint32_t flags = 0;

    obj = func_0205681c(0xb0);
    if (obj) {
        func_0203919c(local, p0);
        s.w = 0x80;
        s.h = 0x60;
        inited = 1;
        obj = func_02032d7c(obj, func_0204f7ec(data_0213df18), s, local, 4, flags);
    }
    if (inited) {
        func_020059cc(local);
    }
    return obj;
}

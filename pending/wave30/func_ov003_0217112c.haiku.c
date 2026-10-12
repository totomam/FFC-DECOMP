#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_0203919c(void *dst, void *src);
extern uint32_t func_0204f7ec(const void *object);
extern void *func_02032d7c(void *obj, uint32_t id, uint32_t w, uint32_t h, void *local, uint32_t n, uint32_t flags);
extern void *func_020059cc(void *object);
extern void *data_0213df18;

typedef struct {
    uint32_t w;
    uint32_t h;
    uint8_t local[12];
} Frame;

void *func_ov003_0217112c(void *p0)
{
    Frame f;
    uint32_t flags = 0;
    void *ret;
    int inited = 0;

    ret = func_0205681c(0xb0);
    if (ret) {
        func_0203919c(f.local, p0);
        f.w = 0x80;
        f.h = 0x60;
        inited = 1;
        ret = func_02032d7c(ret, func_0204f7ec(data_0213df18), f.w, f.h, f.local, 4, flags);
    }
    if (inited) {
        func_020059cc(f.local);
    }
    return ret;
}

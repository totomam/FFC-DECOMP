#include "ffc/types.h"

extern void *func_02069210(void *object);
extern void func_ov005_02197684(void *out, void *blk, uint32_t n);
extern void func_ov005_021967f4(void *object, uint32_t v, void *p);
extern void func_ov005_02196bcc(void *object, uint32_t v);
extern void func_02069404(void *object, uint32_t value);
extern char data_ov005_02199244[];

void func_ov005_02196784(void *this, uint32_t a1, uint32_t a2, uint32_t a3, ...)
{
    uint32_t v0;
    uint32_t v4;

    func_02069210(this);
    *(void **)this = (void *)data_ov005_02199244;
    *(uint32_t *)((uint8_t *)this + 0x94) = ((uint32_t *)&a3)[-1];
    *(uint32_t *)((uint8_t *)this + 0x98) = ((uint32_t *)&a3)[0];
    *(uint32_t *)((uint8_t *)this + 0xc0) = ((uint32_t *)&a3)[8];

    func_ov005_02197684(&v0, ((uint32_t *)&a3) + 1, 1);
    v4 = v0;
    func_ov005_021967f4(this, a1, &v4);
    func_ov005_02196bcc(this, ((uint8_t *)&a3)[0x1c]);

    if (*(uint32_t *)((uint8_t *)this + 0xc0) != 1) {
        func_02069404(this, 2);
    }
}

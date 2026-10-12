#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint8_t b;
    uint8_t pad[3];
} S;

extern void *func_02069210(void *object);
extern void func_ov005_021967f4(void *object, uint32_t v, S *s);
extern void func_ov005_02196bcc(void *object, uint8_t v);
extern void func_02069404(void *object, uint32_t value);
extern char data_ov005_02199244[];

void *func_ov005_02196728(void *self, uint32_t b, uint32_t c, uint32_t d, S s, uint32_t f)
{
    uint32_t *pc = &c;
    func_02069210(self);
    *(void **)self = data_ov005_02199244;
    *(uint32_t *)((char *)self + 0x94) = pc[0];
    *(uint32_t *)((char *)self + 0x98) = pc[1];
    *(uint32_t *)((char *)self + 0xc0) = f;
    func_ov005_021967f4(self, b, &s);
    func_ov005_02196bcc(self, s.b);
    if (*(uint32_t *)((char *)self + 0xc0) != 1) {
        func_02069404(self, 2);
    }
    return self;
}

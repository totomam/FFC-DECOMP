#include "ffc/types.h"

#define W32(p, off) (*(uint32_t *)((uint8_t *)(p) + (off)))

extern void *func_ov000_021653d4(uint32_t size);
extern void *func_020903cc(void *p, int c, uint32_t n);
extern int func_ov001_0217c760(void **pp);
extern void func_ov000_021653f4(void *p);
extern int func_ov001_02176320(void **pp);
extern void func_ov001_021762e0(void **pp);
extern void func_ov000_02165914(void);
extern void func_ov000_0216591c(void);
extern void func_02091c34(void);

int func_ov001_02176200(void **out, uint32_t a, uint32_t b, uint32_t c)
{
    void *p;
    int i;
    int r;

    *out = 0;
    p = func_ov000_021653d4(0x638);
    if (p == 0) {
        return 1;
    }
    func_020903cc(p, 0, 0x638);
    *(uint8_t *)p = 0;
    W32(p, 0x5b8) = 0;
    W32(p, 0x100) = 1;
    W32(p, 0x104) = 0;
    W32(p, 0x108) = 0;
    W32(p, 0x10c) = 0;
    W32(p, 0x60c) = a;
    W32(p, 0x610) = b;
    W32(p, 0x1a4) = c;

    if (func_ov001_0217c760(&p) == 0) {
        func_ov000_021653f4(p);
        return 1;
    }

    W32(p, 0x5c0) = 0;
    for (i = 0; i < 9; i++) {
        uint8_t *q = (uint8_t *)p + (i << 3);
        *(uint32_t *)(q + 0x1a8) = 0;
        *(uint32_t *)(q + 0x1ac) = 0;
    }

    r = func_ov001_02176320(&p);
    if (r != 0) {
        func_ov001_021762e0(&p);
        return r;
    }
    func_ov000_02165914();
    func_ov000_0216591c();
    func_02091c34();
    *out = p;
    return 0;
}

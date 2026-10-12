#include "ffc/types.h"

extern void func_ov000_021653f4(uint32_t v);
extern void func_ov001_0217b1a4(void *p);
extern int func_ov001_0217b170(void *p);
extern void func_ov001_021762e0(void *p);
extern void func_ov001_0217b7f4(void *p);
extern void func_ov001_0217ca70(void *p, void *fn, int x);
extern void func_ov001_0217630c(void);

#define WD(b, o) (*(volatile int *)((b) + (o)))

int func_ov001_02176320(void *p)
{
    uint8_t *b = *(uint8_t **)p;
    int r;

    *(uint8_t *)(b + 0x110) = 0;
    *(uint8_t *)(b + 0x12f) = 0;
    *(uint8_t *)(b + 0x144) = 0;
    *(int *)(b + 0x1f0) = -1;
    *(int *)(b + 0x1f4) = 0;
    *(int *)(b + 0x200) = 0;
    *(int *)(b + 0x204) = 0;
    *(int *)(b + 0x1fc) = 0;
    func_ov000_021653f4(*(uint32_t *)(b + 0x1f8));
    *(int *)(b + 0x1f8) = 0;
    *(int *)(b + 0x1f8) = 0;
    *(int *)(b + 0x20c) = 0;
    func_ov000_021653f4(*(uint32_t *)(b + 0x208));
    *(int *)(b + 0x208) = 0;
    *(int *)(b + 0x208) = 0;
    *(int *)(b + 0x218) = 0;
    *(int *)(b + 0x21c) = 0;
    *(int *)(b + 0x214) = 0;
    func_ov000_021653f4(*(uint32_t *)(b + 0x210));
    *(int *)(b + 0x210) = 0;
    *(int *)(b + 0x210) = 0;
    *(int *)(b + 0x5ec) = 0;
    *(int *)(b + 0x5f0) = 0;
    *(int *)(b + 0x5e8) = 0;
    func_ov000_021653f4(*(uint32_t *)(b + 0x5e4));
    *(int *)(b + 0x5e4) = 0;
    *(int *)(b + 0x5e4) = 0;
    *(int *)(b + 0x5fc) = 0;
    *(int *)(b + 0x600) = 0;
    *(int *)(b + 0x5f8) = 0;
    func_ov000_021653f4(*(uint32_t *)(b + 0x5f4));
    *(int *)(b + 0x5f4) = 0;
    *(int *)(b + 0x5f4) = 0;

    func_ov001_0217b1a4(p);
    r = func_ov001_0217b170(&b);
    if (r != 0) {
        func_ov001_021762e0(&b);
        return r;
    }
    *(int *)(b + 0x234) = 2;
    while (*(int *)(b + 0x5c4) != 0) {
        func_ov001_0217b7f4(p);
    }
    *(int *)(b + 0x5c4) = 0;
    *(int *)(b + 0x5d0) = 0;
    *(int *)(b + 0x5d4) = 0;
    func_ov001_0217ca70(p, (void *)func_ov001_0217630c, 0);
    *(int *)(b + 0x19c) = 0;
    *(int *)(b + 0x1a0) = 0;
    *(int *)(b + 0x198) = 0;
    *(int *)(b + 0x238) = 0;
    *(int *)(b + 0x5bc) = 0;
    *(int *)(b + 0x5d8) = 0;
    *(int *)(b + 0x23c) = -1;
    *(uint8_t *)(b + 0x3b8) = 0;
    *(uint8_t *)(b + 0x4b8) = 0;
    *(int *)(b + 0x634) = 0;
    return 0;
}

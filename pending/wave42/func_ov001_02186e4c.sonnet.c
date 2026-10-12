#include "ffc/types.h"

extern void func_ov001_02186da0(void *p);
extern void func_ov001_02185d80(void *p);
extern void func_ov000_021663e8(void *dst, void *src, uint32_t n);
extern void func_ov001_021879c0(void *p);
extern void func_ov000_0216591c(void);
extern void func_02091c34(void);
extern void func_ov000_02165914(void);
extern uint32_t DAT_0217098c;
extern uint8_t data_ov001_0219430c;

#define W32(p, off) (*(uint32_t *)((uint8_t *)(p) + (off)))

void func_ov001_02186e4c(void *s, void *a, void *b, void *c, int32_t p5, int32_t p6, int32_t p7, int32_t p8)
{
    uint8_t *base = (uint8_t *)s;
    if (p6 != 0 || *(uint32_t *)0x0217098c == 1) {
    W32(base, 0) = 1;
    func_ov001_02186da0(base);
    func_ov001_02185d80(base);
    func_ov000_021663e8(base + 0xc, a, 0x24);
    func_ov000_021663e8(base + 0x30, b, 0x24);
    func_ov000_021663e8(base + 0x54, c, 0x20);
    W32(base, 0x488) = p7;
    W32(base, 0x48c) = 0;
    W32(base, 0x494) = p8;
    W32(base, 0x6a4) = 0;
    W32(base, 0x6b4) = -1;
    W32(base, 0x80) = 0;
    W32(base, 0x7c) = 0;
    W32(base, 0x8) = 0;
    W32(base, 0x484) = -1;
    W32(base, 0x480) = 0;
    W32(base, 0x6a8) = 0;
    W32(base, 0x6bc) = p5;
    base[0x498] = data_ov001_0219430c;
    base[0x59c] = data_ov001_0219430c;
    func_ov001_021879c0(base);
    W32(base, 0x7d4) = 0;
    *(uint16_t *)(base + 0x7d0) = 0x80;
    func_ov000_0216591c();
    func_02091c34();
    func_ov000_02165914();
    }
}

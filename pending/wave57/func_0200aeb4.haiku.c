#include "ffc/types.h"

extern void func_020095b8(void *dst, const void *src);
extern void func_02050ea4(void *dst, const void *src, uint32_t n);
extern void *func_020059cc(void *object);
extern void func_0200958c(void *object);
extern void func_0200b4e8(void *a, void *b, uint8_t c);
extern void func_02050ffc(void *dst, const void *src, uint32_t n);
extern void func_0200b65c(void *obj, void *node);
extern void *func_0205681c(uint32_t n);
extern uint32_t func_0204f7ec(const void *object);
extern uint32_t func_02039420(void *object);
extern void *func_0200bfb4(void *a, uint32_t b, void *c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern void func_0200c65c(void *object);
extern void func_0200c694(void *object, void *node);
extern void func_02056bc0(void *object, void *node);
extern void *func_0200cacc(void *object);
extern uint32_t func_0203b720(void);

extern uint32_t data_0213df18;

void func_0200aeb4(uint8_t *p)
{
    uint32_t b[3];
    uint32_t c[3];
    uint32_t a[3];
    uint32_t d[3];
    uint32_t e[3];
    uint32_t f[3];
    uint32_t flag = 0;
    uint32_t r7;
    uint8_t tmp8;
    uint32_t tmp;
    uint32_t g[3];
    uint32_t h;
    uint32_t r6;

    func_020095b8(a, p + 0x90);
    func_02050ea4(b, a, 10);
    func_020059cc(a);
    func_020095b8(c, (void *)b[0]);
    tmp8 = 0;
    *(uint8_t *)g = tmp8;
    tmp8 = *(uint8_t *)g;
    func_0200b4e8(b, (void *)b[0], tmp8);
    func_02050ffc(d, b, 10);
    func_0200b65c(p + 0x90, d);
    func_020059cc(d);

    r7 = (uint32_t)func_0205681c(0x100);
    if (r7 != 0) {
        flag = 0;
        func_020095b8(e, p + 0x90);
        r6 = 1;
        if (*(uint32_t *)(p + 0xa4) != 0 || *(uint32_t *)(p + 0xa8) != 0) {
            flag = 1;
        }
        tmp = func_0204f7ec((void *)data_0213df18);
        h = func_02039420(e);
        r7 = (uint32_t)func_0200bfb4((void *)r7, tmp, c, *(uint32_t *)(p + 0xa0), flag, p[0x154], h);
    } else {
        r6 = 0;
    }
    *(uint32_t *)(p + 0x88) = r7;
    if (r6 != 0) {
        func_020059cc(e);
    }
    func_0200c65c((void *)*(uint32_t *)(p + 0x88));
    func_020095b8(f, p + 0x90);
    func_0200c694((void *)*(uint32_t *)(p + 0x88), f);
    func_020059cc(f);
    func_02056bc0(p + 0x48, (void *)*(uint32_t *)(p + 0x88));
    r6 = (uint32_t)func_0200cacc((void *)*(uint32_t *)(p + 0x88));
    h = func_0203b720();
    func_02056bc0(p + 0x14, (void *)h);
    func_02056bc0(p + 0x14, (void *)r6);
    *(uint32_t *)(p + 0x9c) = 0;
    func_020059cc(c);
    func_0200958c(b);
}

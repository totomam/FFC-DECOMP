#include "ffc/types.h"

#define FIELD(p, off) (*(uint32_t *)((p) + (off)))

extern uint32_t func_ov002_021a1868(uint8_t *a, uint32_t b);
extern uint32_t func_ov002_021c91b4(uint32_t a);
extern uint32_t func_ov002_0219acac(uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_ov002_021a3a10(uint8_t *a);
extern uint32_t func_02021610(uint32_t a, uint32_t b);
extern uint32_t func_ov002_021a4360(uint8_t *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern uint32_t func_ov002_021c85d8(uint8_t *a, uint32_t b);
extern uint32_t func_ov002_021c92c0(uint32_t a, uint32_t b);
extern uint32_t func_02055a2c(uint32_t a, uint32_t b);
extern uint32_t func_0203b738(void);
extern void func_ov002_021aa8b8(uint32_t h, uint32_t a, uint32_t b);
extern uint32_t func_0203b6fc(void);
extern uint32_t func_0203bd04(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_ov002_021ab270(uint32_t h, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_ov002_021aa850(const void *object);
extern uint32_t func_ov002_021a4be4(void *a, uint32_t b, uint32_t c);

void func_ov002_021a9ca0(uint8_t *p, uint32_t *q)
{
    uint32_t h;
    int w;
    int flag;
    uint32_t mgr;
    uint32_t ptr;
    uint32_t res;

    h = func_ov002_021a1868(p, q[1]);
    if (h == 0) {
        return;
    }

    flag = 0;
    func_02056bc0(p + 0x14, (void *)func_ov002_0219acac(FIELD(p, 0xf0), func_ov002_021c91b4(0)));

    if (q[8] == 2) {
        flag = 1;
    }
    if (flag) {
        if (func_ov002_021a3a10(p) != 1) {
            func_02056bc0(p + 0x14, (void *)func_02021610(0x425, 0));
        }
        func_02056bc0(p + 0x14, (void *)func_ov002_021a4360(p, q[2], 5, 0, 0, (uint32_t)-1));
    }

    if (q[8] == 1) {
        w = 0x1105;
    } else {
        w = 0x1112;
    }
    if (func_ov002_021c85d8(p + 0x144, 0)) {
        w++;
    }
    func_02056bc0(p + 0x14, (void *)func_02055a2c(FIELD(p, 0xf0), func_ov002_021c92c0(0, w)));

    if (func_ov002_021a3a10(p) != 1) {
        func_02056bc0(p + 0x14, (void *)func_0203b738());
    }

    w = 0;
    func_02056bc0(p + 0x14, (void *)func_ov002_0219acac(FIELD(p, 0xf0), func_ov002_021c91b4(0)));

    if (flag) {
        func_02056bc0(p + 0x14, (void *)func_ov002_021a4360(p, q[2], w, w, w, w - 1));
    }

    func_ov002_021aa8b8(h, (uint32_t)-q[9], 0);
    mgr = func_0203b6fc();
    ptr = 0;

    if (q[9] != 0) {
        ptr = func_0203bd04(0x1010f, 0, 0, 1);
        func_02056bc0((void *)mgr, (void *)ptr);
        if (ptr != 0) {
            ptr += 0x14;
        }
        res = func_ov002_021ab270(h, ptr, q[9], 1, 1);
    } else {
        res = func_ov002_021ab270(h, ptr, q[9], ptr, 1);
    }
    func_02056bc0((void *)mgr, (void *)res);
    func_02056bc0(p + 0x14, (void *)mgr);

    if (((uint8_t *)q)[0x28]) {
        uint32_t n = (uint32_t)func_0205681c(0x88);
        ptr = n;
        if (n != 0) {
            ptr = func_ov002_021a4be4((void *)n, func_ov002_021aa850((const void *)h), q[1]);
        }
        func_02056bc0(p + 0x14, (void *)ptr);
    }
}

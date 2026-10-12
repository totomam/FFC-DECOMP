#include "ffc/types.h"

extern void *func_0203b6f0(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *object, uint32_t v);
extern uint32_t func_0204f7d4(const void *object);
extern void *func_0203b84c(uint32_t a, uint32_t b);
extern void func_0205f818(void *object, uint32_t v);
extern void *func_0203b95c(void *a, void *b, uint32_t c, uint32_t d);
extern void func_02064390(void *object, uint32_t first, uint32_t second);
extern void *func_ov009_0219e428(uint32_t v);
extern void *func_0203b81c(uint32_t v);
extern void *func_02056aec(void *owner);
extern void *func_02056b10(void *owner);
extern void *func_0203b688(void);

extern char data_ov009_021b024c[];
extern void *data_0213df18;
extern void *data_ov009_021b0058[];
extern void *data_ov009_021b06c8[];

#define SLOT(o, off) (*(void **)((uint8_t *)(o) + (off)))

void func_ov009_021a219c(void *self)
{
    uint32_t r7;
    void *o;
    void *n;
    void *r6;
    void *ret;
    void *tmp;

    ((void (*)(void *, void *))(*(void ***)SLOT(self, 0x1b8))[4])(SLOT(self, 0x1b8), (uint8_t *)self + 0xe8);
    r7 = (uint32_t)func_0203b6f0();
    func_02056bc0((uint8_t *)self + 0x48, (void *)r7);
    o = func_0205681c(0x90);
    if (o != 0) {
        func_02056c9c(o, 0);
        *(void **)o = data_ov009_021b024c;
        SLOT(o, 0x84) = func_0203b6f0();
        func_02056bc0((uint8_t *)o + 0x48, SLOT(o, 0x84));
        SLOT(o, 0x88) = func_0203b84c(func_0204f7d4(data_0213df18), 0x32);
        func_0205f818(SLOT(o, 0x88), 7);
        SLOT(o, 0x80) = func_0203b95c(data_ov009_021b0058[9], SLOT(o, 0x88), 0, 1);
        ((void (*)(void *, uint32_t, uint32_t))(*(void ***)SLOT(o, 0x80))[14])(SLOT(o, 0x80), 1, 0);
        ((void (*)(void *, uint32_t))(*(void ***)SLOT(o, 0x80))[8])(SLOT(o, 0x80), 2);
        ((void (*)(void *, uint32_t))(*(void ***)SLOT(o, 0x80))[15])(SLOT(o, 0x80), 1);
        func_02064390(SLOT(o, 0x80), 0x80, 0x60);
        ((void (*)(void *))(*(void ***)SLOT(o, 0x80))[10])(SLOT(o, 0x80));
        func_02056bc0((uint8_t *)o + 0x48, SLOT(o, 0x80));
        func_02056bc0((uint8_t *)o + 0x48, SLOT(o, 0x88));
        SLOT(o, 0x8c) = func_ov009_0219e428(0x30);
    }
    func_02056bc0((void *)r7, o);
    n = func_0203b81c(10);
    r6 = func_0203b95c(data_ov009_021b0058[9], n, 0, 1);
    ((void (*)(void *, uint32_t, uint32_t))(*(void ***)r6)[14])(r6, 1, 0);
    func_02064390(r6, 0x80, 0x60);
    ((void (*)(void *))(*(void ***)r6)[10])(r6);
    o = (void *)((uint8_t *)o + 0x48);
    func_02056bc0(o, r6);
    func_02056bc0(o, n);
    ret = func_02056aec((void *)r7);
    tmp = func_02056b10((void *)r7);
    r6 = func_0203b688();
    func_02056bc0(r6, tmp);
    func_02056bc0(r6, ret);
    func_02056bc0(SLOT(self, 0x218), r6);
    SLOT(self, 0x80) = data_ov009_021b06c8[0];
    SLOT(self, 0x84) = data_ov009_021b06c8[1];
}

/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
void func_0204999c(void);
void func_02051adc(uint32_t x);
void func_02054218(void);
void func_02054380(void);
void func_0200fa48(void);
void *func_0204f7d4(const void *object);
void func_0204e89c(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
void *func_0204f7ec(const void *object);
void func_02060190(uint32_t x);
uint32_t func_0203c23c(void);
void func_02060e88(uint32_t a, uint32_t b);
void func_02060ea4(uint32_t a, uint32_t b);
uint32_t func_0203c250(void);
void func_0203c36c(void);
void func_020375f4(uint32_t mask);
void *func_0205681c(uint32_t size);
void *func_ov003_02145308(void *obj, uint32_t *p, uint32_t a, uint32_t b);
void func_020375bc(uint32_t x);
void func_02055050(void *a, uint32_t b);
uint32_t func_0203b6f0(void);
void *func_020499fc(void *a, uint32_t b);
void func_02056bc0(void *object, void *node);

extern uint8_t data_020b055c;
extern void *data_0213df18;
extern void *data_0213df20;
extern void *data_0213e098;
extern uint32_t data_020aff1c[2];
}

struct Sub {
    virtual void va(void);
    virtual void vb(void);
    virtual uint32_t vc(void);
};

struct Obj {
    virtual void va(void);
    virtual void vb(void);
    uint8_t pad[0x80 - 4];
    Sub sub;
};

extern "C" void func_02049784(uint8_t *p) {
    uint32_t tmp;
    uint32_t zero = 0;
    uint32_t one = 1;
    uint32_t r6;
    Obj *r5;
    void *node;
    uint32_t lo;
    uint32_t hi;

    func_0204999c();
    data_020b055c = 0;
    func_02051adc(0x1000);
    func_02054218();
    func_02054380();
    func_0200fa48();

    func_0204e89c(func_0204f7d4(data_0213df18), 5, 4, 0, zero);
    func_0204e89c(func_0204f7ec(data_0213df18), 5, 4, 0, zero);
    func_02060190(*(uint32_t *)((uint8_t *)func_0204f7d4(data_0213df18) + 0x18));
    func_02060190(*(uint32_t *)((uint8_t *)func_0204f7ec(data_0213df18) + 0x18));

    func_02060e88(func_0203c23c(), one);
    func_02060ea4(func_0203c23c(), 0x10);
    func_02060e88(func_0203c250(), one);
    func_02060ea4(func_0203c250(), 0x10);
    func_0203c36c();
    data_0213df20 = func_0204f7d4(data_0213df18);
    func_020375f4(0x10);

    tmp = zero;
    r5 = (Obj *)func_0205681c(0x430);
    if (r5 != 0) {
        r5 = (Obj *)func_ov003_02145308(r5, &tmp, one, zero);
    }
    r6 = r5->sub.vc();
    if (r5 != 0) {
        r5->vb();
    }

    func_020375bc(0);
    func_02055050(data_0213e098, 2);
    *(uint32_t *)(p + 0x88) = func_0203b6f0();

    node = func_0205681c(0xbc);
    if (node != 0) {
        node = func_020499fc(node, r6);
    }
    func_02056bc0(*(void **)(p + 0x88), node);
    func_02056bc0(p + 0x48, *(void **)(p + 0x88));

    lo = data_020aff1c[0];
    hi = data_020aff1c[1];
    *(uint32_t *)(p + 0x80) = lo;
    *(uint32_t *)(p + 0x84) = hi;
}

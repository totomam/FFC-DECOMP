#include "ffc/types.h"

extern void func_0203be8c(void);
extern void func_0203bea0(void);
extern void func_0203bf04(int a, int b, int c, int d);
extern void func_0203c354(void);
extern void func_0203c270(void);
extern void func_0203bed8(int a, int b, int c, int d, int e, int f);
extern void func_0204f550(uint32_t v);
extern uint32_t func_0203c2e4(void);
extern void func_0205947c(uint32_t r0, int v);
extern void func_020591f4(uint32_t r0, int v);
extern void func_0203c33c(void);
extern void func_0203c264(void);
extern void func_0203c36c(void);
extern void func_0203c394(void);
extern void *func_0203b9b4(int v);
extern void func_02057958(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *obj);
extern void *func_ov011_021c6754(void *obj, uint32_t a, uint32_t b);
extern void *func_0205681c(uint32_t size);
extern void *func_ov011_021c5fdc(void *obj, void *p, uint32_t a, uint8_t b);
extern void *func_0203b720(void);

extern uint32_t data_0213df18;
extern uint32_t data_ov011_021cb8bc[];

typedef struct {
    uint32_t (**vt)(void *, int);
} Obj;

void func_ov011_021c6668(void *a0)
{
    uint8_t *s = (uint8_t *)a0;
    uint8_t *t;
    uint32_t *d;
    uint32_t x;
    uint32_t y;
    void *obj;
    void *r7;
    void *r6;
    void *r4;
    void *b;

    func_0203be8c();
    func_0203bea0();
    func_0203bf04(5, 4, 0, 0);
    func_0203c354();
    func_0203c270();
    func_0203bed8(5, 1, 3, 0, 1, 1);
    func_0204f550(data_0213df18);
    func_0205947c(func_0203c2e4(), 1);
    func_020591f4(func_0203c2e4(), 0);
    func_0203c33c();
    func_0203c264();
    func_0203c36c();
    func_0203c394();

    obj = func_0203b9b4(1);
    func_02057958();
    *(uint32_t *)(s + 0x80) = (((Obj *)obj)->vt[9])(obj, 0);
    func_02056bc0(s + 0x48, obj);

    r6 = func_02056aec(a0);
    d = data_ov011_021cb8bc;
    x = *d++;
    y = *d++;
    r7 = func_ov011_021c6754(a0, x, y);

    r4 = func_0205681c(0xe8);
    if (r4 != 0) {
        r4 = func_ov011_021c5fdc(r4, s + 0x88, *(uint32_t *)(s + 0x80), *(uint8_t *)(s + 0x84));
    }

    b = func_0203b720();
    t = s + 0x14;

    func_02056bc0(t, b);
    func_02056bc0(t, r4);
    func_02056bc0(t, r7);
    func_02056bc0(t, r6);
}

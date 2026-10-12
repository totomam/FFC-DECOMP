#include "ffc/types.h"

extern void func_02021b68(void *a, uint32_t b, uint32_t c);
extern void func_02021b48(void *a, uint32_t b);
extern int func_ov004_02153458(void *self);
extern int func_ov004_02153544(void *self);
extern int func_ov004_021534a0(void *self);
extern void func_020211d4(int a, int b);
extern void func_02021338(int a);
extern void func_ov004_0214e2ac(void *a);
extern void func_ov004_021489f8(void *a);
extern void func_ov004_0214ce88(void *a);
extern void func_ov004_0214cf70(void *a);
extern uint32_t func_ov004_0215352c(void *self);
extern void *func_0203bb94(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern void func_02060548(void *a, uint32_t b);
extern void func_02060574(void *a, uint32_t b);
extern void func_02060584(void *a, uint32_t b);
extern void func_02060564(void *a, uint32_t b, uint32_t c);
extern uint32_t func_0203b720(void);
extern uint32_t func_02060610(void *a);
extern void *func_02056aec(void *a);
extern void *func_02060684(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h);
extern uint8_t data_ov004_021596c4[];
extern uint32_t data_ov004_02159cc8[];

void func_ov004_02154950(uint8_t *s)
{
    uint32_t i;
    void *p;
    uint8_t *r4;
    uint32_t v;
    void *q;
    void *c;
    uint32_t a, b;
    int code;

    func_02021b68(*(void **)(s + 0xf4), 0, 0);
    func_02021b68(*(void **)(s + 0xf4), 1, 1);
    func_02021b48(*(void **)(s + 0xf4), 4);

    if (*(int *)(s + 0xb0) != 2) {
        if (func_ov004_02153458(s) != 0) {
            goto L58;
        }
        if (func_ov004_02153544(s) == 0) {
            goto L5c;
        }
        if (*(uint32_t *)(*(uint8_t **)(s + 0x28c) + 0x40) != 0x401328) {
            goto L5c;
        }
L58:
        code = 0x20;
        goto L7a;
L5c:
        if (func_ov004_021534a0(s) != 0) {
            code = 0x1f;
            goto L7a;
        }
        if (*(int *)(s + 0xa4) >= 3) {
            code = 0x1e;
        } else {
            code = 0x1d;
        }
L7a:
        func_020211d4(code, 0);
    }

    func_02021338(0x77);
    func_ov004_0214e2ac(*(void **)(s + 0xe4));
    func_ov004_021489f8(*(void **)(s + 0xf8));
    func_ov004_0214ce88(*(void **)(s + 0xfc));
    func_ov004_0214cf70(*(void **)(s + 0xfc));

    for (i = 0; i < func_ov004_0215352c(s); i++) {
            *(uint32_t *)(s + 0x100 + i * 4) = *(uint32_t *)(s + 0x110 + i * 4);
    }

    *(uint8_t *)(s + 0x258) = 1;
    p = func_0203bb94(*(void **)(data_ov004_021596c4 + 0x14), 1, 0, 0);
    (*(void (**)(void *))(*(uint8_t **)p + 0x28))(p);
    func_02056bc0(s + 0x48, p);

    r4 = *(uint8_t **)(*(uint8_t **)(*(uint8_t **)(s + 0xdc)) + 0x20);
    func_02060548(r4, 1);
    v = (*(uint32_t (**)(void *))(*(uint8_t **)p + 0x34))(p);
    func_02060574(r4, v);
    func_02060584(r4, 0x3f);
    func_02060564(r4, 0x10, 0x10);
    a = func_0203b720();
    b = func_02060610(r4);
    q = func_02056aec(p);
    c = q;
    q = func_02060684(r4, 0x10, 0, 0x10, 0x10, 5, 0, 0);
    v = func_0203b720();
    func_02056bc0(s + 0x14, (void *)v);
    func_02056bc0(s + 0x14, q);
    func_02056bc0(s + 0x14, c);
    func_02056bc0(s + 0x14, (void *)b);
    func_02056bc0(s + 0x14, (void *)a);

    *(uint32_t *)(s + 0x94) = data_ov004_02159cc8[0];
    *(uint32_t *)(s + 0x98) = data_ov004_02159cc8[1];
}

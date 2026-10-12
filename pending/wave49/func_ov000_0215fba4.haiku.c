#include "ffc/types.h"

extern void *func_ov000_02163350(void);
extern int func_ov000_02163984(uint32_t a, uint32_t b, uint32_t c, int d);
extern int func_ov001_02175ea8(uint32_t x, uint32_t a);
extern int func_ov000_021599d0(uint32_t a);
extern int func_ov000_02161880(uint32_t a);
extern uint32_t func_ov000_02162d18(void);
extern int func_ov000_0215c1d0(void);
extern int func_ov000_02163654(uint32_t a);
extern int func_ov000_021633a8(void);
extern void func_ov000_02162be4(int x);

typedef int (*fn_t)(uint32_t, uint32_t);

#define GET() ((uint8_t *)func_ov000_02163350())

int func_ov000_0215fba4(uint32_t a, uint32_t b, uint32_t c, int d, uint32_t e, uint32_t f, uint32_t g, uint32_t h)
{
    int r5;
    uint8_t *p;
    uint32_t cur;

    if (func_ov000_02163984(a, b, c, d)) {
        GET()[0x7b4] = 0x13;
        return 3;
    }
    if (h) {
        GET()[0x7b4] = 0x18;
        return 3;
    }
    if (e != 0) goto L00e2;
    if (d != 0) goto L0048;
    if (GET()[0x15] != 0) goto L0064;
L0048:
    if (d != 1) goto L0056;
    if (GET()[0x15] != 1) goto L0064;
L0056:
    if (d != 3) goto L0072;
    if (GET()[0x15] == 2) goto L0072;
L0064:
    GET()[0x7b4] = 0x12;
    return 3;

L0072:
    if (GET()[0x15] != 1) goto L00b6;
    if (func_ov001_02175ea8(*(uint32_t *)GET(), a) != 0) {
        if (func_ov000_021599d0(a) != -1) goto L009e;
    }
    return 0xff;
L009e:
    if (func_ov000_02161880(a) != 0) goto L00e2;
    GET()[0x7b4] = 0x15;
    return 3;

L00b6:
    if (GET()[0x15] != 2) goto L00e2;
    if (func_ov001_02175ea8(*(uint32_t *)GET(), a) != 0) {
        if (func_ov000_021599d0(a) != -1) goto L00e2;
    }
    return 0xff;

L00e2:
    p = GET();
    cur = func_ov000_02162d18();
    if (p[0x17] + 1 != (int)cur) goto L0102;
    r5 = 3;
    GET()[0x7b4] = 0x10;
    goto L01f2;

L0102:
    if (*(uint32_t *)(GET() + 0x61c) == 0x16) {
        r5 = 4;
        goto L01f2;
    }
    if (func_ov000_0215c1d0() != 0 || *(uint32_t *)(GET() + 0x48) != 0) {
        r5 = 3;
        GET()[0x7b4] = 0x11;
        goto L01f2;
    }
    if (*(uint32_t *)(GET() + 0x7b0) != f) {
        r5 = 3;
        GET()[0x7b4] = 0x12;
        goto L01f2;
    }
    if (func_ov000_02163654(a) != 0) {
        r5 = 0xff;
        goto L01f2;
    }

L015c:
    if (*(uint32_t *)(GET() + 0x61c) == 0xd) goto L017a;
    if (*(uint32_t *)(GET() + 0x61c) == 2) goto L017a;
    if (*(uint32_t *)(GET() + 0x61c) != 3) goto L019a;

L017a:
    if (*(uint32_t *)(GET() + 0x5d8) == 0) {
        if (*(uint16_t *)(GET() + 0x5d4) == 0) goto L019a;
    }
    if (b != 0 || c != 0) goto L01b6;

L019a:
    if (*(uint32_t *)(GET() + 0x61c) == 0xe) {
        if (a == *(uint32_t *)(GET() + 0x5dc)) goto L0158;
    }
    goto L010e;

L010e:
    r5 = 4;
    goto L01f2;

L0158:
    r5 = 0xff;
    goto L01f2;

L01b6:
    if (GET()[0x14] == 2) goto L01f0;
    if (*(uint32_t *)(GET() + 0x67c) == 0) goto L01f0;
    if (*(uint32_t *)(GET() + 0x67c) != a) {
        r5 = 3;
        GET()[0x7b4] = 0x17;
        goto L01f2;
    }
    if ((int32_t)*(uint32_t *)(GET() + 0x678) >= (int32_t)a) goto L0158;

L01f0:
    r5 = 2;

L01f2:
    if (r5 != 2) return r5;
    if (*(uint32_t *)(GET() + 0x7b8) != 0) {
        uint8_t *q = GET();
        uint8_t *q2 = GET();
        fn_t fn = (fn_t)*(uint32_t *)(q + 0x7b8);
        if (fn(g, *(uint32_t *)(q2 + 0x7c0)) == 0) {
            GET()[0x7b4] = 0x16;
            return 3;
        }
    }
    if (func_ov000_021633a8() == 0) {
        func_ov000_02162be4(1);
    }
    return r5;

}

#include "ffc/types.h"

extern int func_0208cf38(int a, int b, int c, uint32_t d);
extern uint32_t func_0208d260(void);
extern uint32_t func_0208d284(void);
extern void func_02084a0c(int a, void *b, uint32_t c);
extern uint32_t func_02083728(void);
extern void func_0208d350(uint32_t a, void *fn, void *c);
extern int func_0208de98(void *fn, void *b, void *c, uint16_t d, uint16_t e, uint16_t f, uint32_t g);
extern void func_0208e5c4(void);
extern void func_0208e534(void);
extern void func_0208e688(void);

int func_0208e0d8(uint8_t *p, uint32_t id, uint32_t p2, uint32_t p3, uint32_t p4)
{
    int r;
    uint32_t rv, flag, i, v, f6, bit;
    uint16_t v814;

    flag = 1;
    r = func_0208cf38(2, 9, 10, p3);
    if (r != 0) {
        return r;
    }
    if (p == 0) {
        return 6;
    }
    if (id >= 0x10) {
        return 6;
    }
    if (p2 == 0) {
        return 6;
    }

    rv = func_0208d260();
    if (rv == 0) {
        flag = func_0208d284();
    }

    func_02084a0c(0, p, 0x820);
    *(uint16_t *)(p + 0x808) = 0;
    *(uint16_t *)(p + 0x80a) = 0;
    *(uint16_t *)(p + 0x80c) = 0;
    *(uint16_t *)(p + 0x810) = (uint16_t)p3;
    *(uint16_t *)(p + 0x816) = (uint16_t)id;
    *(uint16_t *)(p + 0x80e) = 0;

    f6 = (p4 != 0) ? 1 : 0;
    bit = (uint16_t)(1u << rv);
    *(uint16_t *)(p + 0x818) = (uint16_t)f6;
    *(uint16_t *)(p + 0x80e) = (uint16_t)(p2 | bit);

    v = func_02083728();
    *(uint16_t *)(p + 0x812) = (uint16_t)v;
    v814 = (uint16_t)(p3 * v);
    *(uint16_t *)(p + 0x814) = v814;
    if (*(uint16_t *)(p + 0x814) > 0x1fc) {
        *(uint16_t *)(p + 0x80e) = 0;
        return 6;
    }
    *(uint16_t *)(p + 0x814) = (uint16_t)(*(uint16_t *)(p + 0x814) + 4);
    *(uint16_t *)(p + 0x81c) = 1;

    if (rv != 0) {
        *(uint16_t *)(p + 0x80a) = 3;
        func_0208d350(id, (void *)func_0208e688, p);
        return 0;
    }

    for (i = 0; i < 4; i++) {
        uint16_t t = *(uint16_t *)(p + 0x80e);
        *(uint16_t *)(p + i * 0x200) = (uint16_t)(t & (flag | 1));
    }

    func_0208d350(id, (void *)func_0208e5c4, p);

    i = 0;
    while (i < ((*(uint16_t *)(p + 0x818) == 1) ? 2u : 1u)) {
        uint16_t a;
        uint16_t c;
        *(uint16_t *)(p + 0x808) = (uint16_t)((*(uint16_t *)(p + 0x808) + 1) & 3);
        a = (uint16_t)(flag & *(uint16_t *)(p + 0x80e));
        c = *(uint16_t *)(p + 0x816);
        r = func_0208de98((void *)func_0208e534, p, p + i * 0x200,
                          *(uint16_t *)(p + 0x814), a, c, 1);
        if (r == 7) {
            *(uint16_t *)(p + 0x800 + i * 2) = 0xffff;
            *(uint16_t *)(p + 0x80a) = (uint16_t)((*(uint16_t *)(p + 0x80a) + 1) & 3);
        } else if (r != 0 && r != 2) {
            *(uint16_t *)(p + 0x81c) = 5;
            return 1;
        }
        i++;
    }

    return 0;
}

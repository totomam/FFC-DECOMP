#include "ffc/types.h"

extern void func_02084b2c(void *p, int c, uint32_t n);
extern void func_02086b04(void *o, uint32_t id, const void *d, ...);
extern void func_02088f30(void);
extern void func_02084ca4(void *dst, const void *src, uint32_t n);
extern void func_02088b3c(void *p);
extern void func_02086ad4(void *o, uint32_t first, ...);
extern void func_02088b50(void *p);
extern int func_020894a0(void *a, void *b);
extern void *func_02088978(void);
extern void *func_ov000_02150234(void);
extern void func_02087874(void *p, uint32_t n);
extern void func_0208898c(void *p);
extern uint32_t func_ov000_02152818(void);
extern void *func_ov000_02150268(void *p);
extern void func_ov000_02152838(void *p);
extern uint8_t data_ov000_02169c9c[];
extern uint8_t data_ov000_02169ca4[];
extern uint8_t data_ov000_02169cac[];
extern uint8_t data_ov000_02169cb4[];
extern uint8_t data_ov000_02169cc0[];
extern uint8_t data_ov000_02169cdc[];

typedef struct {
    uint8_t pad[2];
    uint8_t k[6];
    uint32_t v[6];
    uint8_t m[4];
    uint8_t n[0x14];
    uint8_t tail[0x40];
} Loc;

int func_ov000_02156050(uint8_t *a, uint8_t *b)
{
    Loc L;
    void *res;
    void *p;
    void *q;
    uint64_t val;
    uint32_t c;
    int i;

    func_02084b2c(a, 0, 0x94);

    val = *(uint64_t *)b;
    if (val == 0) {
        val = *(uint64_t *)(b + 8);
    }
    func_02086b04(a, 0xe, data_ov000_02169c9c, (uint32_t)val, (uint32_t)(val >> 32));
    func_02086b04(a + 0xe, 7, data_ov000_02169ca4, *(uint16_t *)(b + 0x10));

    if (*(uint8_t *)0x2fffe0c == 0) {
        func_02088f30();
    }
    func_02084ca4((void *)0x2fffe0c, a + 0x15, 4);
    if (*(uint8_t *)(0x2fffe0c + 4) == 0) {
        func_02088f30();
    }
    func_02084ca4((void *)0x2fffe10, a + 0x1a, 2);

    a[0x1d] = 0x30;
    func_02088b3c(L.k);
    for (i = 0; i < 6; i++) {
        func_02086ad4(a + 0x1f + i * 2, (uint32_t)data_ov000_02169cac, L.k[i]);
    }

    func_02088b50(L.m);
    if (L.m[0] >= 8) {
        L.m[0] = 1;
    }
    func_02086b04(a + 0x2c, 3, data_ov000_02169cac, L.m[0]);

    func_02084ca4(L.n, a + 0x7e, 0x14);
    func_02086b04(a + 0x2f, 5, data_ov000_02169cb4, L.m[2], L.m[3]);

    if (func_020894a0(&L.v[3], &L.v[0]) != 0) {
        return 0;
    }
    func_02086b04(a + 0x34, 0xd, data_ov000_02169cc0, L.v[3], L.v[4], L.v[5], L.v[0], L.v[1], L.v[2]);

    res = func_02088978();
    p = func_ov000_02150234();
    func_02087874(p, 6);
    if (p == 0) {
        func_0208898c(res);
        return 0;
    }

    for (i = 0; i < 6; i++) {
        func_02086ad4(a + 0x41 + i * 2, (uint32_t)data_ov000_02169cac, ((uint8_t *)p)[i]);
    }

    c = func_ov000_02152818();
    if (c == 0xff || c > 0x63) {
        c = 0x63;
    }
    func_02086b04(a + 0x6f, 0xe, data_ov000_02169cdc, c);

    q = func_ov000_02150268(L.pad);
    func_02087874(q, 0x20);
    if (q == 0) {
        func_0208898c(res);
        return 0;
    }
    func_02084ca4(q, a + 0x4e, 0x20);
    func_ov000_02152838(a + 0x72);
    func_0208898c(res);
    return 1;
}

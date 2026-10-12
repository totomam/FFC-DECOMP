#include "ffc/types.h"

typedef struct {
    uint8_t pad0[8];
    int32_t cnt;
    uint8_t pad1[0x20];
    uint16_t h0;
    uint16_t h1;
    uint16_t h2;
    uint16_t h3;
} Ctr;

typedef struct {
    uint16_t h[4];
    uint8_t s[8];
    void *p;
    uint8_t flag;
} Local;

extern void func_0208763c(void);
extern void func_02087678(void *p);
extern void func_0208a814(void);
extern int32_t func_0208a858(void *p);
extern void func_02088f30(void);
extern void func_0208a8d4(void *p);
extern void func_0208a974(void);
extern int32_t func_0208aa34(void *p);
extern void func_0208aa48(int32_t a, int32_t b, void *c, int32_t d);
extern void func_0208ae70(int32_t a);
extern int32_t func_0208ae80(int32_t a);

extern uint8_t data_0213e0cc[];
extern Ctr data_0213e0b8;
extern uint8_t data_0213e0e4[];

void func_02057720(void) {
    Local loc;
    int32_t n;

    loc.p = data_0213e0cc;
    loc.flag = 1;
    if (loc.flag != 0) {
        func_0208763c();
    }
    n = data_0213e0b8.cnt;
    data_0213e0b8.cnt = n + 1;
    if (n > 0) {
        if (loc.flag != 0) {
            func_02087678(loc.p);
        }
        return;
    }
    func_0208a814();
    if (func_0208a858(loc.s) == 0) {
        func_02088f30();
    }
    func_0208a8d4(loc.s);
    do {
        func_0208a974();
    } while (func_0208aa34(&loc) != 0 || (loc.h[2] != 0 && loc.h[3] != 0));
    do {
        func_0208aa48(10, 4, data_0213e0e4, 5);
        func_0208ae70(2);
    } while (func_0208ae80(2) != 0);
    data_0213e0b8.h0 = loc.h[0];
    data_0213e0b8.h1 = loc.h[1];
    data_0213e0b8.h2 = loc.h[2];
    data_0213e0b8.h3 = loc.h[3];
    if (loc.flag != 0) {
        func_02087678(loc.p);
    }
    return;
}

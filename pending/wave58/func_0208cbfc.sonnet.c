#include "ffc/types.h"

extern void *func_02088978(void);
extern int func_02087460(void);
extern int func_0208eb1c(void);
extern void func_0208898c(void *h);
extern int func_02087eb4(uint32_t a);
extern int func_02087e78(uint32_t a);
extern void func_020890f8(void);
extern int func_020891f4(int a, int b);
extern void func_02087874(uint32_t a, uint32_t b);
extern void func_02084498(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_0208d228(void);
extern void func_02087498(void *a, void *b, int n);
extern void func_02087890(void *p, int n);
extern void func_020874ac(void *a, void *p, int n);
extern void func_020891a8(int n, void (*fn)(void));
extern void func_0208cf88(void);

typedef struct Obj {
    uint32_t w0;
    uint32_t w1;
    uint32_t pad8;
    uint32_t w3;
    uint32_t w4;
    uint16_t h14;
    uint8_t gap16[0xcc - 0x16];
    uint32_t arr1[16];
    uint32_t arr2[16];
    uint32_t w14c;
    uint16_t h150;
} Obj;

typedef struct Glob {
    uint16_t flag;
    uint16_t pad;
    Obj *obj;
} Glob;

extern Glob data_02143580;
extern uint8_t data_02143598[];
extern uint8_t data_021435b8[];
extern uint8_t data_02143640[];

int func_0208cbfc(uint32_t a, uint32_t b, uint32_t c)
{
    void *h = func_02088978();
    int j;
    int i;


    if (func_02087460() != 0 && func_0208eb1c() != 3) {
        func_0208898c(h);
        return 3;
    }
    if (data_02143580.flag != 0) {
        func_0208898c(h);
        return 3;
    }
    if (a == 0) {
        func_0208898c(h);
        return 6;
    }
    if (func_02087eb4(a) != 0 || (func_02087460() != 0 && func_02087e78(a) != 0)) {
        func_0208898c(h);
        return 6;
    }
    if (b > 3) {
        func_0208898c(h);
        return 6;
    }
    if (a & 0x1f) {
        func_0208898c(h);
        return 6;
    }
    func_020890f8();
    if (func_020891f4(10, 1) == 0) {
        func_0208898c(h);
        return 4;
    }
    func_02087874(a, c);
    func_02084498(b, a, 0, c, 1);
    i = 0;

    data_02143580.obj = (Obj *)a;
    data_02143580.obj->w0 = a + 512;
    data_02143580.obj->w1 = data_02143580.obj->w0 + 0x300;
    data_02143580.obj->w3 = data_02143580.obj->w1 + 0x800;
    data_02143580.obj->w4 = data_02143580.obj->w3 + 0x100;

    func_0208d228();
    data_02143580.obj->h14 = (uint16_t)b;
    data_02143580.obj->w14c = 0;
    data_02143580.obj->h150 = 0;
    for (;;) {
        if (i >= 16) break;
        data_02143580.obj->arr1[i] = 0;
        data_02143580.obj->arr2[i] = 0;
        i++;
    }

    func_02087498(data_02143598, data_021435b8, 10);

    j = 0;
    for (;;) {
        if (j >= 10) break;
        *(uint16_t *)(data_02143640 + (j << 8)) = 0x8000;
        func_02087890(data_02143640 + (j << 8), 2);
        func_020874ac(data_02143598, data_02143640 + (j << 8), 1);
        j++;
    }

    func_020891a8(10, func_0208cf88);
    data_02143580.flag = 1;
    func_0208898c(h);
    return 0;
}

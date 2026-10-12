/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct {
    uint16_t h0;
    uint16_t h2;
    void *p4;
    void *p8;
} FfcState;

extern FfcState data_0213df00;

extern void func_020890f8(void);
extern int func_020891f4(int a, int b);
extern int func_02086a4c(void);
extern int func_02088978(void);
extern void func_0208898c(int a);
extern int func_02088c50(int a, int b);
extern int func_020891a8(int a, void *b);
extern int func_02089218(int a, int b, int c);
extern void func_02088cd8(int a, int b);
extern void func_0204e4c0(void);
extern void func_0204e590(void);

int func_0204e1dc(int mode, void *cb, void *arg)
{
    int r4;
    int v;

    func_020890f8();
    if (func_020891f4(0xf, 1) == 0) {
        return 2;
    }
    if (data_0213df00.h0 == 0) {
        do {
            v = func_02086a4c();
            if (v == -3) {
                return 7;
            }
            data_0213df00.h0 = (uint16_t)v;
        } while (data_0213df00.h0 == 0);
    }
    r4 = func_02088978();
    if (data_0213df00.p8 != 0) {
        func_0208898c(r4);
        return 5;
    }
    if (data_0213df00.h2 != 0) {
        func_0208898c(r4);
        return 5;
    }
    switch (mode) {
    case 4:
        mode = 4;
        if (func_02088c50(mode, data_0213df00.h0) == 0) {
            func_0208898c(r4);
            return 6;
        }
        data_0213df00.h2 = mode;
        *(volatile uint8_t *)0x04000242 = 0x82;
        break;
    case 8:
        mode = 8;
        if (func_02088c50(mode, data_0213df00.h0) == 0) {
            func_0208898c(r4);
            return 6;
        }
        data_0213df00.h2 = mode;
        *(volatile uint8_t *)0x04000243 = 0x82;
        break;
    case 0xc:
        mode = 0xc;
        if (func_02088c50(mode, data_0213df00.h0) == 0) {
            func_0208898c(r4);
            return 6;
        }
        data_0213df00.h2 = mode;
        *(volatile uint8_t *)0x04000242 = 0x82;
        *(volatile uint8_t *)0x04000243 = 0x8a;
        break;
    default:
        func_0208898c(r4);
        return 3;
    }

    if (func_020891f4(0xf, 0) == 0) {
        func_020891a8(0xf, (void *)func_0204e4c0);
    }
    if (cb == 0) {
        data_0213df00.p8 = (void *)func_0204e590;
    } else {
        data_0213df00.p8 = cb;
    }
    data_0213df00.p4 = arg;
    if (func_02089218(0xf, 0x10000, 0) < 0) {
        func_02088cd8(data_0213df00.h2, data_0213df00.h0);
        data_0213df00.h2 = 0;
        data_0213df00.p8 = 0;
        func_0208898c(r4);
        return 4;
    }
    func_0208898c(r4);
    return 1;
}

#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern int32_t func_ov001_0218683c(uint32_t p);
extern uint32_t func_ov001_02186830(uint32_t p, int32_t idx);
extern void func_ov001_02185e8c(uint32_t p, void *d, int32_t x);
extern int32_t func_ov000_02163654(void);
extern void func_ov001_021867ac(uint32_t p, uint32_t q);
extern uint32_t func_ov000_02159358(uint32_t x);
extern void func_ov001_02185e30(uint32_t p, void *d, uint32_t x);
extern void func_ov001_02186848(uint32_t p, int32_t a, void *d, int32_t b);
extern uint8_t data_ov000_0216b01c[];
extern uint8_t data_ov000_0216b134[];

#define B8(p, o) (*(uint8_t *)((uint8_t *)(p) + (o)))
#define W32(p, o) (*(uint32_t *)((uint8_t *)(p) + (o)))

int func_ov000_021621a4(int a0)
{
    int flag = 0;
    int i = 0;
    int cnt = func_ov001_0218683c(W32(func_ov000_02163350(), 0x5e0));
    if (cnt > 0) {
        do {
            uint32_t r5 = func_ov001_02186830(W32(func_ov000_02163350(), 0x5e0), i);
            int skip = 0;
            if (B8(func_ov000_02163350(), 0x15) == 0) {
                int r6;
                func_ov001_02185e8c(r5, data_ov000_0216b01c, 0);
                r6 = 0;
                if (func_ov000_02163654() != 0) {
                    func_ov001_021867ac(W32(func_ov000_02163350(), 0x5e0), r5);
                    i--;
                    r6 = 1;
                }
                skip = r6;
            }
            if (!skip) {
                if (W32(func_ov000_02163350(), 0x780) != 0) {
                    uint8_t *a = func_ov000_02163350();
                    uint8_t *b = func_ov000_02163350();
                    int v = ((int (*)(int, uint32_t))W32(a, 0x780))(i, W32(b, 0x784));
                    if (v > 0) {
                        uint32_t t;
                        if (v > 0x7fffff) {
                            v = 0x7fffff;
                        }
                        t = func_ov000_02159358(0x100);
                        func_ov001_02185e30(r5, data_ov000_0216b134, t | ((uint32_t)v << 8));
                    } else {
                        func_ov001_021867ac(W32(func_ov000_02163350(), 0x5e0), r5);
                        i--;
                        flag = 1;
                    }
                } else {
                    uint32_t t = func_ov000_02159358(0x80);
                    func_ov001_02185e30(r5, data_ov000_0216b134, t);
                }
            }
            i++;
        } while (i < func_ov001_0218683c(W32(func_ov000_02163350(), 0x5e0)));
    }
    if (a0 != 0) {
        if (func_ov001_0218683c(W32(func_ov000_02163350(), 0x5e0)) != 0) {
            func_ov001_02186848(W32(func_ov000_02163350(), 0x5e0), 0, data_ov000_0216b134, 0);
        }
    }
    if (flag != 0) {
        if (func_ov001_0218683c(W32(func_ov000_02163350(), 0x5e0)) == 0) {
            return 0;
        }
    }
    return 1;
}

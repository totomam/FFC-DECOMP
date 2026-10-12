#include "ffc/types.h"

extern uint32_t func_0208b52c(void *object);
extern void func_020889f4(uint32_t x);
extern uint32_t func_0208b4f4(void *object, uint32_t a, uint32_t b);
extern uint32_t func_0208b66c(uint32_t x);
extern void func_0208b244(void);
extern uint32_t data_02143540[];

uint32_t func_0208b98c(uint32_t mode, void *obj, uint32_t p2, uint32_t p3)
{
    if (mode != 0) {
        if (mode == 1) {
            if (p2 == 0) {
                if ((*(uint32_t *)0x2fffc3c - data_02143540[3]) <= 7) {
                    return 0;
                }
            }
            if (obj != 0) {
                if (p3 != 0) {
                    if (func_0208b52c(obj)) {
                        do {
                            func_020889f4(0x51d23);
                        } while (func_0208b52c(obj));
                    }
                } else {
                    if (func_0208b4f4(obj, 0, 0)) {
                        do {
                            func_020889f4(0x51d23);
                        } while (func_0208b4f4(obj, 0, 0));
                    }
                }
            }
            *(uint16_t *)0x4000304 |= 1;
            if (func_0208b66c(data_02143540[6])) {
                do {
                    func_020889f4(0x51d23);
                } while (func_0208b66c(data_02143540[6]));
            }
        }
    } else {
            if (func_0208b66c(0)) {
                do {
                    func_020889f4(0x51d23);
                } while (func_0208b66c(0));
            }
            if ((*(uint32_t *)0x2fffc3c - data_02143540[4]) <= 2) {
                func_0208b244();
                func_0208b244();
            }
            *(uint16_t *)0x4000304 &= 0xfffe;
            data_02143540[3] = *(uint32_t *)0x2fffc3c;
            if (obj != 0) {
                if (p3 != 0) {
                    if (func_0208b52c(obj)) {
                        do {
                            func_020889f4(0x51d23);
                        } while (func_0208b52c(obj));
                    }
                } else {
                    if (func_0208b4f4(obj, 0, 0)) {
                        do {
                            func_020889f4(0x51d23);
                        } while (func_0208b4f4(obj, 0, 0));
                    }
                }
            }
    }
    return 1;
}

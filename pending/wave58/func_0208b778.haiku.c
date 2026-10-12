#include "ffc/types.h"

extern void func_0208bbd0(void *node);
extern uint32_t func_02088978(void);
extern uint32_t func_02086700(uint32_t v);
extern uint32_t func_02088280(void);
extern void func_020866bc(uint32_t v);
extern void func_0208898c(uint32_t v);
extern uint16_t func_02088a2c(uint32_t object);
extern uint32_t func_02087460(void);
extern uint32_t func_0208eb74(void);
extern uint32_t func_0208baf4(void);
extern uint32_t func_0208b6a0(uint32_t *p, uint32_t *q);
extern void func_020889f4(uint32_t v);
extern uint32_t func_0208b5a4(uint32_t object, uint32_t value);
extern void func_0208b244(void);
extern void func_0208b6fc(void);
extern void func_0208b448(uint32_t x, uint32_t y);
extern void func_02088f94(void);
extern uint32_t func_0208b98c(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_0208b52c(uint32_t object);
extern void func_0208b624(void);
extern uint32_t data_02143540[];

void func_0208b778(uint32_t a, uint32_t b, uint32_t c) {
    uint32_t v[2];
    uint32_t t;
    uint32_t mode;
    uint32_t io_saved;
    uint32_t bank_saved;
    uint32_t t_ime;
    uint32_t ime_saved;
    uint32_t r7;
    uint32_t r6;
    uint32_t r1v;

    uint32_t r4 = 0;
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;

    func_0208bbd0((void *)data_02143540[7]);
    ime_saved = *ime;
    *ime = 0;
    t = func_02088978();
    mode = func_02086700(0xffffffff);
    if (func_02088280() != 0) {
        r1v = 8;
    } else {
        r1v = r4;
    }
    func_020866bc(0x40000 | r1v);
    func_0208898c(t);
    (void)*ime;
    *ime = 1;

    if (a & 8) {
        uint16_t w = func_02088a2c(8);
        if ((uint16_t)(w + 0xfffe) <= 1) {
            a &= ~8;
        }
    }
    if (a & 0x10) {
        if (func_02087460() != 0 || func_0208eb74() == 0) {
            a &= ~0x10;
        }
    }
    bank_saved = *(volatile uint32_t *)0x4000000;
    io_saved = *(volatile uint32_t *)0x4001000;
    t_ime = func_0208baf4();

    while (func_0208b6a0(&v[1], &v[0]) != 0) {
        func_020889f4(0x51d23);
    }
    if (func_0208b5a4(2, 0) != 0) {
        do {
            func_020889f4(0x51d23);
        } while (func_0208b5a4(2, 0) != 0);
    }
    func_0208b244();
    *(volatile uint32_t *)0x4000000 &= 0xfffcffff;
    *(volatile uint32_t *)0x4001000 &= 0xfffeffff;
    func_0208b244();
    func_0208b244();
    func_0208b6fc();

    data_02143540[2] = 0;
    r7 = 0;
    if (v[0] != 0) {
        r7 = 0x80;
    }
    r6 = 0x40;
    if (v[1] == 0) {
        r6 = 0;
    }
    func_020866bc(0x40000);
    func_0208b448((uint16_t)(a | r6 | r7), (uint16_t)(b | c));

    if (data_02143540[2] == 0) {
        do {
            func_02088f94();
        } while (data_02143540[2] == 0);
    }

    if (func_02088280() != 0) {
        r1v = 8;
    } else {
        r1v = r4;
    }
    func_020866bc(0x40000 | r1v);

    if ((a & 8) && (*(volatile uint32_t *)0x4000214 & 0x100000)) {
        r4 = 1;
    }

    if (r4 == 0) {
        if (t_ime == 1) {
            do {
                func_0208b98c(1, 1, 1, 1);
            } while (func_0208b98c(1, 1, 1, 1) != 1);
        } else {
            if (func_0208b52c(1) != 0) {
                do {
                    func_020889f4(0x51d23);
                } while (func_0208b52c(1) != 0);
            }
        }
        *(volatile uint32_t *)0x4000000 = bank_saved;
        *(volatile uint32_t *)0x4001000 = io_saved;
    }

    func_020889f4(0x360000);
    (void)*ime;
    *ime = 0;
    func_020866bc(mode);
    func_0208898c(t);
    (void)*ime;
    *ime = (uint16_t)ime_saved;
    if (r4 != 0) {
        func_0208b624();
    }
    func_0208bbd0((void *)data_02143540[1]);
}

#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
    uint32_t e;
    uint32_t f;
    uint32_t g;
} Req;

typedef struct {
    uint32_t w0;
    uint32_t w1;
    uint8_t pad[0x1c58 - 8];
    void *ptr1c58;
} Ctx;

extern Ctx *data_ov000_02170004;
extern uint32_t data_ov000_02169b64;
extern uint8_t data_ov000_0216a04c[];
extern uint8_t data_ov000_0216a06c[];
extern uint8_t data_ov000_0216a074[];
extern uint8_t data_ov000_0216a07c[];
extern void *data_02141510[];

extern void func_02084b2c(void *p, int c, uint32_t n);
extern int func_02086fe4(void *p);
extern void func_02088f30(void);
extern int func_02092948(uint32_t v, void *p);
extern int func_ov000_02156474(void *base, Req *req);
extern void func_ov000_02159014(int code, uint32_t v);
extern int func_ov000_02156034(void *p);
extern int func_ov000_02156210(void *base, void *p, int z);
extern void func_ov000_021569f0(void *base);
extern int func_ov000_02156b84(void *base, void *a, void *b, int n);
extern int func_ov000_0215653c(void *base);
extern uint32_t func_020871d4(const void *object);
extern void func_ov000_021565a8(void *base, uint32_t v);

int func_ov000_02158230(void *p, void *q)
{
    Req req;
    uint8_t buf[0x94];
    int ret;
    Ctx *c;
    uint32_t v;

    data_ov000_02170004->ptr1c58 = q;
    func_02084b2c(q, 0, 0x174);
    if (*(uint32_t *)((uint8_t *)data_ov000_02170004 + 0x1be8) != 0) {
        if (func_02086fe4((uint8_t *)data_ov000_02170004 + 0x1b7c) == 0) {
            func_02088f30();
        }
    }
    c = data_ov000_02170004;
    req.a = data_ov000_02169b64;
    req.b = 0;
    req.c = 0x1000;
    req.d = c->w0;
    req.e = c->w1;
    if (func_02092948(req.a, data_ov000_0216a04c)) {
        req.f = 1;
    } else {
        req.f = 0;
    }
    req.g = 20000;
    if (func_ov000_02156474((uint8_t *)c + 8, &req) != 0) {
        func_ov000_02159014(9, 0xffffa1dc);
        return 0;
    }
    if (func_ov000_02156034(buf) != 0) {
        ret = 0;
        if (func_ov000_02156210((uint8_t *)data_ov000_02170004 + 8, buf, 0) != 0) goto rest;
    }
    func_ov000_021569f0((uint8_t *)data_ov000_02170004 + 8);
    func_ov000_02159014(9, 0xffffa1dc);
    return 0;
rest:
    if (func_ov000_02156b84((uint8_t *)data_ov000_02170004 + 8, data_ov000_0216a06c, data_ov000_0216a074, 6) != 0 ||
        func_ov000_02156b84((uint8_t *)data_ov000_02170004 + 8, data_ov000_0216a07c, p, 4) != 0) {
        func_ov000_021569f0((uint8_t *)data_ov000_02170004 + 8);
        func_ov000_02159014(9, 0xffffa1dc);
        return 0;
    }
    if (func_ov000_0215653c((uint8_t *)data_ov000_02170004 + 8) != 0) {
        func_ov000_021569f0((uint8_t *)data_ov000_02170004 + 8);
        func_ov000_02159014(9, 0xffffa1dc);
        return ret;
    }
    v = func_020871d4(data_02141510[1]);
    func_ov000_021565a8((uint8_t *)data_ov000_02170004 + 8, v - 1);
    if (*(uint32_t *)((uint8_t *)data_ov000_02170004 + 0x1be8) == 0) {
        func_ov000_021569f0((uint8_t *)data_ov000_02170004 + 8);
        func_ov000_02159014(9, 0xffffa1dc);
        return ret;
    }
    return 1;
}

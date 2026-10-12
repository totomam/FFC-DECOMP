#include "ffc/types.h"

typedef void (*cb_t)(uint32_t, uint32_t);

typedef struct Obj {
    uint32_t f00;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint32_t f10;
    uint32_t f14;
    uint8_t  pad18[0x04];
    uint8_t  f1c;
    uint8_t  pad1d[0x07];
    uint32_t f24;
    uint32_t f28;
    uint32_t f2c;
    uint64_t f30;
} Obj;

typedef struct Glob {
    uint8_t  pad000[0x700];
    cb_t     cb700;
    cb_t     cb708;
    uint32_t arg710;
    uint32_t arg718;
    uint16_t max720;
} Glob;

extern Glob *data_ov000_0217096c;
extern int32_t func_ov000_0215b4e0(uint8_t **buf);
extern uint64_t func_020882cc(void);
extern uint32_t func_ov000_021640f0(void);
extern uint32_t func_ov000_0215b5f8(void);
extern uint32_t func_ov000_02163320(void);
extern uint32_t func_ov000_02162b40(void);
extern uint32_t func_ov000_0215b4b0(void);
extern Obj *func_ov000_02164418(uint32_t id);
extern uint32_t func_0209a6d4(uint64_t a, uint64_t b);
extern void func_ov000_0215b900(uint32_t id);
extern void func_ov000_02162d20(uint32_t v);
extern uint32_t func_ov000_0215bf5c(void);
extern void func_ov000_02163c60(uint32_t i);
extern uint32_t func_ov000_0215b560(uint32_t id);
extern uint32_t func_ov000_02164428(uint32_t id);
extern int32_t func_ov000_0216498c(uint32_t id);
extern void func_ov000_02164450(uint32_t id, uint32_t p, uint32_t n, uint32_t x);

void func_ov000_021641b0(void)
{
    uint8_t *buf;
    uint32_t timeout;
    int32_t count;
    int32_t i;
    uint32_t id;
    Obj *obj;
    Glob *data;

    if (data_ov000_0217096c == 0) {
        return;
    }
    count = func_ov000_0215b4e0(&buf);
    {
        uint64_t now = func_020882cc();
        timeout = func_ov000_021640f0();

        if (func_ov000_0215b5f8() != 0 ||
            (func_ov000_02163320() != 0 && func_ov000_02162b40() != 0)) {
            for (i = 0; i < count; i++) {
                id = buf[i];
                if (id != func_ov000_0215b4b0()) {
                    obj = func_ov000_02164418(id);
                    if (func_0209a6d4((uint64_t)(now - obj->f30) << 6, 0x82ea) > timeout) {
                        func_ov000_0215b900(id);
                        func_ov000_02162d20(1);
                    }
                }
            }
        } else {
            id = func_ov000_0215bf5c();
            if (id != 0xff && id != func_ov000_0215b4b0()) {
                obj = func_ov000_02164418(id);
                if (func_0209a6d4((uint64_t)(now - obj->f30) << 6, 0x82ea) > timeout) {
                    func_ov000_0215b900(id);
                }
            }
        }
    }

    if (count > 0) {
        for (i = 0; i < count; i++) {
            id = buf[i];
            func_ov000_02163c60(i);
            if (func_ov000_0215b560(id) != 0) {
                uint64_t t = func_020882cc();
                obj = func_ov000_02164418(id);
                data = data_ov000_0217096c;
                if (data->cb708 != 0 && obj->f2c != 0) {
                    if (func_0209a6d4((uint64_t)(t - obj->f24) << 6, 0x82ea) > obj->f2c) {
                        data->cb708(id, data->arg718);
                        obj->f24 = (uint32_t)t;
                        obj->f28 = (uint32_t)(t >> 32);
                    }
                }
            }
            if (id != func_ov000_0215b4b0() && func_ov000_02164428(id) == 1) {
                int32_t n;
                int32_t mx;
                obj = func_ov000_02164418(id);
                n = (int32_t)(obj->f14 - obj->f0c);
                mx = data_ov000_0217096c->max720;
                if (n > mx) {
                    n = mx;
                }
                if (func_ov000_0216498c(id) >= n) {
                    func_ov000_02164450(id, obj->f00 + obj->f0c, n, 1);
                    obj->f0c += n;
                    if (obj->f0c == obj->f14) {
                        obj->f1c = 0;
                        obj->f00 = 0;
                        obj->f0c = 0;
                        obj->f14 = 0;
                        data = data_ov000_0217096c;
                        if (data->cb700 != 0) {
                            data->cb700(id, data->arg710);
                        }
                    }
                }
            }
        }
    }
}

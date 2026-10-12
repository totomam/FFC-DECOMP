#include "ffc/types.h"

typedef struct { uint32_t lng:1; } S1;
typedef struct { uint8_t lng:1; uint8_t sz:7; uint8_t pad[3]; uint32_t len; uint8_t *ptr; } Str;
extern uint32_t func_02036cd8(const void *object);
extern uint8_t *func_020197b4(void *a, uint32_t b);
extern uint32_t func_02036cfc(const void *object);
extern uint32_t func_02036d18(const void *object);
extern uint32_t func_02036ce0(const void *object);
extern uint32_t func_02036d20(const void *object);
extern uint32_t func_02036f1c(void *p);
extern void *func_020159c8(void *a, uint32_t b);
extern uint32_t func_02005f1c(void *object, uint32_t third);
extern uint32_t func_02019e54(void *a, uint32_t b);
extern void *func_02019e04(void *a, uint8_t *b);
extern void *func_02017ec8(void *a, void *b);
extern void func_020198fc(void *out, void *a, uint32_t b);
extern void func_02092878(void *a, void *b);
extern void *func_020059cc(void *object);
extern void func_020095b8(void *a, void *b);
extern void func_020393a8(void *a, void *b, uint32_t c);
extern void func_0200b65c(void *a, void *b);
extern void *data_020b8e44;
extern uint8_t data_020ad52c[];

void func_0201ba14(uint32_t *out, uint8_t *ctx, void *obj, uint32_t flag)
{
    uint32_t i;
    uint8_t *res;
    uint32_t code;
    uint32_t u;
    uint32_t len;
    uint32_t s8[3];
    uint32_t s14[3];
    uint32_t s20[3];
    uint8_t s2c[0x40];

    u = func_02036cd8(obj);
    res = func_020197b4(data_020b8e44, u);
    i = 0;
    code = i;
    do {
        out[i] = code;
        i++;
    } while (i < 3);

    if (func_02036cfc(obj) == 0) {
        if (func_02036d18(obj) == 1) {
            if (func_02036ce0(obj) == 1) {
                code = 0xc2;
            } else if (func_02036ce0(obj) == 2) {
                if (res[6] != 0) {
                    code = 0xc5;
                } else if (res[7] != 0) {
                    code = 0xc6;
                } else {
                    code = 0xc4;
                }
            } else {
                if (res[6] != 0) {
                    code = 0xbe;
                } else if (res[7] != 0) {
                    code = 0xc0;
                } else {
                    code = 0xbc;
                }
            }
        } else {
            if (func_02036d18(obj) == 0 && func_02036ce0(obj) == 1) {
                code = 0xc1;
            } else if (func_02036d18(obj) == 0 && func_02036ce0(obj) == 2) {
                code = 0xc3;
            } else if (func_02036d18(obj) == 0 && func_02036ce0(obj) == 3) {
                code = 0xc7;
            } else if (func_02036d18(obj) == 0 && func_02036ce0(obj) == 4) {
                code = 0xc8;
            } else if (func_02036d20(obj) == 0) {
                u = func_02036cd8(obj);
                if (func_02036f1c(*(uint32_t **)(ctx + 0x50) + u) == 0) {
                    if (res[6] != 0) {
                        code = 0xbd;
                    } else if (res[7] != 0) {
                        code = 0xbf;
                    } else {
                        code = 0xbb;
                    }
                }
            }
        }

        if (code != 0) {
            u = (uint32_t)func_020159c8(data_020b8e44, code);
            func_02005f1c(out, u);
        }
    }

    if (((Str *)out)->lng) {
        len = ((Str *)out)->len;
    } else {
        len = ((Str *)out)->sz;
    }

    if (len == 0) {
        switch (func_02036ce0(obj)) {
        case 0:
            u = func_02036cd8(obj);
            if (func_02019e54(data_020b8e44, u) != 0) {
                void *a = func_02019e04(data_020b8e44, res);
                void *b = func_02017ec8(data_020b8e44, a);
                func_02005f1c(out, (uint32_t)b);
            } else {
                u = func_02036cd8(obj);
                func_020198fc(s20, data_020b8e44, u);
                if (((Str *)s20)->lng) {
                    func_02092878(s2c, (void *)s20[2]);
                } else {
                    func_02092878(s2c, (uint8_t *)s20 + 1);
                }
                func_020059cc(s20);
                func_02005f1c(out, (uint32_t)s2c);
            }
            break;
        case 1:
        case 2:
        case 3:
        case 4:
            u = (uint32_t)func_020159c8(data_020b8e44, *(uint16_t *)(res + 0x14));
            func_02005f1c(out, u);
            break;
        default:
            break;
        }

        if (((Str *)out)->lng) {
            len = ((Str *)out)->len;
        } else {
            len = ((Str *)out)->sz;
        }
    }

    if (len == 0) {
        func_02005f1c(out, (uint32_t)data_020ad52c);
        return;
    }

    if (flag != 0) {
        return;
    }

    func_020095b8(s14, out);
    func_020393a8(s8, s14, 1);
    func_0200b65c(out, s8);
    func_020059cc(s8);
    func_020059cc(s14);
}

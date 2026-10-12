#include "ffc/types.h"

extern void func_02035be0(void *object);
extern void func_02035c18(void *object);
extern uint8_t func_02036360(const void *object);
extern void func_020363ac(void *out, const void *in);
extern void func_02039de0(void *dst, const void *src);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_02039e54(void *obj, const void *args, uint8_t v);
extern void func_020397e4(void *data, uint32_t v);
extern uint8_t data_021395dc[];

typedef struct {
    uint32_t a;
    uint32_t b;
    int16_t c;
    uint32_t d;
    uint32_t e;
    uint16_t f;
    uint16_t g;
    uint32_t h;
} Args;

typedef struct {
    uint32_t o0;
    uint32_t o4;
    uint32_t o8;
    Args args;
    uint32_t r28;
    uint32_t r2c;
    int16_t h30;
    uint32_t w34;
    uint32_t w38;
    uint16_t h3c;
    uint16_t h3e;
    uint32_t w40;
} Frame;

int func_0203a4a8(uint8_t *self) {
    Frame f;
    void *res;
    uint32_t r1;

    if ((*(uint32_t **)(self + 0x88))[3] == 2) {
        int flag = 0;
        f.r28 = 0;
        f.r2c = 0;
        f.h30 = 0;
        f.w34 = 0;
        f.w38 = 0;
        f.h3c = 0;
        f.h3e = 0;
        uint32_t *r7 = &f.r28;
        func_02035be0(&f);
        r7[6] = f.o0;
        func_02035c18(&f);
        f.r28 = func_02036360(*(uint8_t **)(self + 0x88) + 0x10);
        f.r2c = (*(uint32_t **)(self + 0x88))[1] + 1;
        f.h3e = 0x7fff;
        func_02035be0(&f.o8);
        func_020363ac(&f.o4, *(uint8_t **)(self + 0x88) + 0x10);
        func_02039de0(r7, &f.o4);
        func_02035c18(&f.o4);
        res = func_0205681c(0xc0);
        r1 = (uint32_t)res;
        if (res != 0) {
            f.args.a = f.r28;
            f.args.b = f.r2c;
            flag = 1;
            f.args.c = f.h30;
            f.args.d = f.w34;
            f.args.e = f.w38;
            f.args.f = f.h3c;
            f.args.g = f.h3e;
            f.args.h = f.w40;
            r1 = func_02039e54(res, &f.args, self[0x99]);
        }
        func_020397e4(data_021395dc, r1);
        if (flag) {
            func_02035c18(&f.args.h);
        }
        func_02035c18(&f.o8);
        func_02035c18(&f.w40);
        return 0;
    }
    return 1;
}

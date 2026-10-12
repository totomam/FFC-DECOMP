#include "ffc/types.h"

typedef struct State {
    uint32_t a;
    uint32_t z4;
    uint32_t z8;
    uint32_t zc;
    uint32_t z10;
    uint32_t flag;
    uint8_t *obj;
} State;

extern State data_ov001_02195764;
extern uint8_t data_ov001_02195780[];
extern uint8_t data_ov001_0219435c[];

extern int func_ov000_02159000(void);
extern void func_02087620(void *object);
extern void func_0208763c(void *object);
extern void func_ov001_02188d14(int a, int b);
extern void func_02087678(void *object);
extern uint8_t *func_ov001_02188460(uint32_t size, uint32_t align);
extern void func_02084b2c(void *dst, int val, uint32_t n);
extern void func_020928f0(void *dst, const void *src, uint32_t n);
extern int func_ov000_02164a78(void *a, void *b);
extern void func_ov001_02188470(void *p);
extern void func_02086dcc(void *a, void *fn, uint32_t b, void *c, uint32_t d, uint32_t e);
extern void func_020870a0(void *object);
extern void func_ov001_021884bc(void);

uint32_t func_ov001_02188620(uint32_t a, uint8_t *b, uint8_t *c)
{
    if (func_ov000_02159000() != 0) {
        return 0;
    }
    func_02087620(data_ov001_02195780);
    func_0208763c(data_ov001_02195780);
    if (data_ov001_02195764.flag != 0) {
        func_ov001_02188d14(2, 0);
        func_02087678(data_ov001_02195780);
        return 0;
    }
    data_ov001_02195764.flag = 2;
    func_02087678(data_ov001_02195780);
    data_ov001_02195764.z10 = 0;
    data_ov001_02195764.zc = 0;
    data_ov001_02195764.z8 = 0;
    data_ov001_02195764.a = a;
    data_ov001_02195764.z4 = 0;
    data_ov001_02195764.obj = func_ov001_02188460(0xa78, 0x20);
    if (data_ov001_02195764.obj == 0) {
        func_ov001_02188d14(1, 0);
        return 0;
    }
    func_02084b2c(data_ov001_02195764.obj, 0, 0xa78);
    *(uint32_t *)(data_ov001_02195764.obj + 0x40) = 0;
    func_020928f0(data_ov001_02195764.obj, b, 0x1f);
    func_020928f0(data_ov001_02195764.obj + 0x20, c, 0x1f);
    if (func_ov000_02164a78(data_ov001_0219435c, data_ov001_02195764.obj + 0x44) == 0) {
        func_ov001_02188470(data_ov001_02195764.obj);
        data_ov001_02195764.obj = 0;
        return 0;
    }
    func_02086dcc(data_ov001_02195764.obj + 0x9b8, (void *)func_ov001_021884bc, 0,
                  data_ov001_02195764.obj + 0x9b8, 0x800, 0x10);
    func_020870a0(data_ov001_02195764.obj + 0x9b8);
    return 1;
}

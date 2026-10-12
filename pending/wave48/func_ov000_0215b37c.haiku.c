#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint8_t *p;
} Glob;

extern Glob data_ov000_02170064;
extern uint32_t data_ov000_0217008c[];
extern int func_ov000_0215bf9c(void);
extern int func_ov000_02159000(void);
extern int func_ov000_02163408(void);
extern void func_ov000_0215e0d8(int);
extern void func_ov000_02163bd0(void);
extern void func_ov000_0215b7a4(int);
extern void func_ov000_0215dc60(void);
extern void func_ov000_021633f0(void);
extern void func_ov000_0216335c(int);
extern void func_ov000_0215e500(void);
extern void func_ov001_021807e8(uint32_t);
extern uint8_t *func_ov000_02163634(int);
extern void func_ov000_0215bb2c(int, int, int, int);
extern int func_ov000_0215b594(void);

int func_ov000_0215b37c(void)
{
    uint32_t t;
    int i;
    int r5;

    r5 = 0;
    data_ov000_02170064.p[0xb05] = 1;
    if (func_ov000_0215bf9c()) {
        return 1;
    }
    if (data_ov000_02170064.p == 0) {
        goto fail;
    }
    if (func_ov000_02159000() != 0) {
        goto fail;
    }
    t = *(uint32_t *)(data_ov000_02170064.p + 0x24);
    if (t == 4 || t == 5) {
        goto body;
    }
fail:
    return -1;
body:
    for (i = 0; i < 0x20; i++) {
        if (data_ov000_0217008c[i] != 0) {
            r5 = 1;
            break;
        }
    }
    if (r5 == 0) {
        func_ov000_02163408();
        func_ov000_0215e0d8(1);
        func_ov000_02163bd0();
        func_ov000_0215b7a4(3);
        func_ov000_0215dc60();
        func_ov000_021633f0();
        func_ov000_0216335c(0);
        func_ov000_0215e500();
        return 1;
    }
    data_ov000_02170064.p[0x2d] = 1;
    func_ov001_021807e8(*(uint32_t *)data_ov000_02170064.p);
    if (func_ov000_02163408() > 1) {
        do {
            for (i = 0; i < func_ov000_02163408(); i++) {
                uint8_t *e = func_ov000_02163634(i);
                if (*(uint32_t *)e != *(uint32_t *)(data_ov000_02170064.p + 0x64)) {
                    func_ov000_0215bb2c(0, 0, 1, e[0x16]);
                }
            }
        } while (func_ov000_02163408() > 1);
    }
    data_ov000_02170064.p[0x2d] = 0;
    func_ov000_021633f0();
    func_ov000_0216335c(0);
    func_ov000_0215e500();
    if (func_ov000_0215b594() != 3) {
        func_ov000_02163bd0();
        func_ov000_0215b7a4(3);
        func_ov000_0215dc60();
    }
    return 0;
}

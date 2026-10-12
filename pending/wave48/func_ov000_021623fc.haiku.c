#include "ffc/types.h"

extern int32_t func_ov000_02163408(void);
extern uint8_t *func_ov000_02163350(void);
extern int32_t func_ov000_021633a8(void);
extern void func_ov001_02184160(int32_t self, int32_t v);
extern void func_ov001_02184184(int32_t self, int32_t v);
extern uint8_t data_ov000_0217022c[];
extern uint8_t data_ov000_0217022d[];
extern uint8_t data_ov000_02170234[];

void func_ov000_021623fc(int32_t msg, int32_t arg)
{
    int32_t i;
    uint8_t *p;
    int32_t v;

    switch (msg) {
    case 8:
        v = func_ov000_02163408() - 1;
        if (v < 0) {
            v = 0;
        }
        func_ov001_02184160(arg, v);
        return;
    case 10:
        p = func_ov000_02163350();
        func_ov001_02184160(arg, p[0x17]);
        return;
    case 0x32:
        p = func_ov000_02163350();
        v = 0x678;
        func_ov001_02184160(arg, *(int32_t *)(p + v));
        return;
    case 0x33:
        p = func_ov000_02163350();
        func_ov001_02184160(arg, p[0x15]);
        return;
    case 0x34:
        func_ov001_02184160(arg, 0x5a);
        return;
    case 0x35:
        func_ov001_02184160(arg, 1);
        return;
    case 0x36:
        if (func_ov000_021633a8() == 2) {
            p = func_ov000_02163350();
            v = *(int32_t *)(p + 0x790);
        } else {
            v = 0;
        }
        func_ov001_02184160(arg, v);
        return;
    case 0x37:
        p = func_ov000_02163350();
        func_ov001_02184160(arg, p[0x16]);
        return;
    case 0x38:
        v = *(int32_t *)(func_ov000_02163350() + 0x28);
        func_ov001_02184160(arg, v);
        return;
    default:
        break;
    }

    i = msg - 100;
    if (i < 0 || i >= 0x9a) {
        return;
    }
    i = i * 12;
    if (data_ov000_0217022c[i] == 0) {
        return;
    }
    if (data_ov000_0217022d[i] != 0) {
        func_ov001_02184184(arg, *(int32_t *)(data_ov000_02170234 + i));
    } else {
        func_ov001_02184160(arg, **(int32_t **)(data_ov000_02170234 + i));
    }
}

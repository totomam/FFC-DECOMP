#include "ffc/types.h"

extern uint8_t *data_ov006_021bc6fc;
extern uint8_t data_ov006_021b8acc[];
extern uint32_t data_ov006_021b8148[];
extern uint8_t data_ov006_021b80fe[];
extern uint8_t *data_ov006_021b8ed4[];
extern uint32_t data_ov006_021b8110[];
extern uint32_t data_ov006_021b8120[];
extern uint8_t data_ov006_021b8102[];
extern uint32_t data_ov006_021b8108[];
extern uint8_t data_ov006_021b80fa[];
extern uint8_t data_ov006_021b80ee[];
extern uint32_t data_ov006_021b8114[];
extern uint32_t data_ov006_021b8124[];

extern int func_ov006_021b4e54(void *p);
extern void func_ov006_021b46cc(void *a, void *b, void *c);
extern void func_ov006_021a4cac(int x);
extern void func_ov006_021a4da4(void);
extern void func_ov006_021a47c8(void);
extern void func_ov006_021a47f0(void);

void func_ov006_021a45f4(void)
{
    uint8_t buf[8];
    int i;

    data_ov006_021bc6fc[0x11c] = 0;
    if (!func_ov006_021b4e54(data_ov006_021b8acc)) {
        return;
    }
    for (i = 0; i < 0x2f; i++) {
        func_ov006_021b46cc(&data_ov006_021b8148[i], data_ov006_021b80fe, buf);
        if (func_ov006_021b4e54(buf)) {
            if ((int8_t)data_ov006_021bc6fc[0x11e] != i) {
                return;
            }
            data_ov006_021bc6fc[0x11c] = data_ov006_021b8ed4[data_ov006_021bc6fc[0x11d]][i];
            if (data_ov006_021bc6fc[0x11d] == 1) {
                func_ov006_021a4cac(0);
            }
            data_ov006_021bc6fc[0x121] = i;
            func_ov006_021a4da4();
            return;
        }
    }
    for (i = 2; i < 4; i++) {
        func_ov006_021b46cc(&data_ov006_021b8110[i], &data_ov006_021b8120[i], buf);
        if (func_ov006_021b4e54(buf)) {
            if ((int8_t)data_ov006_021bc6fc[0x11e] != i + 0x2f) {
                return;
            }
            data_ov006_021bc6fc[0x11c] = data_ov006_021b8102[i];
            if (data_ov006_021bc6fc[0x11d] == 1) {
                func_ov006_021a4cac(0);
            }
            data_ov006_021bc6fc[0x121] = i + 0x2f;
            func_ov006_021a4da4();
            return;
        }
    }
    for (i = 0; i < 2; i++) {
        func_ov006_021b46cc(&data_ov006_021b8108[i], data_ov006_021b80fa, buf);
        if (func_ov006_021b4e54(buf)) {
            if ((int8_t)data_ov006_021bc6fc[0x11e] != i + 0x33) {
                return;
            }
            data_ov006_021bc6fc[0x11c] = data_ov006_021b80ee[i];
            data_ov006_021bc6fc[0x121] = i + 0x33;
            func_ov006_021a4da4();
            return;
        }
    }
    func_ov006_021b46cc(data_ov006_021b8110, data_ov006_021b8120, buf);
    if (func_ov006_021b4e54(buf)) {
        if ((int8_t)data_ov006_021bc6fc[0x11e] != 0x2f) {
            return;
        }
        func_ov006_021a47c8();
        data_ov006_021bc6fc[0x121] = 0x2f;
        func_ov006_021a4da4();
        return;
    }
    func_ov006_021b46cc(data_ov006_021b8114, data_ov006_021b8124, buf);
    if (func_ov006_021b4e54(buf)) {
        if ((int8_t)data_ov006_021bc6fc[0x11e] != 0x30) {
            return;
        }
        func_ov006_021a47f0();
        data_ov006_021bc6fc[0x121] = 0x30;
        func_ov006_021a4da4();
    }
}

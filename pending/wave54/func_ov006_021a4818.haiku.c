#include "ffc/types.h"

extern int func_ov006_021b4d34(void *p);
extern void func_ov006_021b46cc(void *a, void *b, void *c);
extern void func_ov006_021a4954(int v);
extern void func_ov006_021b0600(int v);
extern uint8_t data_ov006_021b8acc[];
extern uint8_t data_ov006_021b8148[];
extern uint8_t data_ov006_021b80fe[];
extern uint8_t *data_ov006_021bc6fc;
extern uint8_t data_ov006_021b8110[];
extern uint8_t data_ov006_021b8120[];
extern uint8_t data_ov006_021b8108[];
extern uint8_t data_ov006_021b80fa[];

void func_ov006_021a4818(void)
{
    uint32_t tmp[2];
    int i;
    int v;

    if (func_ov006_021b4d34(data_ov006_021b8acc) == 0) {
        goto fail;
    }

    for (i = 0; i < 0x2f; i++) {
        func_ov006_021b46cc(data_ov006_021b8148 + i * 4, data_ov006_021b80fe, tmp);
        if (func_ov006_021b4d34(tmp)) {
            if (*(int8_t *)(data_ov006_021bc6fc + 0x11e) != i) {
                goto fail;
            }
            v = i;
            goto finish;
        }
    }

    for (i = 2; i < 4; i++) {
        func_ov006_021b46cc(data_ov006_021b8110 + i * 4, data_ov006_021b8120 + i * 4, tmp);
        if (func_ov006_021b4d34(tmp)) {
            if (*(int8_t *)(data_ov006_021bc6fc + 0x11e) != i + 0x2f) {
                goto fail;
            }
            func_ov006_021a4954(i + 0x2f);
            if (i == 3) {
                data_ov006_021bc6fc[0x122]++;
                if (data_ov006_021bc6fc[0x122] >= 0x28) {
                    if (data_ov006_021bc6fc[0x123] == 0) {
                        func_ov006_021b0600(9);
                        *(int8_t *)(data_ov006_021bc6fc + 0x11e) = -1;
                    } else {
                        data_ov006_021bc6fc[0x11c] = 0x80;
                        data_ov006_021bc6fc[0x122] -= 7;
                    }
                }
            }
            return;
        }
    }

    for (i = 0; i < 2; i++) {
        func_ov006_021b46cc(data_ov006_021b8108 + i * 4, data_ov006_021b80fa, tmp);
        if (func_ov006_021b4d34(tmp)) {
            if (*(int8_t *)(data_ov006_021bc6fc + 0x11e) != i + 0x33) {
                goto fail;
            }
            v = i + 0x33;
            goto finish;
        }
    }

fail:
    v = -1;
finish:
    func_ov006_021a4954(v);
    data_ov006_021bc6fc[0x122] = 0;
}

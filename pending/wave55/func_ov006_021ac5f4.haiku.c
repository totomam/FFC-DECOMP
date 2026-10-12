#include "ffc/types.h"

extern uint8_t *func_ov006_021afd28(int mode);
extern void func_ov006_021b0600(int v);
extern void func_ov006_021abc4c(void);
extern void func_ov006_021af668(int v);
extern int func_ov006_021b570c(int a, void (*fn)(void), int b, int c);
extern void func_ov006_021ac4e4(void);
extern void func_ov006_021ac56c(void);
extern void func_ov006_021ac3b8(void);
extern void func_ov006_021ac430(void);

typedef struct {
    uint8_t state;
    uint8_t pad1;
    uint8_t cnt;
    uint8_t pad3;
    uint16_t timer;
    uint16_t pad6;
    uint8_t *sub;
} OvState;

extern OvState data_ov006_021bc78c;

void func_ov006_021ac5f4(int mode) {
    uint8_t *obj = func_ov006_021afd28(mode);
    OvState *st = &data_ov006_021bc78c;
    int r6 = 0;
    int s = st->state;

    if (s == 8 && obj[0xf5] == 0 && (mode == 0 || mode == 2)) {
        return;
    }

    switch (s) {
    case 0:
        if (mode == 1) {
            st->state = 11;
        } else if (mode == 3) {
            st->cnt++;
        } else {
            r6 = 2;
        }
        break;
    case 10:
        if (mode == 1) {
            st->cnt--;
        } else if (mode == 3) {
            st->state = st->sub[0x42];
        } else {
            r6 = 2;
        }
        break;
    case 11:
        if (mode == 1) {
            if (st->sub[0x47] != 0) return;
            func_ov006_021b0600(9);
            st->sub[0x47] = 1;
            return;
        } else if (mode == 3) {
            st->state = 0;
            st->cnt = 0;
            st->timer = 0;
            func_ov006_021abc4c();
            func_ov006_021af668(0);
        } else {
            r6 = 2;
        }
        break;
    case 12:
    case 13:
        st->sub[0x42] = (uint8_t)s;
        if (mode == 1) {
            st->state = 10;
            st->cnt = 3;
            st->timer = 0x91;
            func_ov006_021abc4c();
            func_ov006_021af668(0x37);
        } else if (mode == 3) {
            if (st->sub[0x47] != 0) return;
            func_ov006_021b0600(9);
            st->sub[0x47] = 1;
            return;
        } else {
            st->state = (s == 12) ? 13 : 12;
        }
        break;
    default:
        if (mode == 1) {
            if (st->cnt != 0) {
                st->cnt--;
            } else {
                func_ov006_021b0600(0x13);
                *(int *)(st->sub + 0x38) = func_ov006_021b570c(0, func_ov006_021ac3b8, 0, 0x78);
                return;
            }
        } else if (mode == 3) {
            if (st->cnt >= 3) {
                func_ov006_021b0600(0x13);
                *(int *)(st->sub + 0x38) = func_ov006_021b570c(0, func_ov006_021ac430, 0, 0x78);
                return;
            }
            st->cnt++;
        } else {
            r6 = 2;
            if (s == 2) {
                st->state = 3;
                func_ov006_021b0600(8);
                func_ov006_021ac4e4();
            } else if (s == 3) {
                st->state = 2;
                func_ov006_021b0600(8);
                func_ov006_021ac4e4();
            } else if (s == 7) {
                st->state = 8;
                func_ov006_021b0600(8);
                func_ov006_021ac4e4();
            } else if (s == 8) {
                st->state = 7;
                func_ov006_021b0600(8);
                func_ov006_021ac4e4();
            }
        }
        break;
    }

    if (r6 == 2) return;
    func_ov006_021b0600(8);
    if (r6 == 0) {
        func_ov006_021ac56c();
    }
}

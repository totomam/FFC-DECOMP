#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern void func_ov001_02184030(uint32_t);
extern uint32_t func_ov000_021636d0(void);
extern uint32_t *func_ov000_02163608(void);
extern int func_ov000_02163408(void);
extern uint32_t *func_ov000_02163634(int);
extern int func_ov000_0215eb30(int, uint32_t, uint32_t, uint32_t, uint32_t *, uint32_t);

int func_ov000_0215fdf8(uint32_t a)
{
    uint32_t k = 0x5dc;
    uint32_t r4;
    uint32_t i;
    uint32_t *e;
    uint32_t *keys;
    struct { uint32_t a[2]; uint32_t pad[14]; } S;
    int rc = 0;

    if (func_ov000_02163350()[0x18] != 0) {
        if (*(uint32_t *)(func_ov000_02163350() + k) == a) {
            return 0;
        }
    }

    func_ov000_02163350()[0x18] = 1;
    *(uint32_t *)(func_ov000_02163350() + k) = a;
    *(uint32_t *)(func_ov000_02163350() + k + 0x5c) = 0;
    *(uint32_t *)(func_ov000_02163350() + k + 0x68) = 0;
    func_ov001_02184030(*(uint32_t *)(func_ov000_02163350() + 0x10));
    *(uint32_t *)(func_ov000_02163350() + k + 0xa0) = 0;

    r4 = func_ov000_021636d0();
    func_ov000_02163350()[k - 0x72] = (uint8_t)r4;

    if (*(uint32_t *)(func_ov000_02163350() + k - 0x38) == 0) {
        S.a[0] = *(uint32_t *)(func_ov000_02163350() + k - 0x88);
        S.a[1] = func_ov000_02163350()[k - 0x72];
        keys = func_ov000_02163608();
        if (func_ov000_02163408() > 0) {
            i = 0;
            do {
                e = func_ov000_02163634(i);
                if (keys[0] != e[0]) {
                    rc = func_ov000_0215eb30(7, e[0], e[1], *(uint16_t *)((uint8_t *)e + 0xc), S.a, 2);
                    if (rc != 0) {
                        return rc;
                    }
                }
                i++;
            } while ((int)i < func_ov000_02163408());
        }
    }
    return 0;
}

#include "ffc/types.h"

extern uint8_t *data_ov006_021bc7e0;
extern void func_ov006_021afbbc(void);
extern void func_ov006_021afab4(void);
extern void func_02088f30(void *);

typedef struct {
    uint16_t a;
    uint16_t b;
    uint32_t pad;
    uint16_t d;
} Obj;

void func_ov006_021afb78(Obj *p)
{
    if (p->b != 0) {
        return;
    }
    if (data_ov006_021bc7e0[0x1e5c] != 0) {
        return;
    }
    if (p->a != 0x26) {
        return;
    }
    if (p->d != 4) {
        if (p->d == 5) {
            func_ov006_021afbbc();
            func_ov006_021afab4();
            return;
        }
    } else {
        func_ov006_021afab4();
        return;
    }
    func_02088f30(p);
}

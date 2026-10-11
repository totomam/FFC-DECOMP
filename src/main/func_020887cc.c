#include "ffc/types.h"

extern void func_0208658c(uint32_t a, void (*cb)(void));
extern void func_020818f8(int32_t v);
extern void func_020866dc(uint32_t a);
extern void func_02088828(void);

typedef struct {
    uint8_t pad[0x10];
    int16_t f10;
} Obj;

void func_020887cc(Obj *p) {
    func_0208658c(4, func_02088828);
    func_020818f8(p->f10);
    *(uint16_t *)0x4000004 |= 0x20;
    func_020866dc(4);
}

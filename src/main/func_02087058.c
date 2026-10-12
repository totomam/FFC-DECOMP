#include "ffc/types.h"

extern void *func_02088978(void);
extern void func_0208898c(void *);
extern uint32_t func_02086b94(void *owner);
extern void func_02086c78(void);

typedef struct {
    uint32_t head;
    uint32_t tail;
} Owner;

void func_02087058(Owner *a) {
    void *r7 = func_02088978();
    if (a->head != 0) {
        while (a->head != 0) {
            uint32_t *r0 = (uint32_t *)func_02086b94(a);
            r0[0x64 / 4] = 1;
            r0[0x78 / 4] = 0;
            r0[0x80 / 4] = 0;
            r0[0x7c / 4] = r0[0x80 / 4];
        }
        a->tail = 0;
        a->head = 0;
        func_02086c78();
    }
    func_0208898c(r7);
}

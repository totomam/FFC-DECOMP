#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern uint32_t func_0207dc40(uint32_t value);
extern void func_02087058(void *p);
extern void func_0208898c(uint32_t value);

void func_0207dc60(uint32_t *a, uint32_t v)
{
    uint32_t t = func_02088978();
    uint32_t *n = (uint32_t *)a[2];
    uint32_t f;

    if (n != 0) {
        uint32_t *prev = n + 2;
        uint32_t *cur = (uint32_t *)n[2];
        while (cur != 0) {
            if (cur == a) {
                *prev = a[0];
                break;
            }
            prev = cur;
            cur = (uint32_t *)cur[0];
        }
        a[0] = 0;
    }

    f = (a[3] >> 8) & 0xff;
    if (func_0207dc40(f) == 0 && n != 0) {
        n[6] = f;
        n[7] = v;
    }

    a[5] = v;
    a[3] = a[3] & ~0xcfu;
    func_02087058(a + 6);
    func_0208898c(t);
}

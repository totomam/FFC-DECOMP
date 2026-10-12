#include "ffc/types.h"

extern void *func_ov000_02163608(void);
extern unsigned long long func_020882cc(void *p);
extern int32_t func_ov000_02163408(void);
extern uint8_t *func_ov000_02163634(int32_t idx);
extern int32_t func_ov000_0215b6a0(uint8_t v);
extern unsigned long long func_0209a71c(unsigned long long first, unsigned long long second);

unsigned long long func_ov000_0216379c(void)
{
    void *p = func_ov000_02163608();
    int32_t found;
    unsigned long long total = func_020882cc(p);
    int32_t cnt;
    int32_t i;
    int32_t n;
    unsigned long long t2;
    unsigned long long t3;

    cnt = 0;
    total += (uint32_t)0x17f898;
    found = 0;

    if (func_ov000_02163408() > 2) {
        i = 1;
        if (func_ov000_02163408() > 1) {
            do {
                uint8_t *q = func_ov000_02163634(i);
                if (p == q) {
                    found = i;
                } else {
                    func_ov000_0215b6a0(q[0x16]);
                    if (func_ov000_0215b6a0(q[0x16]) != 0) {
                        cnt++;
                    }
                }
                i++;
            } while (i < func_ov000_02163408());
        }
    }

    t2 = func_0209a71c((long long)cnt, 0x17f898ULL);
    total += t2;

    n = func_ov000_02163408();
    t3 = func_0209a71c((long long)((n - 1 - found) * 0x1770), 0x82eaULL);
    return total + (t3 >> 6);
}

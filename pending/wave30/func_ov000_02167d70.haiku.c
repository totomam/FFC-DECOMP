#include "ffc/types.h"

extern void func_ov000_02165850(void *buf, uint32_t a, uint32_t b);
extern int func_ov000_02167b80(void *p, uint32_t a, uint32_t b);
extern int func_ov000_02167f34(void *p, void *buf);
extern int func_ov000_02167bcc(void *p, uint32_t a, uint32_t b);

uint32_t func_ov000_02167d70(void *p, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4)
{
    uint32_t buf[9];

    func_ov000_02165850(buf, a3, a4);
    if (func_ov000_02167b80(p, a1, a2) != 0) {
        if (func_ov000_02167f34(p, buf) != 0) {
            if (func_ov000_02167bcc(p, a1, a2) != 0) {
                return 1;
            }
        }
    }
    return 0;
}

#include "ffc/types.h"
extern void func_ov000_02165850(void *p, uint32_t a, uint32_t b);
extern int func_ov000_02167b80(void *a, uint32_t b, uint32_t c);
extern int func_ov000_02167f34(void *a, void *b);
extern int func_ov000_02167bcc(void *a, uint32_t b, uint32_t c);
int func_ov000_02167d70(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    uint8_t buf[0x24];
    func_ov000_02165850(buf, d, e);
    if (!func_ov000_02167b80(a,b,c) || !func_ov000_02167f34(a,buf) || !func_ov000_02167bcc(a,b,c)) return 0;
    return 1;
}

#include "ffc/types.h"

extern void *func_02088978(void *p);
extern void func_0208898c(void *p);

void *func_ov000_0214ec88(void **a, void *b)
{
    void **link = a;
    void *cur;
    void *ret;

    ret = func_02088978(a);
    cur = *link;
    while (cur != 0) {
        if (cur == b) {
            func_0208898c(ret);
            return link;
        }
        link = (void **)((char *)cur + 0xb8);
        cur = *link;
    }
    func_0208898c(ret);
    return 0;
}

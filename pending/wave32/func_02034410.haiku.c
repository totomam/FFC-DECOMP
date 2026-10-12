#include "ffc/types.h"

extern void func_0208b004(void);
extern void func_0208b65c(int x);
extern void func_02087840(void);
extern void func_02034300(void *p, int x);
extern void func_020342d8(void *p);
extern void func_020544e4(void *p);
extern void func_02054a88(void *p);
extern void func_02056844(void *p);
extern char data_020ae350[];
extern char data_020ae370[];
extern char data_020ae384[];

void *func_02034410(void *p0)
{
    void **p = (void **)p0;
    p[0] = data_020ae350;
    p[5] = data_020ae370;
    p[8] = data_020ae384;
    func_0208b004();
    func_0208b65c(0);
    func_02087840();
    func_02034300(p0, 0);
    func_020342d8(p0);
    func_020544e4((char *)p0 + 0x20);
    func_02054a88((char *)p0 + 0x14);
    func_02056844(p0);
    return p0;
}

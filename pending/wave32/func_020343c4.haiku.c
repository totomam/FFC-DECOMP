#include "ffc/types.h"

extern void func_0208b004(void);
extern void func_0208b65c(uint32_t x);
extern void func_02087840(void);
extern void func_02034300(void *p, uint32_t x);
extern void func_020342d8(void *p);
extern void func_020544e4(void *p);
extern void func_02054a88(void *p);
extern char data_020ae350[];
extern char data_020ae370[];
extern char data_020ae384[];

typedef struct {
    void *vt0;
    uint32_t b[4];
    void *vt14;
    uint32_t d[2];
    void *vt20;
} Obj;

void *func_020343c4(void *p0)
{
    Obj *p = (Obj *)p0;
    p->vt0 = data_020ae350;
    p->vt14 = data_020ae370;
    p->vt20 = data_020ae384;
    func_0208b004();
    func_0208b65c(0);
    func_02087840();
    func_02034300(p, 0);
    func_020342d8(p);
    func_020544e4((char *)p + 0x20);
    func_02054a88((char *)p + 0x14);
    return p;
}

#include "ffc/types.h"

extern void *func_02056aec(void *p);
extern void *func_0203b708(int n);
extern void *func_0203b688(void);
extern void func_02056bc0(void *object, void *node);

typedef struct VObj {
    void (**vt)(struct VObj *);
} VObj;

void func_ov002_0219b618(void *obj, void *node, VObj *vobj)
{
    void *local;
    void *n;
    void *s;

    if (vobj != 0 && vobj != 0) {
        vobj->vt[1](vobj);
    }
    local = func_02056aec(node);
    n = func_0203b708(0x32);
    s = func_0203b688();
    func_02056bc0(s, n);
    func_02056bc0(s, local);
    obj = (char *)obj + 0x48;
    func_02056bc0(obj, node);
    func_02056bc0(obj, s);
}

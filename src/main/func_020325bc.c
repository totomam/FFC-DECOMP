#include "ffc/types.h"

extern char data_020ae0f8[];
extern void func_02056c4c(void *p);
extern void *func_020059cc(void *object);
extern void func_02056db0(void *p);

void *func_020325bc(void *p) {
    *(char **)p = data_020ae0f8;
    func_02056c4c((char *)p + 0x14);
    func_02056c4c((char *)p + 0x48);
    func_020059cc((char *)p + 0x90);
    func_02056db0(p);
    return p;
}

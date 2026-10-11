#include "ffc/types.h"

extern char data_ov007_021c3e38[];
extern char data_ov007_021c3e54[];
extern void *func_02056dd4(void *p);
extern void func_0206047c(void *p);
extern void func_ov007_021a6c80(void *p);
extern void func_ov007_021a6cb4(void *p);
extern void func_020558d8(void *p);
extern void func_02056db0(void *p);

void *func_ov007_021a4948(void *p)
{
    char *r4 = (char *)p;

    *(char **)r4 = data_ov007_021c3e38;
    *(char **)(r4 + 0x80) = data_ov007_021c3e54;
    func_0206047c(*(void **)((char *)func_02056dd4(p) + 0x20));
    func_ov007_021a6c80(r4 + 0x128);
    func_ov007_021a6cb4(r4 + 0x11c);
    func_020558d8(r4 + 0x80);
    func_02056db0(r4);
    return r4;
}

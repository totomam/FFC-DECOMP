#include "ffc/types.h"
extern void *func_0205681c(int a, int b, int c, int d, int e, int *f);
extern void func_020970e8(void *p);
extern int data_020b305c;
int *func_02097054(int *self, int b, int c, int d) {
    int *o;
    int args[1];
    int cc = c;
    *self = b;
    o = (int*)func_0205681c(0x10, b, cc, d, b, &c);
    if (o) { o[1]=1; o[2]=1; o[0]=(int)&data_020b305c; o[3]=b; }
    self[1]=(int)o;
    args[0]=0;
    func_020970e8(args);
    return self;
}

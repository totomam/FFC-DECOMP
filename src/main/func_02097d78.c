/* cflags: -lang c++ */
#include "ffc/types.h"
struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14();
    virtual int seek(int lo, int hi, int one);
    int f4; int f8; int fc; int pad[9]; int f34;
};
extern "C" int func_02097d78(Obj *o);
extern "C" int func_02097d78(Obj *o)
{
    int d = (o->fc - o->f8) * o->f34;
    if (d > 0) {
        d = o->seek(-d, (-d) >> 31, 1);
    }
    if (d < 0) return -1;
    {
        int a = o->f8;
        int b = o->f4;
        o->f8 = a;
        o->f4 = b;
        o->fc = a;
    }
    return 0;
}

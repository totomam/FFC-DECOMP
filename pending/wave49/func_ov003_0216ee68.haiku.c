#include "ffc/types.h"

extern void *data_020b93b8;
extern int32_t func_0201c9ac(void *p, int32_t id);
extern int32_t func_0201bd84(void *p, int32_t id);

int32_t func_ov003_0216ee68(int32_t a)
{
    int32_t r4 = 6, r6 = 6, r7 = 6, s = 6, v;

    switch (a) {
    case 0:
    case 1:
        goto blkA;
    case 2:
        goto blkB;
    case 3:
        goto blkC;
    case 4:
        goto blk4;
    case 5:
    case 6:
        goto blk5;
    case 7:
        goto blk7;
    default:
        goto end;
    }

blkA:
    v = func_0201c9ac(data_020b93b8, 0xb);
    if (v == 1) r4 = 0;
    else if (v == 2) r4 = 1;
    else if (v == 3) r4 = 5;
    if (a == 1) goto end;

blkB:
    v = func_0201c9ac(data_020b93b8, 0xd);
    if (v == 1) r6 = 0;
    else if (v == 2) r6 = 1;
    else if (v == 3) r6 = 5;
    if (a == 2) {
        r4 = r6;
        goto end;
    }

blkC:
    v = func_0201c9ac(data_020b93b8, 0xc);
    if (v == 1) r7 = 0;
    else if (v == 2) r7 = 1;
    else if (v == 3) r7 = 5;
    if (a == 3) {
        r4 = r7;
        goto end;
    }
    {
        int32_t t = r6;
        if (!(r4 > r6)) t = r4;
        if (t <= r7) {
            if (r4 <= r6) r6 = r4;
            r7 = r6;
        }
    }
    r4 = r7;
    goto end;

blk4:
    v = func_0201c9ac(data_020b93b8, 0xa);
    if (v == 1) r4 = 0;
    else if (v == 2) r4 = 1;
    else if (v == 3) r4 = 2;
    else if (v == 4) r4 = 3;
    else if (v == 6) r4 = 4;
    else if (v == 8) r4 = 5;
    goto end;

blk5:
    v = func_0201bd84(data_020b93b8, 0x25);
    s = (v != 0) ? 5 : 0;
    if (a == 6) {
        r4 = s;
        goto end;
    }

blk7:
    v = func_0201bd84(data_020b93b8, 0x26);
    r4 = 5;
    if (v == 0) r4 = 0;
    if (a == 7) goto end;
    if (!(s > r4)) r4 = s;

end:
    return r4;
}

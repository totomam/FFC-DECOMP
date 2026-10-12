#include "ffc/types.h"

extern void *func_ov000_0214fa54(void *p);
extern int func_0208d828(void *fn);
extern int func_0208cd90(void);
extern void func_ov000_0214fbe4(int x);
extern void func_ov000_0214fb84(int a, void *b, int c, int d);
extern int func_0208d800(void *fn);
extern int func_0208ea2c(void *fn, int x);
extern int func_0208e970(void *fn, int a, int b, void *c);
extern int func_0208db80(void *fn, void *p, int z, int flag, int s);
extern void func_ov000_021509e8(void *p);
extern int func_ov000_02150dcc(void);

void func_ov000_021509e8(void *param)
{
    uint8_t *p = (uint8_t *)param;
    uint8_t *r4;
    int r5 = 0x14;
    int ret;
    int16_t flag;
    uint32_t v;
    int s5, s3;

    r4 = (uint8_t *)func_ov000_0214fa54(param);

    switch (*(uint16_t *)(p + 2)) {
    case 0:
        break;
    case 1:
        goto L16e;
    case 2:
    case 3:
    case 4:
    default:
        goto L192;
    }

    switch (*(uint16_t *)p) {
    case 0:
    case 1:
    case 2:
        goto L118;
    case 3:
        goto L60;
    case 4:
        goto L68;
    case 5:
        goto La2;
    case 6:
        goto Lba;
    case 0x19:
        goto Lcc;
    case 0x1d:
        goto Lc2;
    case 0x27:
        goto Le0;
    default:
        goto L118;
    }

L60:
    ret = func_0208d828((void *)func_ov000_021509e8);
    goto L116;

L68:
    ret = func_0208cd90();
    if (ret == 0) goto L74;
    goto L8c;

L74:
    func_ov000_0214fbe4(1);
    func_ov000_0214fb84(0, 0, 0, 0x2a4);
    return;

L8c:
    func_ov000_0214fbe4(0xb);
    func_ov000_0214fb84(7, 0, 0, 0x2ad);
    return;

La2:
    func_ov000_0214fbe4(3);
    func_ov000_0214fb84(0, 0, 0, 0x2b4);
    return;

Lba:
    ret = func_0208d800((void *)func_ov000_021509e8);
    goto L116;

Lc2:
    ret = func_0208ea2c((void *)func_ov000_021509e8, 0);
    goto L116;

Lcc:
    ret = func_0208e970((void *)func_ov000_021509e8, r4[0x1290], r4[0x1291], r4 + 0x1240);
    goto L116;

Le0:
    s5 = 1;
    v = *(uint32_t *)(r4 + 0x12d4);
    if ((v & (3 << 18)) != (3 << 18)) s5 = 0;
    s3 = 1;
    if ((v & (3 << 16)) == (3 << 16)) s3 = 0;
    ret = func_0208db80((void *)func_ov000_02150dcc, r4 + 0x12e0, 0, s3, s5);

L116:
    r5 = ret;

L118:
    if (r5 == 2) return;
    if (r5 == 3) goto L14a;
    if (r5 != 8) goto L14a;
    func_ov000_0214fbe4(0xc);
    flag = *(int16_t *)(r4 + 0x12da);
    func_ov000_0214fb84(1, (flag == 5) ? (r4 + 0x12e0) : 0, 0, 0x2f0);
    return;

L14a:
    func_ov000_0214fbe4(0xb);
    flag = *(int16_t *)(r4 + 0x12da);
    func_ov000_0214fb84(7, (flag == 5) ? (r4 + 0x12e0) : 0, 0, 0x2f9);
    return;

L16e:
    func_ov000_0214fbe4(0xc);
    flag = *(int16_t *)(r4 + 0x12da);
    func_ov000_0214fb84(1, (flag == 5) ? (r4 + 0x12e0) : 0, 0, 0x31f);
    return;

L192:
    func_ov000_0214fbe4(0xb);
    flag = *(int16_t *)(r4 + 0x12da);
    func_ov000_0214fb84(7, (flag == 5) ? (r4 + 0x12e0) : 0, 0, 0x329);
    return;
}

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 func_02088978(void);
extern void func_0208898c(u32 irq);
extern int func_ov000_0214577c(u32 a);
extern int func_ov000_021457a4(u32 a);
extern unsigned long long func_020882cc(void);
extern u8 data_ov000_0216bc60[];
extern u8 data_ov000_0216bcc8[];
extern u8 data_ov000_021697c9[];
extern u8 data_ov000_0216bd78[];
extern u8 data_ov000_0216bd82[];

u8 *func_ov000_02145a4c(u32 a)
{
    u32 irq = func_02088978();
    u8 *r = 0;
    u32 i;
    if (a == 0x7f000001 || a == *(u32 *)(data_ov000_0216bc60 + 0x50)) {
        r = data_ov000_0216bcc8;
    } else if (func_ov000_0214577c(a) != 0 || func_ov000_021457a4(a) != 0) {
        r = data_ov000_021697c9;
    } else {
        for (i = 0; i < 8; i++) {
            u32 off = i * 12;
            u8 *p = data_ov000_0216bd78 + off;
            if (a == *(u32 *)p) {
                *(u16 *)(data_ov000_0216bd82 + off) = (u32)(func_020882cc() >> 16);
                r = p + 4;
                break;
            }
        }
    }
    func_0208898c(irq);
    return r;
}

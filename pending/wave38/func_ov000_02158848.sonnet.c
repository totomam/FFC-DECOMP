typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

extern void func_02084ca4();
extern u8 data_ov000_0217000c[];
extern u8 data_ov000_02170008[];
extern u8 data_ov000_02170012[];
extern u8 data_ov000_02170018[];

typedef struct {
    u32 pad;
    u32 w1;
    u32 w2;
    u32 w3;
    u16 h;
    u8 rest[1];
} S;

u8 *func_ov000_02158848(S *p)
{
    u32 buf[2];
    u32 *q = buf;

    q[0] = p->w2;
    q[1] = p->w3;
    func_02084ca4(p, data_ov000_0217000c, 5, q[1], q[0], q[1]);
    data_ov000_02170008[9] = ((q[0] & 0x1f) << 3) | ((p->w1 >> 8) & 7);

    q[0] = (q[0] >> 5) | (q[1] << 27);
    q[1] = q[1] >> 5;
    func_02084ca4(q, data_ov000_02170012, 4);

    data_ov000_02170008[0xe] = (q[1] & 0x3f) | ((p->h << 30) >> 24);
    data_ov000_02170008[0xf] = p->h >> 2;
    func_02084ca4(p->rest, data_ov000_02170018, 2);
    return data_ov000_0217000c;
}

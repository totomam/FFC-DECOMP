/* cflags:  */
/* From arcnid/ffc-decomp src/battle/dirtable_absdiff_fxratio_021ACE28.c, externs renamed. */
#ifndef BATTLE_H
#define BATTLE_H

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;

typedef struct BattleState BattleState;
typedef struct Vivosaur Vivosaur;
typedef struct AttackInfo AttackInfo;

u32 rand_range(u32* rng_state, u32 max);

u32* BattleState_GetRng(BattleState* state);
s32 BattleState_GetTeamSize(BattleState* state);
Vivosaur* BattleState_GetVivosaur(BattleState* state, s32 index);

s32 Vivosaur_GetAbilityInfo(Vivosaur* vivo);
s32 Vivosaur_CheckSkill(s32 info, s32 skill_id);
s32 Vivosaur_GetType(Vivosaur* vivo);

#endif

/* Matched 021ACE28 (0xB4, -O4,p). Sibling of phantomframe_fxratio_021ACEDC.
   Loads 8 byte-stats (q+0x1b..0x22) from *(b+0x138) into a u32 array, compares
   func_ov002_021a16ec(func_ov002_021aa850(b)) vs func_ov002_021a16ec(func_ov002_021aa850(c)) for a same/opposing flag, copies the 24B direction table
   data_ov002_021d3ac4 (0x021D3AC4) locally, computes idx = func_0208f694(t.w[func_ov002_021aa780(b)] - adj(t.w[func_ov002_021aa780(c)]))
   (adj = identity if same else 7-x), then *out = func_02081210(arr[idx] << 12, 0x64000).
   Phantom sp+4..0x13 = FOUR one-word W structs by value: func_ov002_021a16ec(W) x2 (two single-use
   locals) + func_02081210(W,W). func_0208f694 (0x208f694) takes plain u32. KEYS: reuse `cs` for the
   func_0208f694 result (forces index into r2 not r1); dd (0x19<<14) assigned AFTER the
   func_0208f694 call / BEFORE the shift so movs r1 lands between ldr and lsls. */
typedef struct { u32 v; } W;
typedef struct { u32 w[6]; } Tbl;
extern Tbl data_ov002_021d3ac4;                /* 0x021D3AC4 */
extern u32 func_ov002_021aa850(void* p);          /* 0x021AA850 */
extern u32 func_ov002_021a16ec(W a);              /* 0x021A16EC */
extern u32 func_ov002_021aa780(void* p);          /* 0x021AA780 */
extern u32 func_0208f694(u32 a);          /* 0x0208F694 */
extern u32 func_02081210(W a, W b);       /* 0x02081210 */

void func_ov002_021ace28(u32* out, u8* b, u8* c) {
    u32 arr[8];
    Tbl t;
    W lw1;
    W lw2;
    W dc;
    W dd;
    u32 v;
    u32 cs;
    u32 bs;
    u32 x;
    u32 y;
    u32 e;
    u8* q;
    q = *(u8**)(b + 0x138);
    arr[0] = q[0x1b];
    arr[1] = q[0x1c];
    arr[2] = q[0x1d];
    arr[3] = q[0x1e];
    arr[4] = q[0x1f];
    arr[5] = q[0x20];
    arr[6] = q[0x21];
    arr[7] = q[0x22];
    lw1.v = func_ov002_021aa850(b);
    v = func_ov002_021a16ec(lw1);
    lw2.v = func_ov002_021aa850(c);
    if (v == func_ov002_021a16ec(lw2)) {
        v = 1;
    } else {
        v = 0;
    }
    cs = func_ov002_021aa780(c);
    bs = func_ov002_021aa780(b);
    t = data_ov002_021d3ac4;
    x = t.w[bs];
    if (v != 0) {
        y = t.w[cs];
    } else {
        y = 7 - t.w[cs];
    }
    cs = func_0208f694(x - y);
    e = arr[cs];
    dd.v = 0x19 << 14;
    dc.v = e << 12;
    *out = func_02081210(dc, dd);
}

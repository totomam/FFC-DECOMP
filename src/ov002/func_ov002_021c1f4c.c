/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/msg_pick_advance_021C1F4C.c, externs renamed. */
/* Matched: 0x021C1F4C  size 0x18C (396B; compiled 394B + 2B inter-function
   alignment pad — SIZE MISMATCH then MATCH! per playbook)
   Flags: -O4 (also -O4,p)
   Unit: main function + literal pool + trailing empty stub at 0x021C20D4.
   Message advance/pick step: copies data_ov002_021d70a8 into +0x80/+0x84; when func_0202ebfc(+0x88)==1
   and !byte[+0xAC]: clamps index +0x98 to vector(+0x94) count-1, bails if <0;
   picks a new selection via func_0206c184(&data_ov002_021d797c, entry->f4) (re-rolling while equal to
   +0x9C when index == last(+0xA0) and count>1), builds a small-string temp from
   strArray[+0x9C picked], Sends its c_str (SSO wflag bit) unless suppressed,
   then func_0202f030/func_ov002_021c1db8, last=cur, cur++ (volatile reload defeats CSE), string dtor. */
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


typedef struct { u32 x, y; } Pair;
typedef struct { u32 f0; u32 f4; u8* p8; } Str2;
typedef struct { u32 w : 1; } WFlags;

extern Pair data_ov002_021d70a8;   /* 0x021D70A8 */
extern u32 data_ov002_021d797c;     /* 0x021D797C */

extern u32 func_0202ebfc(u32);               /* 0x0202EBFC */
extern u32 func_0206c184(u32*, u32);        /* 0x0206C184 */
extern void func_020095b8(Str2*, void*); /* 0x020095B8 */
extern void func_0202e6d0(u32, u8*, u32);   /* 0x0202E6D0 */
extern void func_0202f030(u32, u32);        /* 0x0202F030 */
extern void func_ov002_021c1db8(void*, u32);      /* 0x021C1DB8 */
extern void func_020059cc(Str2*);        /* 0x020059CC */

void func_ov002_021c1f4c(u8* s)
{
    Str2 t;
    u32 n;
    u32 c;
    s32 i;
    u8* d;
    u8* v;
    u32 sel;

    *(Pair*)(s + 0x80) = data_ov002_021d70a8;
    if (func_0202ebfc(*(u32*)(s + 0x88)) == 1 && *(u8*)(s + 0xAC) == 0) {
        v = *(u8**)(s + 0x94);
        if (v == 0) {
            return;
        }
        n = *(u32*)(v + 4);
        if (n <= *(u32*)(s + 0x98)) {
            *(u32*)(s + 0x98) = n - 1;
        }
        i = *(s32*)(s + 0x98);
        if (i < 0) {
            return;
        }
        if (i == *(s32*)(s + 0xA0)) {
            d = *(u8**)(*(u8**)(s + 0x94));
            c = *(u32*)(d + i * 0xC + 4);
            if (c > 1) {
                sel = func_0206c184(&data_ov002_021d797c, c);
                if (sel == *(u32*)(s + 0x9C)) {
                    do {
                        sel = func_0206c184(&data_ov002_021d797c, *(u32*)(*(u8**)(*(u8**)(s + 0x94)) + *(u32*)(s + 0x98) * 0xC + 4));
                    } while (sel == *(u32*)(s + 0x9C));
                }
                *(u32*)(s + 0x9C) = sel;
            } else {
                *(u32*)(s + 0x9C) = 0;
            }
            *(u8*)(s + 0xAD) = 1;
        } else {
            *(u32*)(s + 0x9C) = func_0206c184(&data_ov002_021d797c, *(u32*)(*(u8**)(*(u8**)(s + 0x94)) + i * 0xC + 4));
        }
        func_020095b8(&t, *(u8**)(*(u8**)(*(u8**)(s + 0x94)) + *(u32*)(s + 0x98) * 0xC) + *(u32*)(s + 0x9C) * 0xC);
        if (*(u8*)(s + 0xAE) != 0 || *(u8*)(s + 0xAD) == 0) {
            u8* q;
            if (((WFlags*)(void*)&t)->w == 0) {
                q = (u8*)&t + 1;
            } else {
                q = t.p8;
            }
            func_0202e6d0(*(u32*)(s + 0x88), q, 0);
        }
        func_0202f030(*(u32*)(s + 0x88), *(u32*)(s + 0xA8));
        func_ov002_021c1db8(s, *(u32*)(s + 0x8C));
        *(u32*)(s + 0xA0) = *(u32*)(s + 0x98);
        c = *(volatile u32*)(s + 0x98);
        s += 0x98;
        *(u32*)s = c + 1;
        func_020059cc(&t);
    }
}

static void pad_021C20D4(void)
{
}

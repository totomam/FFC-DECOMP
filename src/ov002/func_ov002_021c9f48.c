/* cflags:  */
/* From arcnid/ffc-decomp src/battle/threshold_stat_fetch_by_sel_021C9F48.c, externs renamed. */
/* Matched: 0x021C9F48  size 0x134 (308B)
   Flags: -O4,p (halfword-indexed jump table, duplicated epilogues)
   Threshold check + per-selector stat fetch. Builds a string temp
   (func_02016074 0x2016074, 0xb), resolves a record via table at base+8 indexed
   by (a1-1)*4, scans its 4-byte {u16 kind; s16 val} entries for kind==1;
   if found and func_0209a978(*(a0+0x108)*100, f170C(obj)) < entry.val ->
   *out=0, dtor, return 0. Then switch(a1): 2/3/6 -> *out=f16FC(obj),ret 3;
   4/5 -> *out = clamp0(f16FC - (helper(f170C, sel) - *(u16*)(f16E4+6))),
   ret (r?3:0); else ret 3.
   KEY REGALLOC LEVERS (closed a 159-byte nibble-swap near-miss):
   1. entries[i].val must be read through a SINGLE pointer local
      (Entry* e = &entries[i]) held across the calls (r6); reading
      entries[i] directly keeps entries+i live across calls and steals r4,
      cascading out->r7 + obj->spill. kind is read via the DISTINCT tree
      *(u16*)(entries + i*4) (reg+reg ldrh).
   2. base and count are ONE merged variable (base = *(u8**)(base+elem))
      -> both r2 (merged vars keep their register; fresh locals rotate).
   3. hdr/sum/elem are a mutation CHAIN through one u8* p, with the sum
      folded INTO the elem statement: p = hdr; p = *((base + p) + i*4).
      A separate `p = base + p;` statement flips r0/r1 on hdr vs idx.
   4. idx merged into loop counter i (i = a1 - 1; ... i = 0).
   5. Early-return dtor block reuses OUT's register for &tmp: assign
      out = (u32*)(void*)&tmp after *out = 0 (variable-merge); a fresh
      Str* alias lands r5, not r4. Main-path dtor uses a fresh alias (r6).
   6. Cases 2, 3, 6 are written as THREE explicit duplicate bodies ending
      in break (NOT shared case labels, NOT return 3) -> mwcc cross-jumps
      2/3 into 2-byte branch stubs to case 6's body falling into return 3.
   7. Case 4/5: *out stored TWICE around the clamp (str; bpl; movs; str),
      flag reuse from the subtraction. */
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


typedef struct { u32 a0; void* p4; u32 l8; u8 fC; u8 pad[3]; } Str;
typedef struct { u16 kind; short val; } Entry;

extern u32 data_020b8e44;                      /* 0x020B8E44 */
extern void func_02016074(Str*, u32, u32); /* 0x2016074 */
extern u8* func_02052d90(void*, u32);        /* 0x2052d90 */
extern void func_02052d3c(void*, u32);       /* 0x2052d3c */
extern void func_02052c04(void*);            /* 0x2052c04 */
extern void func_02053290(Str*);            /* 0x2053290 */
extern u32 func_0209a978(u32, u32);      /* 0x209a978 */
extern u32 func_ov002_021a170c(u8* self);
extern u32 func_ov002_021a16fc(u8* self);
extern u8* func_ov002_021a16e4(u8* self);
extern u32 func_0209a76c(u32 a, u32 b);

u32 func_ov002_021c9f48(u8* a0, u32 a1, u32* out, u8* obj)
{
    Str tmp;
    u32 i;
    u8* base;
    u8* rec;
    u8* entries;
    u8* p;

    func_02016074(&tmp, data_020b8e44, 0xb);
    base = func_02052d90(tmp.p4, tmp.l8);
    i = a1 - 1;
    p = (u8*)*(u32*)(base + 8);
    p = (u8*)*(u32*)((base + (u32)p) + i * 4);
    i = 0;
    rec = base + (u32)p;
    base = (u8*)*(u32*)(base + (u32)p);
    if (i < (u32)base) {
        entries = rec + *(u32*)(rec + 4);
        do {
            Entry* e = (Entry*)(entries + i * 4);
            if (*(u16*)(entries + i * 4) == 1) {
                u32 k;
                u32 T;
                u32 val1;
                k = func_ov002_021a170c(obj);
                T = *(u32*)(a0 + 0x108);
                val1 = func_0209a978(T * 100, k);
                if ((s32)val1 < e->val) {
                    *out = 0;
                    out = (u32*)(void*)&tmp;
                    if (tmp.p4) {
                        if (((Str*)out)->fC) func_02052d3c(((Str*)out)->p4, ((Str*)out)->l8);
                        func_02052c04(((Str*)out)->p4);
                    }
                    func_02053290((Str*)out);
                    return 0;
                }
                break;
            }
            i++;
        } while (i < (u32)base);
    }
    {
        Str* tq = &tmp;
        if (tmp.p4) {
            if (tq->fC) func_02052d3c(tq->p4, tq->l8);
            func_02052c04(tq->p4);
        }
        func_02053290(tq);
    }

    switch (a1) {
    case 2:
        *out = func_ov002_021a16fc(obj);
        break;
    case 3:
        *out = func_ov002_021a16fc(obj);
        break;
    case 4:
    case 5: {
        u32 sel;
        u32 field6;
        u32 val_a;
        u32 diff;
        s32 r;
        sel = 0;
        if (a1 == 4) {
            sel = 2;
        } else if (a1 == 5) {
            sel = 1;
        }
        field6 = *(u16*)(func_ov002_021a16e4(obj) + 6);
        val_a = func_ov002_021a16fc(obj);
        diff = func_0209a76c(func_ov002_021a170c(obj), sel) - field6;
        r = (s32)(val_a - diff);
        *out = (u32)r;
        if (r < 0) r = 0;
        *out = (u32)r;
        if (r == 0) return 0;
        break;
    }
    case 6:
        *out = func_ov002_021a16fc(obj);
        break;
    }
    return 3;
}

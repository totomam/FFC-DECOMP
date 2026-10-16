/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/clamp_field_13c.c, externs renamed. */
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

/* Matched: 021AA728 (88B). Clamp field +0x13C by global bounds {?,hi,lo}.
   KEY IDIOM: inlined C++ min/max by reference = TERNARY pointer select;
   if-statement form compiles with r4/r5 params swapped. */
typedef struct { s32 f0; s32 hi; s32 lo; } Bounds;
extern Bounds data_ov002_021d5284;
extern s32 func_ov002_021d3328(void* p);
extern void func_ov002_021d334c(void* p, s32 v);
void func_ov002_021aa728(void* self, s32 delta)
{
    s32 sum;
    s32* p;
    sum = delta + func_ov002_021d3328((u8*)self + 0x13C);
    p = (sum < data_ov002_021d5284.hi) ? &sum : &data_ov002_021d5284.hi;
    p = (data_ov002_021d5284.lo < *p) ? p : &data_ov002_021d5284.lo;
    func_ov002_021d334c((u8*)self + 0x13C, *p);
}

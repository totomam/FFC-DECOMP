/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/dtor_cond_free_sub10.c, externs renamed. */
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

/* Dtor for sub-object at self+0x10: conditional buffer free (flag byte at +0xC),
   free obj at +4, sub-dtor, parent dtor; returns self.
   Matched: 021C5AA4 (48B). p loaded into local for cond+first call; second call
   re-reads the field (post-call reload). */
extern void func_02052d3c(u32 p, u32 q);
extern void func_02052c04(u32 p);
extern void func_02053290(void* p);
extern void func_02056844(void* self);

void* func_ov002_021c5aa4(void* self)
{
    u8* t = (u8*)self + 0x10;
    u32 p = *(u32*)(t + 4);
    if (p != 0) {
        if (*(u8*)(t + 0xC) != 0) {
            func_02052d3c(p, *(u32*)(t + 8));
        }
        func_02052c04(*(u32*)(t + 4));
    }
    func_02053290(t);
    func_02056844(self);
    return self;
}

/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/init_pair_copy_021C1DD4.c, externs renamed. */
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


/* Matched: 0x021C1DD4  size 0x48 (72)  -O4
   init: 8-byte Pair copy from global 0x021D7090, cond call, tail-init via 021C1E20 */

typedef struct Pair { u32 a; u32 b; } Pair;

extern Pair data_ov002_021d7090;
extern void func_02022ca4(u32 h, s32 flag);
extern void func_ov002_021c1e20(void* p);

void func_ov002_021c1dd4(u8* self, u32 b, u32 c, s32 d)
{
    *(Pair*)(self + 0x80) = data_ov002_021d7090;
    *(u32*)(self + 0x94) = b;
    *(u32*)(self + 0xA8) = c;
    if (d != 3) {
        func_02022ca4(*(u32*)(self + 0x90), d == 1);
        *(s32*)(self + 0xA4) = d;
    }
    func_ov002_021c1e20(self);
}

#ifndef FFC_BATTLE_H
#define FFC_BATTLE_H

#include "ffc/types.h"

/* Names remain structural until a current claim explicitly promotes them. */

typedef struct {
    uint16_t criterion_id;
    int16_t signed_weight;
} FfcWeightedCriterion;

typedef struct {
    uint8_t unknown_00[0x14];
    int32_t score_channel_14;
    int32_t score_channel_18;
    int32_t score_channel_1c;
    int32_t relation_score_20;
    int32_t pattern_score_24;
    int32_t adjustment_score_28;
    uint32_t unknown_2c;
} FfcAiCandidate;

typedef struct {
    uint8_t unknown_00[4];
    uint16_t side_u16_04;
} FfcDpsSidePrefix;

typedef struct {
    uint8_t unknown_00[0x34];
    uint32_t side_a_relative_offset_34;
    uint32_t side_b_relative_offset_38;
} FfcDpsRootThroughSidePointers;

typedef struct {
    uint8_t unknown_00[0x30];
    uint32_t dps_side_u16_18_copy_30;
} FfcBattleSideRuntimePrefix;

typedef struct {
    uint8_t unknown_000[0x2C0];
    FfcBattleSideRuntimePrefix side_at_2c0;
} FfcBattleStateThroughSide30;

FFC_STATIC_ASSERT(ffc_weighted_criterion_size, sizeof(FfcWeightedCriterion) == 4);
FFC_STATIC_ASSERT(ffc_ai_candidate_size, sizeof(FfcAiCandidate) == 0x30);
FFC_STATIC_ASSERT(ffc_relation_score_offset, FFC_OFFSETOF(FfcAiCandidate, relation_score_20) == 0x20);
FFC_STATIC_ASSERT(ffc_pattern_score_offset, FFC_OFFSETOF(FfcAiCandidate, pattern_score_24) == 0x24);
FFC_STATIC_ASSERT(ffc_neutral_side_field_offset, FFC_OFFSETOF(FfcDpsSidePrefix, side_u16_04) == 4);
FFC_STATIC_ASSERT(ffc_side_a_pointer_offset, FFC_OFFSETOF(FfcDpsRootThroughSidePointers, side_a_relative_offset_34) == 0x34);
FFC_STATIC_ASSERT(ffc_side_b_pointer_offset, FFC_OFFSETOF(FfcDpsRootThroughSidePointers, side_b_relative_offset_38) == 0x38);
FFC_STATIC_ASSERT(ffc_runtime_side_field_offset, FFC_OFFSETOF(FfcBattleSideRuntimePrefix, dps_side_u16_18_copy_30) == 0x30);
FFC_STATIC_ASSERT(ffc_battle_state_propagated_field_offset, FFC_OFFSETOF(FfcBattleStateThroughSide30, side_at_2c0.dps_side_u16_18_copy_30) == 0x2F0);

#endif

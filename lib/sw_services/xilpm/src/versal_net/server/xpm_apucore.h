/******************************************************************************
* Copyright (c) 2018 - 2022 Xilinx, Inc.  All rights reserved.
* SPDX-License-Identifier: MIT
******************************************************************************/


#ifndef XPM_APUCORE_H_
#define XPM_APUCORE_H_

#include "xpm_core.h"

#ifdef __cplusplus
extern "C" {
#endif

#define XPM_ACPU_0_0_CPUPWRDWNREQ_MASK  BIT(0)
#define XPM_ACPU_0_1_CPUPWRDWNREQ_MASK  BIT(1)
#define XPM_ACPU_0_2_CPUPWRDWNREQ_MASK  BIT(2)
#define XPM_ACPU_0_3_CPUPWRDWNREQ_MASK  BIT(3)
#define XPM_ACPU_1_0_CPUPWRDWNREQ_MASK  BIT(4)
#define XPM_ACPU_1_1_CPUPWRDWNREQ_MASK  BIT(5)
#define XPM_ACPU_1_2_CPUPWRDWNREQ_MASK  BIT(6)
#define XPM_ACPU_1_3_CPUPWRDWNREQ_MASK  BIT(7)
#define XPM_ACPU_2_0_CPUPWRDWNREQ_MASK  BIT(8)
#define XPM_ACPU_2_1_CPUPWRDWNREQ_MASK  BIT(9)
#define XPM_ACPU_2_2_CPUPWRDWNREQ_MASK  BIT(10)
#define XPM_ACPU_2_3_CPUPWRDWNREQ_MASK  BIT(11)
#define XPM_ACPU_3_0_CPUPWRDWNREQ_MASK  BIT(12)
#define XPM_ACPU_3_1_CPUPWRDWNREQ_MASK  BIT(13)
#define XPM_ACPU_3_2_CPUPWRDWNREQ_MASK  BIT(14)
#define XPM_ACPU_3_3_CPUPWRDWNREQ_MASK  BIT(15)
#define XPM_ACPU_0_0_PWR_CTRL_MASK	BIT(0)
#define XPM_ACPU_0_1_PWR_CTRL_MASK	BIT(1)
#define XPM_ACPU_0_2_PWR_CTRL_MASK	BIT(2)
#define XPM_ACPU_0_3_PWR_CTRL_MASK	BIT(3)
#define XPM_ACPU_1_0_PWR_CTRL_MASK	BIT(4)
#define XPM_ACPU_1_1_PWR_CTRL_MASK	BIT(5)
#define XPM_ACPU_1_2_PWR_CTRL_MASK	BIT(6)
#define XPM_ACPU_1_3_PWR_CTRL_MASK	BIT(7)
#define XPM_ACPU_2_0_PWR_CTRL_MASK	BIT(8)
#define XPM_ACPU_2_1_PWR_CTRL_MASK	BIT(9)
#define XPM_ACPU_2_2_PWR_CTRL_MASK	BIT(10)
#define XPM_ACPU_2_3_PWR_CTRL_MASK	BIT(11)
#define XPM_ACPU_3_0_PWR_CTRL_MASK	BIT(12)
#define XPM_ACPU_3_1_PWR_CTRL_MASK	BIT(13)
#define XPM_ACPU_3_2_PWR_CTRL_MASK	BIT(14)
#define XPM_ACPU_3_3_PWR_CTRL_MASK	BIT(15)

typedef struct XPm_ApuCore XPm_ApuCore;

/**
 * The APU core class.
 */
struct XPm_ApuCore {
	XPm_Core Core; /**< Processor core devices */
	u32 FpdApuBaseAddr; /**< Base address of FPD_APU module */
};

/************************** Function Prototypes ******************************/
XStatus XPmApuCore_Init(XPm_ApuCore *ApuCore,
	u32 Id,
	u32 Ipi,
	const u32 *BaseAddress,
	XPm_Power *Power, XPm_ClockNode *Clock, XPm_ResetNode *Reset);

#ifdef __cplusplus
}
#endif

/** @} */
#endif /* XPM_APUCORE_H_ */

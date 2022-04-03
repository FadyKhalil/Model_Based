/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LedSwitching.h
 *
 * Code generated for Simulink model 'LedSwitching'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Mon Apr  4 00:57:57 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_LedSwitching_h_
#define RTW_HEADER_LedSwitching_h_
#include <stddef.h>
#include <string.h>
#ifndef LedSwitching_COMMON_INCLUDES_
#define LedSwitching_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* LedSwitching_COMMON_INCLUDES_ */

#include "LedSwitching_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint8_T is_active_c2_LedSwitching;   /* '<Root>/Chart' */
  uint8_T temporalCounter_i1;          /* '<Root>/Chart' */
} DW_LedSwitching_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input;                        /* '<Root>/Input' */
} ExtU_LedSwitching_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Output;                       /* '<Root>/Output' */
} ExtY_LedSwitching_T;

/* Real-time Model Data Structure */
struct tag_RTM_LedSwitching_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_LedSwitching_T LedSwitching_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_LedSwitching_T LedSwitching_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_LedSwitching_T LedSwitching_Y;

/* Model entry point functions */
extern void LedSwitching_initialize(void);
extern void LedSwitching_step(void);
extern void LedSwitching_terminate(void);

/* Real-time Model object */
extern RT_MODEL_LedSwitching_T *const LedSwitching_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'LedSwitching'
 * '<S1>'   : 'LedSwitching/Chart'
 * '<S2>'   : 'LedSwitching/Triggered Subsystem'
 * '<S3>'   : 'LedSwitching/Triggered Subsystem/Chart'
 * '<S4>'   : 'LedSwitching/Triggered Subsystem/Chart1'
 */
#endif                                 /* RTW_HEADER_LedSwitching_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

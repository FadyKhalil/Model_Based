/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: functionSim.h
 *
 * Code generated for Simulink model 'functionSim'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Thu Mar  3 19:28:32 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_functionSim_h_
#define RTW_HEADER_functionSim_h_
#include <math.h>
#include <stddef.h>
#ifndef functionSim_COMMON_INCLUDES_
#define functionSim_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* functionSim_COMMON_INCLUDES_ */

#include "functionSim_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input;                        /* '<Root>/Input' */
} ExtU_functionSim_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Fact;                         /* '<Root>/Fact' */
} ExtY_functionSim_T;

/* Real-time Model Data Structure */
struct tag_RTM_functionSim_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_functionSim_T functionSim_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_functionSim_T functionSim_Y;

/* Model entry point functions */
extern void functionSim_initialize(void);
extern void functionSim_step(void);
extern void functionSim_terminate(void);

/* Real-time Model object */
extern RT_MODEL_functionSim_T *const functionSim_M;

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
 * '<Root>' : 'functionSim'
 * '<S1>'   : 'functionSim/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_functionSim_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

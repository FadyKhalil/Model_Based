/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LedSwitching.c
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

#include "LedSwitching.h"
#include "LedSwitching_private.h"

/* Block states (default storage) */
DW_LedSwitching_T LedSwitching_DW;

/* External inputs (root inport signals with default storage) */
ExtU_LedSwitching_T LedSwitching_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_LedSwitching_T LedSwitching_Y;

/* Real-time model */
static RT_MODEL_LedSwitching_T LedSwitching_M_;
RT_MODEL_LedSwitching_T *const LedSwitching_M = &LedSwitching_M_;

/* Model step function */
void LedSwitching_step(void)
{
  int32_T rtb_LedState;

  /* Chart: '<Root>/Chart' */
  /* Gateway: Chart */
  if (LedSwitching_DW.temporalCounter_i1 < 7U) {
    LedSwitching_DW.temporalCounter_i1++;
  }

  /* During: Chart */
  if (LedSwitching_DW.is_active_c2_LedSwitching == 0U) {
    /* Entry: Chart */
    LedSwitching_DW.is_active_c2_LedSwitching = 1U;

    /* Entry Internal: Chart */
    /* Transition: '<S1>:2' */
    LedSwitching_DW.temporalCounter_i1 = 0U;

    /* During 'Counter': '<S1>:1' */
  } else if (LedSwitching_DW.temporalCounter_i1 >= 5) {
    /* Outputs for Function Call SubSystem: '<Root>/Triggered Subsystem' */
    /* Chart: '<S2>/Chart' incorporates:
     *  Inport: '<Root>/Input'
     */
    /* Transition: '<S1>:3' */
    /* Event: '<S1>:4' */
    /* Gateway: Triggered
       Subsystem/Chart */
    /* During: Triggered
       Subsystem/Chart */
    /* Entry Internal: Triggered
       Subsystem/Chart */
    /* Transition: '<S3>:1' */
    /*  Switch_State */
    /* '<S3>:2:1' sf_internal_predicateOutput = SwitchState == 1; */
    if (LedSwitching_U.Input == 1.0) {
      /* Transition: '<S3>:2' */
      /* Transition: '<S3>:4' */
      /* '<S3>:4:1' LedState = 1; */
      rtb_LedState = 1;

      /* Transition: '<S3>:5' */
    } else {
      /* Transition: '<S3>:3' */
      /* '<S3>:3:1' LedState = 0; */
      rtb_LedState = 0;
    }

    /* End of Chart: '<S2>/Chart' */

    /* Chart: '<S2>/Chart1' */
    /* Transition: '<S3>:6' */
    /* Gateway: Triggered
       Subsystem/Chart1 */
    /* During: Triggered
       Subsystem/Chart1 */
    /* Entry Internal: Triggered
       Subsystem/Chart1 */
    /* Transition: '<S4>:1' */
    /*  Led_State */
    /* '<S4>:2:1' sf_internal_predicateOutput = Status == 1; */
    if (rtb_LedState == 1) {
      /* Outport: '<Root>/Output' */
      /* Transition: '<S4>:2' */
      /* Transition: '<S4>:4' */
      /* '<S4>:4:1' Led = 1; */
      LedSwitching_Y.Output = 1.0;

      /* Transition: '<S4>:5' */
    } else {
      /* Outport: '<Root>/Output' */
      /* Transition: '<S4>:3' */
      /* '<S4>:3:1' Led  = 0; */
      LedSwitching_Y.Output = 0.0;
    }

    /* End of Chart: '<S2>/Chart1' */
    /* End of Outputs for SubSystem: '<Root>/Triggered Subsystem' */
    /* Transition: '<S4>:6' */
    LedSwitching_DW.temporalCounter_i1 = 0U;
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void LedSwitching_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(LedSwitching_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&LedSwitching_DW, 0,
                sizeof(DW_LedSwitching_T));

  /* external inputs */
  LedSwitching_U.Input = 0.0;

  /* external outputs */
  LedSwitching_Y.Output = 0.0;
  LedSwitching_DW.temporalCounter_i1 = 0U;
  LedSwitching_DW.is_active_c2_LedSwitching = 0U;

  /* SystemInitialize for Chart: '<Root>/Chart' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem'
   */
  /* InitializeConditions for Outport: '<Root>/Output' incorporates:
   *  Chart: '<S2>/Chart1'
   */
  LedSwitching_Y.Output = 0.0;
}

/* Model terminate function */
void LedSwitching_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

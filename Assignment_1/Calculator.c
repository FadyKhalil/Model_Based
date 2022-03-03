/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Calculator.c
 *
 * Code generated for Simulink model 'Calculator'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Thu Mar  3 19:09:00 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Calculator.h"
#include "Calculator_private.h"

/* Block signals (default storage) */
B_Calculator_T Calculator_B;

/* External inputs (root inport signals with default storage) */
ExtU_Calculator_T Calculator_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Calculator_T Calculator_Y;

/* Real-time model */
static RT_MODEL_Calculator_T Calculator_M_;
RT_MODEL_Calculator_T *const Calculator_M = &Calculator_M_;

/* Model step function */
void Calculator_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Sum: '<Root>/Add'
   */
  Calculator_Y.Out1 = Calculator_U.Input + Calculator_U.Input1;

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Sum: '<Root>/Add1'
   */
  Calculator_Y.Out2 = (0.0 - Calculator_U.Input) - Calculator_U.Input1;

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Product: '<Root>/Divide'
   */
  Calculator_Y.Out3 = Calculator_U.Input * Calculator_U.Input1;

  /* If: '<Root>/If' incorporates:
   *  Inport: '<Root>/Input1'
   *  Inport: '<S1>/Input1'
   */
  if (Calculator_U.Input1 > 0.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    Calculator_B.Input1 = Calculator_U.Input1;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem' */
  }

  /* End of If: '<Root>/If' */

  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/Input'
   *  Product: '<Root>/Divide1'
   */
  Calculator_Y.Out4 = Calculator_U.Input / Calculator_B.Input1;
}

/* Model initialize function */
void Calculator_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Calculator_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &Calculator_B), 0,
                sizeof(B_Calculator_T));

  /* external inputs */
  (void)memset(&Calculator_U, 0, sizeof(ExtU_Calculator_T));

  /* external outputs */
  (void)memset(&Calculator_Y, 0, sizeof(ExtY_Calculator_T));
}

/* Model terminate function */
void Calculator_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Grading.c
 *
 * Code generated for Simulink model 'Grading'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Thu Mar  3 19:22:24 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Grading.h"
#include "Grading_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Grading_T Grading_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Grading_T Grading_Y;

/* Real-time model */
static RT_MODEL_Grading_T Grading_M_;
RT_MODEL_Grading_T *const Grading_M = &Grading_M_;

/* Model step function */
void Grading_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   */
  Grading_Y.Out1 = Grading_U.In1;
}

/* Model initialize function */
void Grading_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Grading_M, (NULL));

  /* external inputs */
  Grading_U.In1 = 0U;

  /* external outputs */
  Grading_Y.Out1 = 0U;
}

/* Model terminate function */
void Grading_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

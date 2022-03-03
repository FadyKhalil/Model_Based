/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TrafficLight.c
 *
 * Code generated for Simulink model 'TrafficLight'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Thu Mar  3 20:38:20 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TrafficLight.h"
#include "TrafficLight_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define TrafficLight_IN_Count          ((uint8_T)1U)
#define TrafficLight_IN_Green          ((uint8_T)1U)
#define TrafficLight_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define TrafficLight_IN_Red            ((uint8_T)2U)
#define TrafficLight_IN_Yellow         ((uint8_T)3U)
#define TrafficLight_IN_init           ((uint8_T)2U)

/* Block states (default storage) */
DW_TrafficLight_T TrafficLight_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_TrafficLight_T TrafficLight_Y;

/* Real-time model */
static RT_MODEL_TrafficLight_T TrafficLight_M_;
RT_MODEL_TrafficLight_T *const TrafficLight_M = &TrafficLight_M_;

/* Model step function */
void TrafficLight_step(void)
{
  /* Chart: '<Root>/Chart' */
  /* Gateway: Chart */
  if (TrafficLight_DW.temporalCounter_i1 < 3U) {
    TrafficLight_DW.temporalCounter_i1++;
  }

  /* During: Chart */
  if (TrafficLight_DW.is_active_c3_TrafficLight == 0U) {
    /* Entry: Chart */
    TrafficLight_DW.is_active_c3_TrafficLight = 1U;

    /* Outport: '<Root>/Output' */
    /* Entry Internal: Chart */
    /* Entry 'TrafficLight': '<S1>:9' */
    TrafficLight_Y.Output = 0.0;

    /* Outport: '<Root>/Output2' */
    TrafficLight_Y.Output2 = 0.0;

    /* Outport: '<Root>/Output1' */
    TrafficLight_Y.Output1 = 0.0;

    /* Entry Internal 'TrafficLight': '<S1>:9' */
    /* Transition: '<S1>:2' */
    TrafficLight_DW.is_TrafficLight = TrafficLight_IN_Red;

    /* Entry Internal 'Counter': '<S1>:16' */
    /* Transition: '<S1>:17' */
    TrafficLight_DW.is_Counter = TrafficLight_IN_init;
    TrafficLight_DW.temporalCounter_i1 = 0U;

    /* Entry 'init': '<S1>:12' */
    TrafficLight_DW.count = 0.0;
  } else {
    /* During 'TrafficLight': '<S1>:9' */
    switch (TrafficLight_DW.is_TrafficLight) {
     case TrafficLight_IN_Green:
      /* During 'Green': '<S1>:4' */
      if (TrafficLight_DW.count == 1.0) {
        /* Outport: '<Root>/Output1' */
        /* Transition: '<S1>:6' */
        /* Exit 'Green': '<S1>:4' */
        TrafficLight_Y.Output1 = 0.0;
        TrafficLight_DW.is_TrafficLight = TrafficLight_IN_Yellow;
      } else {
        /* Outport: '<Root>/Output1' */
        TrafficLight_Y.Output1 = 1.0;
      }
      break;

     case TrafficLight_IN_Red:
      /* During 'Red': '<S1>:1' */
      if (TrafficLight_DW.count == 1.0) {
        /* Outport: '<Root>/Output' */
        /* Transition: '<S1>:5' */
        /* Exit 'Red': '<S1>:1' */
        TrafficLight_Y.Output = 0.0;
        TrafficLight_DW.is_TrafficLight = TrafficLight_IN_Green;
      } else {
        /* Outport: '<Root>/Output' */
        TrafficLight_Y.Output = 1.0;
      }
      break;

     default:
      /* During 'Yellow': '<S1>:3' */
      if (TrafficLight_DW.count == 1.0) {
        /* Outport: '<Root>/Output2' */
        /* Transition: '<S1>:7' */
        /* Exit 'Yellow': '<S1>:3' */
        TrafficLight_Y.Output2 = 0.0;
        TrafficLight_DW.is_TrafficLight = TrafficLight_IN_Red;
      } else {
        /* Outport: '<Root>/Output2' */
        TrafficLight_Y.Output2 = 1.0;
      }
      break;
    }

    /* During 'Counter': '<S1>:16' */
    if (TrafficLight_DW.is_Counter == TrafficLight_IN_Count) {
      /* During 'Count': '<S1>:13' */
      if (TrafficLight_DW.temporalCounter_i1 >= 3) {
        /* Transition: '<S1>:14' */
        TrafficLight_DW.is_Counter = TrafficLight_IN_Count;
        TrafficLight_DW.temporalCounter_i1 = 0U;

        /* Entry 'Count': '<S1>:13' */
        TrafficLight_DW.count = 1.0;
      } else {
        TrafficLight_DW.count = 0.0;
      }

      /* During 'init': '<S1>:12' */
    } else if (TrafficLight_DW.temporalCounter_i1 >= 3) {
      /* Transition: '<S1>:15' */
      TrafficLight_DW.is_Counter = TrafficLight_IN_Count;
      TrafficLight_DW.temporalCounter_i1 = 0U;

      /* Entry 'Count': '<S1>:13' */
      TrafficLight_DW.count = 1.0;
    }
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void TrafficLight_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(TrafficLight_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&TrafficLight_DW, 0,
                sizeof(DW_TrafficLight_T));

  /* external outputs */
  (void)memset(&TrafficLight_Y, 0, sizeof(ExtY_TrafficLight_T));

  /* SystemInitialize for Chart: '<Root>/Chart' */
  TrafficLight_DW.is_Counter = TrafficLight_IN_NO_ACTIVE_CHILD;
  TrafficLight_DW.temporalCounter_i1 = 0U;
  TrafficLight_DW.is_TrafficLight = TrafficLight_IN_NO_ACTIVE_CHILD;
  TrafficLight_DW.is_active_c3_TrafficLight = 0U;
  TrafficLight_DW.count = 0.0;

  /* SystemInitialize for Outport: '<Root>/Output' incorporates:
   *  Chart: '<Root>/Chart'
   */
  TrafficLight_Y.Output = 0.0;

  /* SystemInitialize for Outport: '<Root>/Output1' incorporates:
   *  Chart: '<Root>/Chart'
   */
  TrafficLight_Y.Output1 = 0.0;

  /* SystemInitialize for Outport: '<Root>/Output2' incorporates:
   *  Chart: '<Root>/Chart'
   */
  TrafficLight_Y.Output2 = 0.0;
}

/* Model terminate function */
void TrafficLight_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

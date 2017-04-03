//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: hoffmannFollower.h
//
// Code generated for Simulink model 'hoffmannFollower'.
//
// Model version                  : 1.68
// Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
// C/C++ source code generated on : Tue Mar 28 23:17:25 2017
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_hoffmannFollower_h_
#define RTW_HEADER_hoffmannFollower_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#ifndef hoffmannFollower_COMMON_INCLUDES_
# define hoffmannFollower_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slros_initialize.h"
#endif                                 // hoffmannFollower_COMMON_INCLUDES_

#include "hoffmannFollower_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

// Block signals (auto storage)
typedef struct {
  real_T MultiportSwitch[903];         // '<S4>/Multiport Switch'
  creal_T r[301];
  real_T ys[301];                      // '<S4>/straight line'
  real_T xs[301];                      // '<S4>/straight line'
  SL_Bus_hoffmannFollower_nav_msgs_Odometry In1;// '<S11>/In1'
  SL_Bus_hoffmannFollower_nav_msgs_Odometry varargout_2;
  SL_Bus_hoffmannFollower_geometry_msgs_Twist BusAssignment;// '<Root>/Bus Assignment' 
} B_hoffmannFollower_T;

// Block states (auto storage) for system '<Root>'
typedef struct {
  void *SourceBlock_PWORK;             // '<S5>/SourceBlock'
  void *SinkBlock_PWORK;               // '<S3>/SinkBlock'
  robotics_slros_internal_block_T obj; // '<S3>/SinkBlock'
  robotics_slros_internal_blo_e_T obj_l;// '<S5>/SourceBlock'
} DW_hoffmannFollower_T;

// Parameters (auto storage)
struct P_hoffmannFollower_T_ {
  SL_Bus_hoffmannFollower_nav_msgs_Odometry Out1_Y0;// Computed Parameter: Out1_Y0
                                                    //  Referenced by: '<S11>/Out1'

  SL_Bus_hoffmannFollower_nav_msgs_Odometry Constant_Value;// Computed Parameter: Constant_Value
                                                           //  Referenced by: '<S5>/Constant'

  SL_Bus_hoffmannFollower_geometry_msgs_Twist Constant_Value_a;// Computed Parameter: Constant_Value_a
                                                               //  Referenced by: '<S1>/Constant'

  real_T k1_Value;                     // Expression: 0
                                       //  Referenced by: '<S2>/k1'

  real_T pathChoice_Value;             // Expression: 2
                                       //  Referenced by: '<S4>/pathChoice '

  real_T radius_Value;                 // Expression: 36.6
                                       //  Referenced by: '<S4>/radius'

  real_T startpoint_Value[2];          // Expression: [0 0]
                                       //  Referenced by: '<S4>/start point'

  real_T len_Value;                    // Expression: 36.6
                                       //  Referenced by: '<S4>/len'

  real_T heading_Value;                // Expression: 0
                                       //  Referenced by: '<S4>/heading'

  real_T refVelocity_Value;            // Expression: 3
                                       //  Referenced by: '<Root>/refVelocity'

  real_T Switch_Threshold;             // Expression: 4
                                       //  Referenced by: '<S2>/Switch'

  real_T k_Value;                      // Expression: .7
                                       //  Referenced by: '<S2>/k'

  real_T Gain_Gain;                    // Expression: -1
                                       //  Referenced by: '<S2>/Gain'

};

// Real-time Model Data Structure
struct tag_RTM_hoffmannFollower_T {
  const char_T *errorStatus;
};

// Block parameters (auto storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_hoffmannFollower_T hoffmannFollower_P;

#ifdef __cplusplus

}
#endif

// Block signals (auto storage)
extern B_hoffmannFollower_T hoffmannFollower_B;

// Block states (auto storage)
extern DW_hoffmannFollower_T hoffmannFollower_DW;

#ifdef __cplusplus

extern "C" {

#endif

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void hoffmannFollower_initialize(void);
  extern void hoffmannFollower_step(void);
  extern void hoffmannFollower_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_hoffmannFollower_T *const hoffmannFollower_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S2>/Scope' : Unused code path elimination


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'hoffmannFollower'
//  '<S1>'   : 'hoffmannFollower/Blank Message'
//  '<S2>'   : 'hoffmannFollower/Hoffmann Controller'
//  '<S3>'   : 'hoffmannFollower/Publish'
//  '<S4>'   : 'hoffmannFollower/Select desired path'
//  '<S5>'   : 'hoffmannFollower/Subscribe3'
//  '<S6>'   : 'hoffmannFollower/quaternion2heading'
//  '<S7>'   : 'hoffmannFollower/Hoffmann Controller/calculate delta'
//  '<S8>'   : 'hoffmannFollower/Hoffmann Controller/calculate e'
//  '<S9>'   : 'hoffmannFollower/Select desired path/circle centered'
//  '<S10>'  : 'hoffmannFollower/Select desired path/straight line'
//  '<S11>'  : 'hoffmannFollower/Subscribe3/Enabled Subsystem'
//  '<S12>'  : 'hoffmannFollower/quaternion2heading/Quaternions to Rotation Angles'
//  '<S13>'  : 'hoffmannFollower/quaternion2heading/Quaternions to Rotation Angles/Quaternion Normalize'
//  '<S14>'  : 'hoffmannFollower/quaternion2heading/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus'
//  '<S15>'  : 'hoffmannFollower/quaternion2heading/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'

#endif                                 // RTW_HEADER_hoffmannFollower_h_

//
// File trailer for generated code.
//
// [EOF]
//

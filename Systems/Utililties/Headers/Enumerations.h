//
// Created by Thom on 1/20/2023.
//


#ifndef SPENCER_ENUMERATIONS_H
#define SPENCER_ENUMERATIONS_H

namespace Utilities {

    #define Enumeration_As_String( enumeration ) #enumeration

    /**
    * These are enumerated for later use if I decide to move
    * away from string descriptions
    *
    * TODO: Remove if not helpful or switch to these and pass an enumeration in
    *
    */
    enum Body_Parts {
        left_eye,
        right_eye,
        head,
        neck,
        torso,
        hips,
        left_leg,
        right_leg,
        left_foot,
        right_foot,
        left_arm,
        right_arm,
        left_hand,
        right_hand,
        left_hand_thumb_finger,
        left_hand_pointer_finger,
        left_hand_middle_finger,
        left_hand_index_finger,
        left_hand_pinky,
        right_hand_thumb_finger,
        right_hand_pointer_finger,
        right_hand_middle_finger,
        right_hand_index_finger,
        right_hand_pinky
    };

    enum Enumerated_Joints {
        neck_joint, shoulder, knee, elbow, wrist, top_knuckle, middle_knuckle, bottom_knuckle, ankle, toes, chest, hip_joint
    };

    enum Enumerated_Logging_Level {
        Trace,
        Debug,
        Info,
        Warning,
        Error,
        Fatal
    };

    enum Enumerated_Motor_Axis {
        W, X, Y, Z
    };

}
#endif
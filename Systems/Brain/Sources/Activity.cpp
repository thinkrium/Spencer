//
// Created by Thom on 1/18/2023.
//

#include "Brain/Headers/Activity.h"
#include "Motion/Headers/Motion.h"


void Systems::Brain::Activity::Run( ) {

  Logging logger;
  logger.Info("Activating All Systems");
  Activate_Thinking();
  Activate_Vision();
  Activate_Motion();
}

void Systems::Brain::Activity::Activate_Vision() {
    Logging logger;
    logger.Info("Activating Vision System." );
    Systems::Vision vision;
}

void Systems::Brain::Activity::Activate_Motion() {
    Logging logger;
    logger.Info("Activating Motion System." );

    Systems::Body::Motion motion;
}

void Systems::Brain::Activity::Activate_Thinking() {
     Logging logger;
    logger.Info("Activating Thinking System." );


}

void Systems::Brain::Activity::Activate_Hearing() {
    Logging logger;
    logger.Info("Activating Hearing System." );

}

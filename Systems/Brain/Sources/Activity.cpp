//
// Created by Thom on 1/18/2023.
//

#include "Brain/Headers/Activity.h"



void Systems::Brain::Activity::Run( ) {
  cout << "Running" << endl;
  Activate_Thinking();
  Activate_Motion();
  Activate_Vision();
}

void Systems::Brain::Activity::Activate_Vision() {
    Systems::Vision vision;
}

void Systems::Brain::Activity::Activate_Motion() {
    Systems::Motion motion;
}

void Systems::Brain::Activity::Activate_Thinking() {

}

//
// Created by Thom on 1/18/2023.
//

#include "Brain/Headers/Activity.h"



void Systems::Brain::Activity::Run( ) {
  cout << "Running" << endl;
  Activate_Thinking();
  Activate_Vision();
  Activate_Motion();
}

void Systems::Brain::Activity::Activate_Vision() {
    cout << "Activating Vision System." << endl;

    Systems::Vision vision;
}

void Systems::Brain::Activity::Activate_Motion() {
    cout << "Activating Motion System." << endl;
    Systems::Motion motion;
}

void Systems::Brain::Activity::Activate_Thinking() {
    cout << "Activating Thinking System." << endl;

}

void Systems::Brain::Activity::Activate_Hearing() {
    cout << "Activating Thinking System." << endl;

}

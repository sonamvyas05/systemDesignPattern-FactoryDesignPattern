#ifndef COURSEFACTORY_H
#define COURSEFACTORY_H
#include "course.h"

class CourseFactory{
    public:
    //  virtual ~CourseFactory() {}
     virtual Course* createCourse() const = 0; 
};



#endif //COURSEFACTORY_H


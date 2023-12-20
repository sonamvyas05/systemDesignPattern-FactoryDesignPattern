#ifndef HLDFACTORY
#define HLDFACTORY

#include "CourseFactory.h"


class HldFactory : public CourseFactory{
    public:
       Course* createCourse() const ;

//        ~CourseFactory();
 };

#endif //HLDFACTORY

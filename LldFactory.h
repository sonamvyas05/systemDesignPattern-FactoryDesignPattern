#ifndef LLDFACTORY
#define LLDFACTORY

#include "CourseFactory.h"


class LldFactory : public CourseFactory{
    public:
       Course* createCourse() const ;
};

#endif //LLDFACTORY

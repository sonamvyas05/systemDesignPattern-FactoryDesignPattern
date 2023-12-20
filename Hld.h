#ifndef HLD_H
#define HLD_H

#include "course.h"

class Hld : public Course{
    public:
    //   ~Course();
      std::string getName() const;
      std::string getDescripation() const;

};





#endif //HLD_H
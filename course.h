#ifndef COURSE_H
#define COURSE_H

#include<string>

class Course{
    public:
    //   virtual ~Course() {}
      virtual std::string getName() const = 0;
      virtual std::string getDescripation() const = 0;

};



#endif // COURSE_H
#include "Hldfactory.h"
#include "Hld.h"

Course* HldFactory :: createCourse() const {
    return new Hld() ;
}
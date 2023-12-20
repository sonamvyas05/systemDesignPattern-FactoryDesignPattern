#include "Lldfactory.h"
#include "Lld.h"

Course* LldFactory :: createCourse() const {
    return new Lld() ;
}
#include <iostream>
#include "LldFactory.h"
#include "HldFactory.h"

void describeCourse(const CourseFactory& factory) {
    Course* course = factory.createCourse();
    std::cout << "Course Name: " << course->getName() << std::endl;
    std::cout << "Description: " << course->getDescripation() << std::endl;
    // 
}

int main() {
    LldFactory lld;
    HldFactory hld;

    std::cout << "LLD Course Details:" << std::endl;
    describeCourse(lld);

    std::cout << "\nHLD Course Details:" << std::endl;
    describeCourse(hld);

    return 0;
}
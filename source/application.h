#ifndef APPLICATION_H
#define APPLICATION_H

#include <string_view>
#include <vector>

struct University
{
    // ...
};

struct Course
{
    // ...
};

struct StudentData
{
    // ...
};

std::vector<University> parseFile(std::string_view fileName);

std::vector<Course> computeRequired(const std::vector<Course>& required,
                                    const std::vector<Course>& taken);

std::vector<Course> findOverlap(const std::vector<University>& unis);

StudentData acceptCompletedCourses();

#endif  // APPLICATION_H
#include "application.h"

/* Determines the remaining required courses that a student must take.

    Parameters:
        required - specifies all required courses of a given uni
        taken - the courses a student has taken/is enrolled in
*/
std::vector<Course> computeRequired(const std::vector<Course>& required,
                                    const std::vector<Course>& taken)
{
    std::vector<Course> remaining_courses;

    for (int i = 0; i < required.size(); i++)
    {
        if (std::find(taken.begin(), taken.end(), required[i]) == taken.end())
        {
            remaining_courses.push_back(required[i]);
        }
    }

    return remaining_courses;
}
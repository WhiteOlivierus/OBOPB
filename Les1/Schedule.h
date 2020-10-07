class Schedule
{
private:
    // Name of the schedule owner
    char *name;
    // Name of the schedule owner
    char *scheduleOwner;
    // This is a map that holds all courses in this schedule
    std::map<char *, Course> courses;

public:
    // You can overload this many times as needed
    Schedule(char *name, char *courseOwner);

    // Add a course to the schedule
    bool AddCourse(Course course);
    bool AddCourse(char *name, char *courseOwner);

    // Get all the courses that are in this schedule
    std::vector<Course> GetCourses();

    // This will reroute to the course object and get the timeslots for that course
    std::vector<TimeSlot> GetCourseTimeSlots(char *course);

    // This will reroute to the course object and get the timeslots for that course
    // Here you could give back the first next courses duration
    unsigned int GetCourseDuration(char *course);
    // And here you could look for a specific timeslot
    unsigned int GetCourseDuration(char *course, TimeSlot timeSlot);
};

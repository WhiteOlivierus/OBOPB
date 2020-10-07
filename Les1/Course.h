class Course
{
private:
    // This will hold the name of the course
    char *name;
    // This will hold the name of the course owner
    char *courseOwner;
    // This will hold a list of all the moments in time this course will be given
    std::vector<TimeSlot> timeSlots;

public:
    // You can overload this many times as needed
    Course(char *name, char *courseOwner);

    // Here you can add a extra timeslot for the course
    bool AddTimeSlot(TimeSlot timeSlot);
    bool AddTimeSlot(unsigned int startDateTime, unsigned int endDateTime);
    bool AddTimeSlot(char *startDateTime, char *endDateTime);

    // This is a function that returns the timeslots that are added
    // You could make a couple of overloaded versions where you can give a start date and a end date
    std::vector<TimeSlot> GetTimeSlots();
};

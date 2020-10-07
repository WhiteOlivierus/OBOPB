class TimeSlot
{
private:
    // This will hold the DateTime in millis for when the course starts
    unsigned int startDateTime;
    // This will hold the DateTime in millis for when the course ends
    unsigned int endDateTime;

public:
    // Here is where you created the course time object with a start and end datetime
    //
    // This version does no conversion
    TimeSlot(unsigned int startDateTime, unsigned int endDateTime);
    // This version will take a writen out datetime and convert it to millis
    TimeSlot(char *startDateTime, char *endDateTime);

    // This will return the amount of time between start and end
    unsigned int GetDuration();
};

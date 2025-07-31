#include "timestamp.h"

timestamp::timestamp()
{
    seconds = minutes = hours = 0;
}

timestamp::timestamp(int s, int m, int h)
{
    seconds = s;
    minutes = m;
    hours = h;
}

void timestamp::print()
{
    cout << (seconds < 10 ? "0": "") << seconds << ":"
         << (minutes < 10 ? "0": "") << minutes << ":"
         << (hours < 10 ? "0": "") << hours << endl;
}

bool timestamp::operator < (const timestamp& other) const
{
    if(hours != other.hours)
        return hours < other.hours;
    if(minutes != other.minutes)
        return minutes < other.minutes;
    return seconds < other.seconds;
}

bool timestamp::operator == (const timestamp& other) const
{
    return ( hours == other.hours
             && minutes == other.minutes
             && seconds == other.seconds);
}

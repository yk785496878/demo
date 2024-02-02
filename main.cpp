#include <iostream>
#include <Poco/DateTimeFormatter.h>
#include <Poco/DateTimeFormat.h>

int main(){
    std::cout << "Hello World" << std::endl;

    Poco::DateTime now;
    std::string formattedTime = Poco::DateTimeFormatter::format(now, Poco::DateTimeFormat::SORTABLE_FORMAT);
    std::cout << "Current time: " << formattedTime << std::endl;
    return 0;
}
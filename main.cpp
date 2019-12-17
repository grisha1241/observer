#include <QCoreApplication>
#include <windows.h>
#include "subject.h"
#include "weatherdata.h"
#include "currentconditionsdisplay.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    WeatherData *weatherData = new WeatherData();
    CurrentConditionsDisplay *display = new
            CurrentConditionsDisplay(weatherData);

    weatherData->setMeasurements(1,2,3);
    Sleep(2000);
    weatherData->setMeasurements(4,5,6);
    Sleep(2000);
    weatherData->setMeasurements(7,8,9);
    Sleep(2000);
    weatherData->setMeasurements(10,11,12);

    return a.exec();
}

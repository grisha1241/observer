#include "weatherdata.h"

WeatherData::WeatherData()
{
    observers = new QList<Observer*>();
}


void WeatherData::registerObserver(Observer *o) {
    observers->append(o);
}


void WeatherData::removeObserver(Observer *o) {

    int i = observers->indexOf(o);

    if (i >= 0) {
        observers->removeAt(i);
    }
}


void WeatherData::notifyObservers() {
    for (int i = 0; i < observers->size(); i++) {
        Observer *observer = observers->at(i);
        observer->update(temperature,humidity,pressure);
    }
}


void WeatherData::measurementChanged() {
    notifyObservers();
}

void WeatherData::setMeasurements(float temp, float humidity, float pressure) {
    this->temperature = temp;
    this->humidity = humidity;
    this->pressure;
    measurementChanged();
}

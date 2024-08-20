// Vitals.h
#ifndef VITALS_H
#define VITALS_H

class Vitals {
private:
    double temperature;
    int pulseRate;
    int respRate;
    double bloodPressureSys;
    double bloodPressureDys;

public:
    Vitals() : temperature(0.0), pulseRate(0), respRate(0), bloodPressureSys(0.0), bloodPressureDys(0.0) {}

    // Copy Constructor
    Vitals(const Vitals& other)
        : temperature(other.temperature), pulseRate(other.pulseRate), respRate(other.respRate),
        bloodPressureSys(other.bloodPressureSys), bloodPressureDys(other.bloodPressureDys) {}

    // Assignment Operator
    Vitals& operator=(const Vitals& other) {
        if (this != &other) { // Self-assignment check
            temperature = other.temperature;
            pulseRate = other.pulseRate;
            respRate = other.respRate;
            bloodPressureSys = other.bloodPressureSys;
            bloodPressureDys = other.bloodPressureDys;
        }
        return *this;
    }

    // Getter and Setter methods
    double getTemperature() const { return temperature; }
    void setTemperature(double temp) { temperature = temp; }
    int getPulseRate() const { return pulseRate; }
    void setPulseRate(int pulse) { pulseRate = pulse; }
    int getRespRate() const { return respRate; }
    void setRespRate(int resp) { respRate = resp; }
    double getBloodPressureSys() const { return bloodPressureSys; }
    void setBloodPressureSys(double bpSys) { bloodPressureSys = bpSys; }
    double getBloodPressureDys() const { return bloodPressureDys; }
    void setBloodPressureDys(double bpDys) { bloodPressureDys = bpDys; }
};

#endif // VITALS_H

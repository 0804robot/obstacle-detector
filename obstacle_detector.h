#ifndef OBSTACLE_DETECTOR_H
#define OBSTACLE_DETECTOR_H


#include <Arduino.h>

class Obstacle
{
private:
    float getDistance(int trig, int echo);
    // ULtrasonic pins
    int trigPin_front;
    int trigPin_right;
    int echoPin_front;
    int echoPin_right;
    int trigPin_left;
    int echoPin_left;
public:
    Obstacle(int trigPin_1, int echoPin_1, int trigPin_2, int echoPin_2, int trigPin_3, int echoPin_3);
    // initialises ultrasonic pins
    void init(void);
    // returns distance from the front facing ultrasonic sensor
    float getDistance_front(void);
    // returns distance from the side facing ultrasonic sensor
    float getDistance_right(void);
    float getDistance_left(void);
    
    ~Obstacle();
};

#endif
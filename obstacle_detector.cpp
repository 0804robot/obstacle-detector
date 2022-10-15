#include <obstacle_detector.h>



Obstacle::Obstacle(int trigPin_1, int echoPin_1, int trigPin_2, int echoPin_2,int trigPin_3,int echoPin_3){
    trigPin_front = trigPin_1;
    echoPin_front = echoPin_1;
    trigPin_right = trigPin_2;
    echoPin_right = echoPin_2;
    trigPin_left = trigPin_3;
    echoPin_left = echoPin_3;


}
void Obstacle::init(){
    pinMode(trigPin_front, OUTPUT);
    pinMode(trigPin_right, OUTPUT);
    pinMode(trigPin_left OUTPUT);
    pinMode(echoPin_front, INPUT);
    pinMode(echoPin_right, INPUT);
     pinMode(echoPin_left, INPUT);
    
}
float Obstacle::getDistance(int trig,int echo ){
     // eliminate unknown state
    digitalWrite(trig, LOW);
    delayMicroseconds(2);
    // sending pulse
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    // switching off pulse
    digitalWrite(trig, LOW);
    // reading pulse width and converting to distance
    float duration = pulseIn(echo, HIGH);
    return duration * 0.034 / 2;
}
float Obstacle::getDistance_front()
{
    return getDistance(trigPin_front, echoPin_front);
}
float Obstacle::getDistance_right()
{
    return getDistance(trigPin_right, echoPin_right);
}
float Obstacle::getDistance_left()
{
    return getDistance(trigPin_left, echoPin_left);
}
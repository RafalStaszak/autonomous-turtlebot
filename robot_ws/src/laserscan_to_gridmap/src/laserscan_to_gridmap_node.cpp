#include "ros/ros.h"
#include "std_msgs/String.h"
#include "sensor_msgs/LaserScan.h"
#include <iostream>

void processLaserScan(const sensor_msgs::LaserScan::ConstPtr& scan){
    std::cout<<"Scan fetched"<<std::endl;
}

int main(int argc, char** argv) {
    ros::init(argc, argv, "laserscan_to_gridmap");
    ros::NodeHandle nh;
    ros::Subscriber scanSub;
    scanSub=nh.subscribe<sensor_msgs::LaserScan>("/laserscan",1000,processLaserScan);
    ros::spin();
	return 0;
}

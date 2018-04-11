# autonomous-turtlebot
Implementation of collision avoidance algorithm using ROS.

## How to start

In order to run this application you must follow these steps:

* Build the whole workspace by executing **catkin_make** command
* Run **source devel/setup.bash** command
* Run **roslaunch turtlebot_gazebo turtlebot_world.launch**

If you want to get an occupancy map built by Hector Slam you should do the following:
* Run **apt-get install ros-kinetic-hector-slam** command
* Run **apt-get install ros-kinetic-laser-scan-matcher** command
* Run **roslaunch turtlebot_gazebo scanmatcher.launch**
* Run **roslaunch turtlebot_gazebo hector_mapping.launch**
* Run **roslaunch turtlebot_rviz_launchers view_robot.launch**



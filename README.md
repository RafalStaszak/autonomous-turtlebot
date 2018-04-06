# autonomous-turtlebot
Implementation of collision avoidance algorithm using ROS.

##How to start

In order to run this application you must follow these steps:
'''
* Build the whole workspace by executing **catkin_make** command
* Run **source devel/setup.bash command**
* Run **export TURTLEBOT_3D_SENSOR="hokuyo"**
* Run **roslaunch turtlebot_gazebo turtlebot_world.launch**
* Run **rosrun laserscan_to_gridmap laserscan_to_gridmap_node**
'''

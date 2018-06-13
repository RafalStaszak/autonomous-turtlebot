# autonomous-turtlebot
This project contains a base for simulating the workspace and workflow of turtlebot mobile platform for navigating tasks.
The simulated robot is equipped with Hokuyo laser scanner which can be fully customized. The robot uses Hector SLAM for building 2D representation of an environment. The robot can be controlled either manually or automatically using standard move_base planner. Artifical environment is provided by Gazebo. All available ros topics can be easily shown in Rviz.

![Screenshot](images/rviz.png)
![Screenshot](images/gazebo.png)

## How to start

In order to run this application you must follow these steps:

* Build the whole workspace by executing **catkin_make** command
* Run **source devel/setup.bash** command
* Run **roslaunch turtlebot_gazebo turtlebot_world.launch**

If you want to get an occupancy map built by Hector Slam you should do the following:
* Run **apt-get install ros-kinetic-hector-slam** 
* Run **roslaunch turtlebot_gazebo scanmatcher.launch**
* Run **roslaunch turtlebot_gazebo hector_mapping.launch**

### How to change map

Gazebo map file can be swapped in **turtlebot_world.launch** file by providing a new path for **arg name="world_file"**

### How to change position of Hokuyo

Position of Hokuyo laser scanner can be changed in **turtlebot/turtlebot_description/urdf/sensors/hokuyo.urdf.xacro** file

### How to change specification of Hokuyo

Technical description of the laser scanner can be changed in **turtlebot/turtlebot_description/urdf/turtlebot_gazebo.urdf.xacro** file




# Project1-Gazebo

This project aims to create a simulation world for robot path planning and navigation using ROS and C++.

Gazebo Environment Building
The building is a single-floor structure with enough space for robots to navigate. It is detailed and incorporates multiple features and colors. The building file is stored in the model directory.

![image](https://github.com/Bebil-P/Project1-Gazebo/assets/109389468/41e76172-10a0-4575-86c0-5f17dfd11b2a)

Note: Building a larger world would not be recomended (more on this later)

## Robot Model:

The robot model is a designed wheeled robot created using the model editor tool in Gazebo. The robot model file is stored in the model directory. The model links are connected through revolute joints.

The following image shows a wireframe model with joints, which is essential for debugging and beneficial for highlighting problems in the model design. To view the wireframe and joints in Gazebo, go to the View menu and select the Wireframe and Joints options.

![image](https://github.com/Bebil-P/Project1-Gazebo/assets/109389468/ff5d6f61-ff8e-4b84-ac85-14e25cfe6590)


## Gazebo World:

The Gazebo world includes the building structure created using the building editor tool, two instances of the robot model, and features imported from the Gazebo online library. The world file is stored in the world directory.
To learn how to import CAD models from SolidWorks into Gazebo, you can follow this tutorial: Importing CAD Models from SolidWorks.

## World Plugin:

The world plugin is a C++ plugin that displays a welcome message. It is stored in the script directory. Additionally, there is a CMakeLists.txt file located in the main project directory.
# rosparam_ex

## how to setup
```
mkdir catkin_ws
pushd catkin_ws
mkdir src
pushd src
git clone https://github.com/umaumax/rosparam_ex.git
popd
catkin_make
popd
```

## how to run
```
roslaunch rosparam_ex rosparam_ex.launch --screen
```

## memo
* `rosparam`にはyaml形式で記述可能
  * `param`と同じnamespaceとして利用される

## FYI
* [Arrays Ros Launch File \- ROS Answers: Open Source Q&A Forum]( https://answers.ros.org/question/206146/arrays-ros-launch-file/ )

# rosparam_ex

## how to setup
``` bash
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
``` bash
roslaunch rosparam_ex rosparam_ex.launch --screen
```

### output

`<rosparam>`
``` log
[ INFO] [1575419614.748039932]: int <- number:OK
[ERROR] [1575419614.748422724]: int <- text:NG
[ERROR] [1575419614.748752193]: int <- number_array:NG
[ERROR] [1575419614.749154579]: int <- text_array:NG
[ERROR] [1575419614.749480364]: std::string <- number:NG
[ INFO] [1575419614.749827075]: std::string <- text:OK
[ERROR] [1575419614.750290466]: std::string <- number_array:NG
[ERROR] [1575419614.750652072]: std::string <- text_array:NG
[ERROR] [1575419614.751023925]: std::vector<int> <- number:NG
[ERROR] [1575419614.751353569]: std::vector<int> <- text:NG
[ INFO] [1575419614.751766256]: std::vector<int> <- number_array:OK
[ERROR] [1575419614.752163229]: std::vector<int> <- text_array:NG
[ERROR] [1575419614.752520984]: std::vector<std::string> <- number:NG
[ERROR] [1575419614.752864091]: std::vector<std::string> <- text:NG
[ERROR] [1575419614.753189179]: std::vector<std::string> <- number_array:NG
[ INFO] [1575419614.753544482]: std::vector<std::string> <- text_array:OK
```

`<param>`
``` log
[ INFO] [1575419655.577463987]: int <- number:OK
[ERROR] [1575419655.577889615]: int <- text:NG
[ERROR] [1575419655.578222737]: int <- number_array:NG
[ERROR] [1575419655.578601153]: int <- text_array:NG
[ERROR] [1575419655.578981401]: std::string <- number:NG
[ INFO] [1575419655.579347027]: std::string <- text:OK
[ INFO] [1575419655.579715360]: std::string <- number_array:OK
[ INFO] [1575419655.580042697]: std::string <- text_array:OK
[ERROR] [1575419655.580393229]: std::vector<int> <- number:NG
[ERROR] [1575419655.580692807]: std::vector<int> <- text:NG
[ERROR] [1575419655.581011659]: std::vector<int> <- number_array:NG
[ERROR] [1575419655.581347711]: std::vector<int> <- text_array:NG
[ERROR] [1575419655.581686490]: std::vector<std::string> <- number:NG
[ERROR] [1575419655.582001099]: std::vector<std::string> <- text:NG
[ERROR] [1575419655.582326286]: std::vector<std::string> <- number_array:NG
[ERROR] [1575419655.582633454]: std::vector<std::string> <- text_array:NG
```

## memo
* `rosparam`にはyaml形式で記述可能
  * `param`と同じnamespaceとして利用される

## FYI
* [Arrays Ros Launch File \- ROS Answers: Open Source Q&A Forum]( https://answers.ros.org/question/206146/arrays-ros-launch-file/ )
* [roscpp: ros::NodeHandle Class Reference]( http://docs.ros.org/indigo/api/roscpp/html/classros_1_1NodeHandle.html#a8b5db588e675cf3e360da65bae6a55e4 )

#include <vector>
#include <string>

#include "ros/console.h"
#include "ros/ros.h"

int main(int argc, char** argv) {
  ros::init(argc, argv, "rosparam_ex");
  ros::NodeHandle n;

  int number;
  std::string text;
  std::vector<std::string> text_array;
  std::vector<int> number_array;

  constexpr auto check_with_log = [](const std::string& text, bool ret) {
    ROS_ERROR_STREAM_COND(!ret, text << ":NG");
    ROS_INFO_STREAM_COND(ret, text << ":OK");
  };

  // clang-format off
  check_with_log("int <- number",       n.getParam("/rosparam_ex/number",       number));
  check_with_log("int <- text",         n.getParam("/rosparam_ex/text",         number));
  check_with_log("int <- number_array", n.getParam("/rosparam_ex/number_array", number));
  check_with_log("int <- text_array",   n.getParam("/rosparam_ex/text_array",   number));

  check_with_log("std::string <- number",       n.getParam("/rosparam_ex/number",       text));
  check_with_log("std::string <- text",         n.getParam("/rosparam_ex/text",         text));
  check_with_log("std::string <- number_array", n.getParam("/rosparam_ex/number_array", text));
  check_with_log("std::string <- text_array",   n.getParam("/rosparam_ex/text_array",   text));

  check_with_log("std::vector<int> <- number",       n.getParam("/rosparam_ex/number",       number_array));
  check_with_log("std::vector<int> <- text",         n.getParam("/rosparam_ex/text",         number_array));
  check_with_log("std::vector<int> <- number_array", n.getParam("/rosparam_ex/number_array", number_array));
  check_with_log("std::vector<int> <- text_array",   n.getParam("/rosparam_ex/text_array",   number_array));

  check_with_log("std::vector<std::string> <- number",       n.getParam("/rosparam_ex/number",       text_array));
  check_with_log("std::vector<std::string> <- text",         n.getParam("/rosparam_ex/text",         text_array));
  check_with_log("std::vector<std::string> <- number_array", n.getParam("/rosparam_ex/number_array", text_array));
  check_with_log("std::vector<std::string> <- text_array",   n.getParam("/rosparam_ex/text_array",   text_array));
  // clang-format on
  return 0;
}

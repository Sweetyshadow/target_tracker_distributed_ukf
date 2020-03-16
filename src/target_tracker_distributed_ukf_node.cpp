//
// Created by glawless on 23.05.17.
//

#include <target_tracker_distributed_ukf/DistributedUKF3D.h>
// #include <target_tracker_distributed_ukf/selfUKF3D.h>

int main(int argc, char* argv[]){

  ros::init(argc, argv, "target_tracker_ukf");
  target_tracker_distributed_ukf::DistributedUKF3D tracker;
  // target_tracker_self_ukf::selfUKF3D tracker_self;
  ros::spin();

  return EXIT_SUCCESS;
}

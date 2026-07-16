# Leg-Length Scaling in Galloping Quadrupedal Robots
## Video
https://github.com/user-attachments/assets/39a2c1fa-ac84-47f5-ab77-56e17a2e829e

## Overview
This repository contains the code used to formulate a nonlinear programming (NLP) problem designed to identify different leg-scaling configurations for the A1 quadrupedal robot using a galloping gait. The optimization code leverages the Fast Robot Optimization and Simulation (FROST) toolkit (https://github.com/ayonga/frost-dev). The optimization code used in this project (which includes the FROST framework) is available at:

**optimization:** https://anonymous.4open.science/r/LegLength_Scaling_for_QuadrupedalRobots-807B/README.md

Additionally, this repository conduct simulation tests of the A1 robot in the Gazebo environment, which employs a Quadratic Programming (QP)-based locomotion controller. The considered scaling cases are: nominal leg length(Repository:norminal); uniform leg scaling with a proportional factor of 0.50(Repository:scale0.50)' uniform leg scaling with a proportional factor of 0.75(Repository:scale0.75); uniform leg scaling with a proportional factor of 1.25(Repository:scale1.25); axial elongation scaling with a factor of 0.75(Repository:scale0.75AE); axial elongation scaling with a factor of 1.25(Repository:scale1.25AE); and axial elongation scaling with a factor of 1.50(Repository:scale1.50AE) 

*All scaling cases are provided in the following repositories:*

**nominal:** https://anonymous.4open.science/r/LegLength_Scaling_for_QuadrupedalRobots-F2D0/README.md

**scale0.50:** https://anonymous.4open.science/r/LegLength_Scaling_for_QuadrupedalRobots-4372/README.md

**scale0.75:** https://anonymous.4open.science/r/LegLength_Scaling_for_QuadrupedalRobots-2200/README.md

**scale1.25:** https://anonymous.4open.science/r/LegLength_Scaling_for_QuadrupedalRobots-710A/README.md

**scale0.75AE:** https://anonymous.4open.science/r/LegLength_Scaling_for_QuadrupedalRobots-186E/README.md

**scale1.25AE:** https://anonymous.4open.science/r/LegLength_Scaling_for_QuadrupedalRobots-4EF0/README.md

**scale1.50AE:** https://anonymous.4open.science/r/LegLength_Scaling_for_QuadrupedalRobots-B5A2/README.md

Furthermore, this repository includes simulation experiments for the Go1 robot using a locomotion controller trained with reinforcement learning in the CAJun framework ([https://github.com/yxyang/cajun/](https://github.com/yxyang/cajun/)). The experiments evaluate the effect of leg-length scaling under three configurations: nominal leg length, uniform scaling with a factor of 0.75, and uniform scaling with a factor of 1.25.

**RL:** https://anonymous.4open.science/r/LegLength_Scaling_for_QuadrupedalRobots-DD04/README.md

*This is research code—subject to frequent updates—and is provided without any warranty regarding its fitness for any particular purpose.
**The source code is released under a BSD 3-Clause license.

## Publications
This work has been submitted to the IEEE/RSJ International Conference on Intelligent Robots and Systems (IROS 2026).

## Optimization Requirements
### Environment
To use this code, you need MATLAB R2019b and Wolfram Mathematica 12.1.

## Usage
1. Follow the installation instructions for the FROST framework: https://github.com/ayonga/frost-dev

2. Download the optimization package (this already includes the FROST framework).

3. Navigate to the `A1_Gait/TGallopingG2` folder and run the main script `TG2` section by section.

## A1 Simulation Requirements
### Environment
We recommend that users run this project in Ubuntu 18.04 with ROS melodic or 20.04 with ROS noetic.

### Dependencies
Please place the three packages, unitree_guide, unitree_ros, and unitree_ros_to_real in our repository in a ROS workspace’s source directory.

## build
Open a terminal and switch the directory to the ros workspace containing unitree_guide, then run the following command to build the project:
```
catkin_make
```

## Running the Simulation

### 1. Source the workspace

From the workspace directory, run:

```bash
source ./devel/setup.bash
```

### 2. Launch the Gazebo simulation

Launch Gazebo and specify the desired robot profile:

```bash
roslaunch unitree_guide gazeboSim.launch robot_profile:=<profile_name>
```

Available robot profiles:

| Profile        |
| -------------- |
| `Nominal`      |
| `scale_0.5`    |
| `scale_0.75`   |
| `scale_1.25`   |
| `scale_0.75AE` |
| `scale_1.25AE` |
| `scale_1.5AE`  |

For example:

```bash
roslaunch unitree_guide gazeboSim.launch robot_profile:=scale_0.75
```

### 3. Start the controller

Open a **new terminal**, navigate to the **same workspace**, and source the workspace again:

```bash
source ./devel/setup.bash
```

Then start the controller:

```bash
./devel/lib/unitree_guide/junior_ctrl
```

> **Note**
>
> Always launch Gazebo **before** starting the controller. The controller automatically reads the selected `robot_profile` from the ROS parameter server, so the simulation model and controller will use the same robot configuration.

## Launch Sequence

1. Source the workspace.
2. Launch Gazebo with the desired `robot_profile`.
3. Open a second terminal.
4. Source the workspace again.
5. Start `junior_ctrl`.

## usage
After starting the controller,  the robot will lie on the ground of the simulator, then press the '2' key on the keyboard to switch the robot's finite state machine (FSM) from **Passive**(initial state) to **FixedStand**.  

Then press the ‘6’ key to switch the FSM from **FixedStand** to **Galloping_G2**,  which corresponds to the Galloping Gait with two fly phase. The robot will accelerate itself. The robot will accelerate itself. (If there is no response, you need to click on the terminal opened to start the controller and then repeat the previous operation) 

Press the '2' to return to the **FixedStand**. The program automatically creates a plot including front/hip position, joint angle, foot position, ground reaction force, motor torque, etc. After you close all the figures, you will return to the **FixedStand**.

## Go1 Simulation Requirements
### Environment

1. Create a new virtual environment under Python 3.6, 3.7, 3.8 (3.8 recommended).

### Dependencies

Please place the three packages, unitree_guide, unitree_ros, and unitree_ros_to_real in our repository in a ROS workspace’s source directory.

4. Install `rsl_rl` (adapted PPO implementation)
    ```bash
    cd rsl_rl && pip install -e .
    ```

5. Lastly, build and install the interface to Unitree's Go1 SDK. The Unitree [repo](https://github.com/unitreerobotics/unitree_legged_sdk) has been releasing new SDK versions. For convenience, we have included the version that we used in `third_party/unitree_legged_sdk`.

   * First, make sure the required packages are installed, following Unitree's [guide](https://github.com/unitreerobotics/unitree_legged_sdk). Most nostably, please make sure to install `Boost` and `LCM`:

   ```bash
   sudo apt install libboost-all-dev liblcm-dev
   ```

   * Then, go to `third_party/go1_sdk` and create a build folder:
   ```bash
   cd third_party/go1_sdk
   mkdir build && cd build
   ```

   Now, build the libraries and move them to the main directory by running:
   ```bash
   cmake ..
   make
   mv go1_interface* ../../..
   ```

## Run

### Example checkpoints:
```bash
    # 75%
    python -m src.agents.ppo.eval_cot7 --config=src/agents/ppo/configs/g2_transverse_go1_75.py --logdir=example/

    # baseline
    python -m src.agents.ppo.eval_cot7 --config=src/agents/ppo/configs/g2_transverse_go1.py --logdir=example/

    # 125%
    python -m src.agents.ppo.eval_cot7 --config=src/agents/ppo/configs/g2_transverse_go1_125.py --logdir=example/
```

### Train Policy:

```bash
    # 75%
    python -m src.agents.ppo.train --config=src/agents/ppo/configs/g2_transverse_go1_75.py --logdir=logs/

    # baseline%
    python -m src.agents.ppo.train --config=src/agents/ppo/configs/g2_transverse_go1.py --logdir=logs/

    # 125%
    python -m src.agents.ppo.train --config=src/agents/ppo/configs/g2_transverse_go1_125.py --logdir=logs/

```

### Evaluate:
1. First collect data
```bash
    python -m src.agents.ppo.eval_cot7 --num_envs=1 --use_gpu=True --use_real_robot=False --show_gui=True --logdir=logs/g2_transverse_go1/2026_03_08_19_16_18

    # OR with the --record_video flag

    python -m src.agents.ppo.eval_cot7 --num_envs=1 --use_gpu=True --use_real_robot=False --show_gui=True --record_video --logdir=logs/g2_transverse_go1/2026_03_08_19_16_18
```

2. Second, evaluate data frame by frame

    After running eval, data is saved to `logs/g1_transverse<robot_name>/detailed_<uuid>`. Copy paste the `detailed_<uuid>` to the relevant folder in `DataViz/robots/<correct_robot>/data/*`

    Then run:
    ```bash
    cd DataViz
    python ./eval_modular.py

    ```
    Note that the python version andd requirements are different than the training env, so you need to use pyenv(or something similar) to run eval  

# Note
Feel free to raise an issue ~ <br>

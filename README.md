
# CPU Scheduling Simulator

This application is a **CPU Scheduling Simulator** implemented in C++. It allows users to simulate and analyze different CPU scheduling algorithms. The program calculates key metrics such as **waiting time, turnaround time, and completion time** for each process.


<img width="1473" height="706" alt="image" src="https://github.com/user-attachments/assets/eea46f8d-b801-446b-adb8-f7adddb4168a" />



## Features

* Supports multiple **CPU scheduling algorithms**:

  * **First-Come, First-Served (FCFS)**
  * **Shortest Job First (SJF)** – preemptive and non-preemptive
  * **Priority Scheduling** – preemptive and non-preemptive
* Reads process information from input files and writes results to output files.
* Calculates and displays **waiting time (WT), turnaround time (TAT), and completion time**.
* Handles processes with **arrival times, burst times, and priorities**.
* Provides sorted views of processes by arrival time, burst time, or priority for analysis.
* Suitable for educational purposes to **learn and compare scheduling algorithms**.

## Usage

1. Prepare an input file containing process information (process ID, burst time, arrival time, and optionally priority).
2. Run the program specifying the scheduling algorithm and input/output file paths.
3. View the results including waiting times, turnaround times, and scheduling order.

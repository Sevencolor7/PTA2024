#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int start_time, end_time;
    cin >> start_time >> end_time;

    // 将出发时间和到达时间拆分为小时和分钟
    int start_hour = start_time / 100;
    int start_minute = start_time % 100;
    int end_hour = end_time / 100;
    int end_minute = end_time % 100;

    // 转换为从午夜开始的分钟数
    int start_total_minutes = start_hour * 60 + start_minute;
    int end_total_minutes = end_hour * 60 + end_minute;

    // 计算时间差
    int total_minutes = end_total_minutes - start_total_minutes;

    // 转换回小时和分钟
    int hours = total_minutes / 60;
    int minutes = total_minutes % 60;

    // 输出结果，确保小时和分钟是两位数
    cout << setw(2) << setfill('0') << hours << ":"
         << setw(2) << setfill('0') << minutes << endl;

    return 0;
}

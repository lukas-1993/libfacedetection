#include "opencv2/opencv.hpp"
#include <iostream>
#include <unistd.h>

using namespace cv;
using namespace std;
 
int main()
{
 
    VideoCapture capture;
    //capture.open("1.avi"); //打开视频文件
    capture.open("rtsp://192.168.31.100/live/mainstream");
 
    //创建VideoCapture对象的另一种方式
    //VideoCapture capture("rtsp://admin:hikvision2021@192.168.1.64");
 
    int frameH = capture.get(4);
    int frameW = capture.get(3);
    cout << "frameH:" << frameH << "  frameW:" << frameW << endl;
 
    Mat frame;
 
    while (1)
    {
        capture >> frame;

	sleep(40);
    }
 
    //destroyWindow("test");
    capture.release();//必须加release释放，否则会内存泄漏
 
    return 0;
}

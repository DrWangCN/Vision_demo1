#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    // 创建VideoCapture对象
    cv::VideoCapture cap("./perfectMoment_1.mp4");

    // 检查视频是否成功打开
    if (!cap.isOpened()) {
        std::cout << "Error: Could not open video." << std::endl;
        return -1;
    }

    cv::Mat frame;
    while (true) {
        // 读取当前帧
        cap >> frame;

        // 如果帧为空，则表示视频结束
        if (frame.empty()) break;

        // 显示帧
        cv::imshow("Video", frame);

        // 等待25ms后再显示下一帧，如果用户按下任意键，则退出
        if (cv::waitKey(25) >= 0) break;
    }

    // 释放VideoCapture对象
    cap.release();
    // 销毁所有窗口
    cv::destroyAllWindows();

    return 0;
}


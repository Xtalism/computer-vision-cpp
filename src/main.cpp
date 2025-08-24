#include <stdio.h>
#include <opencv2/opencv.hpp>


int main(int argc, char * argv[])
{
    cv::Mat image;

    image = cv::imread("/home/xtal/computer-vision-cpp/pictures/kanye.jpg");
    if (!image.data)
    {
        printf("No image data! \n");
        return -1;
    }
    cv::namedWindow("Display Image", cv::WINDOW_NORMAL);
    cv::imshow("Display Image", image);
    while (true){
        if (cv::waitKey(0) & 0xFF == 'q') {
            break;
        }
    }
    return 0;
} 

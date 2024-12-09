#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    Mat image{imread("test.jpg")};

    namedWindow("游戏原画");
    imshow("游戏原画", image);

    waitKey(6000);

    return 0;
}

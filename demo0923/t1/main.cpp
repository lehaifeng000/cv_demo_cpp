#include <iostream>
#include <opencv2/opencv.hpp>
#include <math.h>
using namespace cv;
using namespace std;

int main()
{
    Mat src = imread("../data/lena.jpg");

    Mat output_image;
	cvtColor(src, output_image, CV_RGB2GRAY);
    imwrite("test.jpg", output_image);

    // cout<<"hello"<<endl;
    return 0;
}
#include <iostream>
#include <opencv2/opencv.hpp>
#include <math.h>
using namespace cv;
using namespace std;

int main()
{
    Mat src1 = imread("../data/lena.jpg");
    Mat src2 = imread("../data/fox.png");
    Mat output_image;
    Size size1 = Size(128,128);
    Size size2 = Size(128,128);

    resize(src1,src1,size1);
    resize(src2,src2,size2);
    
    // 合并图片
    addWeighted(src1,0.8,src2,0.2,0,output_image);

    imwrite("test.jpg", output_image);
    return 0;
}